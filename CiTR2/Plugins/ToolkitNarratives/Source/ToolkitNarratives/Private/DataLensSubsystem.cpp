#include <DataLensSubsystem.h>
#include <DataLensTable.h>
#include <DataLensTableView.h>
#include "CoreMinimal.h"
#include "GameplayTagsManager.h"

UDataLensSubsystem* UDataLensSubsystem::pInstance = nullptr;

void UDataLensSubsystem::ClearDatabase()
{
    // Clear and delete all UDataRecords instances
    for (auto& Pair : TableMap)
    {
        if (Pair.Value)
        {
            Pair.Value->ConditionalBeginDestroy();
        }
    }
    TableMap.Empty();
}

void UDataLensSubsystem::BeginViewChurn()
{
    if (ViewMap.Num() == 0 || bIsChurning || bIsProcessingPayloads)
    {
        return; // Block if already churning or processing payloads
    }

    bIsChurning = true;
    
    ViewChurnTasks.Reset();

    for (auto& Pair : ViewMap)
    {
        if (UDataLensTableView* View = Pair.Value)
        {
            ViewChurnTasks.Add(Async(EAsyncExecution::ThreadPool, [View]()
                {
                    View->Churn();
                }));
        }
    }

    if (ViewChurnTasks.Num() == 0)
    {
        bIsChurning = false;
    }
}

bool UDataLensSubsystem::FinalizeViewCommit()
{
    if (!bIsChurning || ViewChurnTasks.Num() == 0)
    {
        return false;
    }

    for (TFuture<void>& Task : ViewChurnTasks)
    {
        if (!Task.IsReady())
        {
            return false;
        }
    }

    for (auto& Pair : ViewMap)
    {
        if (UDataLensTableView* View = Pair.Value)
        {
            View->Commit();
        }
    }

    ViewChurnTasks.Reset();
    bIsChurning = false;
    return true;
}

void UDataLensSubsystem::BeginPayloadProcessing()
{
    if (!ReadablePayloadBuffer || bIsProcessingPayloads)
    {
        return;
    }

    double CurrentTime = FPlatformTime::Seconds();
    if (PayloadStartTime > 0.0 && (CurrentTime - PayloadStartTime) < (1.0 / SystemFrequency))
    {
        return;
    }

    PayloadStartTime = CurrentTime;

    PayloadProcessingTasks.Reset();
    Swap(WritablePayloadBuffer, ReadablePayloadBuffer);
    for (const auto& TablePair : *ReadablePayloadBuffer)
    {
        const FGameplayTag& TableTag = TablePair.Key;
        const TMap<FGuid, FDataLensRecordUpdatePayload>& RecordMap = TablePair.Value;

        if (RecordMap.Num() == 0) continue;

        if (UDataLensTable** TablePtr = TableMap.Find(TableTag))
        {
            UDataLensTable* Table = *TablePtr;

            TArray<FDataLensRecordUpdatePayload> Payloads;
            Payloads.Reserve(RecordMap.Num());
            for (const auto& RecordPair : RecordMap)
            {
                Payloads.Add(RecordPair.Value);
            }

            PayloadProcessingTasks.Add(Async(EAsyncExecution::ThreadPool, [Table, Payloads = MoveTemp(Payloads)]()
                {
                    for (const FDataLensRecordUpdatePayload& Payload : Payloads)
                    {
                        Table->ApplyPayload(Payload);
                    }
                }));
        }
    }

    bIsProcessingPayloads = PayloadProcessingTasks.Num() > 0;
}

bool UDataLensSubsystem::FinalizePayloadProcessing()
{
    if (!bIsProcessingPayloads || PayloadProcessingTasks.Num() == 0)
    {
        return false;
    }

    for (TFuture<void>& Task : PayloadProcessingTasks)
    {
        if (!Task.IsReady())
        {
            return false;
        }
    }

    PayloadProcessingTasks.Reset();
    bIsProcessingPayloads = false;

    // You can broadcast an event here if needed, e.g., OnPayloadsProcessed.Broadcast();

    return true;
}

void UDataLensSubsystem::InitializeEmptyDatabase()
{
    ClearDatabase();

    PayloadBufferA.Empty();
    PayloadBufferB.Empty();

    WritablePayloadBuffer = &PayloadBufferA;
    ReadablePayloadBuffer = &PayloadBufferB;

    // Get all tags under "DataRecords" root
    FGameplayTag RootTag = FGameplayTag::RequestGameplayTag(FName("DataRecords"));

    // Find direct children of DataRecords - requires a tag manager or cache
    const auto& TagManager = UGameplayTagsManager::Get();
    FGameplayTagContainer Children = TagManager.RequestGameplayTagChildren(RootTag);

    for (const FGameplayTag& TableTag : Children)
    {
        CreateTableFromTag(TableTag);
    }
}

FGameplayTag UDataLensSubsystem::ExtractTableTag(FGameplayTag Tag)
{
    FString TagString = Tag.GetTagName().ToString();
    TArray<FString> TagParts;
    TagString.ParseIntoArray(TagParts, TEXT("."), true);

    if (TagParts.Num() < 2)
    {
        UE_LOG(LogTemp, Warning, TEXT("ExtractTableTag: Invalid tag format %s"), *Tag.ToString());
        return FGameplayTag();
    }

    if (TagParts[0] != TEXT("DataRecords"))
    {
        UE_LOG(LogTemp, Warning, TEXT("ExtractTableTag: Tag does not start with 'DataRecords': %s"), *Tag.ToString());
        return FGameplayTag();
    }

    const FString& TableName = TagParts[1];
    if (TableName.IsEmpty())
    {
        UE_LOG(LogTemp, Warning, TEXT("ExtractTableTag: TableName is empty in tag %s"), *Tag.ToString());
        return FGameplayTag();
    }

    FString TableTagString = FString::Printf(TEXT("DataRecords.%s"), *TableName);
    return FGameplayTag::RequestGameplayTag(FName(*TableTagString));
}

void UDataLensSubsystem::RegisterView(TSubclassOf<UDataLensTableView> ViewType)
{
    if (!ViewType)
    {
        UE_LOG(LogTemp, Warning, TEXT("RegisterView called with invalid ViewType"));
        return;
    }

    if (!ViewMap.Contains(ViewType))
    {
        UDataLensTableView* ViewInstance = NewObject<UDataLensTableView>(this, ViewType);
        ViewMap.Add(ViewType, ViewInstance);
    }
    else
    {
        UE_LOG(LogTemp, Log, TEXT("View already registered: %s"), *ViewType->GetName());
    }
}

UDataLensTableView* UDataLensSubsystem::GetView(TSubclassOf<UDataLensTableView> ViewType)
{
    if (!ViewType || ViewMap.Num() == 0)
    {
        return nullptr;
    }

    UDataLensTableView** FoundView = ViewMap.Find(ViewType);
    return FoundView ? *FoundView : nullptr;
}

UDataLensTable* UDataLensSubsystem::GetDataTable(FGameplayTag TableTag) const
{
    UDataLensTable* const* Found = TableMap.Find(TableTag);
    if (Found)
    {
        return *Found;
    }
    return nullptr;
}

void UDataLensSubsystem::Tick(float DeltaTime)
{
    // Step 1: If processing payloads, check if done
    if (bIsProcessingPayloads)
    {
        if (FinalizePayloadProcessing())
        {
            BeginViewChurn(); // Step 2: Once payloads are done, start view churn
        }
        return;
    }

    // Step 3: If churning, check if commit can happen
    if (bIsChurning)
    {
        if (FinalizeViewCommit())
        {
            const double EndTime = FPlatformTime::Seconds();
            const float TotalDuration = static_cast<float>(EndTime - PayloadStartTime);
            OnUpdated.Broadcast(TotalDuration); // Now broadcast full cycle duration
            BeginPayloadProcessing(); // Step 4: Begin the next cycle
        }
        return;
    }

    // Step 0: Kick off cycle if nothing is active
    if (!bIsProcessingPayloads && !bIsChurning)
    {
        BeginPayloadProcessing();
    }
}

TStatId UDataLensSubsystem::GetStatId() const
{
    RETURN_QUICK_DECLARE_CYCLE_STAT(UDataLensSubsystem, STATGROUP_Tickables);
}

void UDataLensSubsystem::CreateTableFromTag(const FGameplayTag& TableTag)
{
    if (TableMap.Contains(TableTag))
    {
        UE_LOG(LogTemp, Warning, TEXT("Table already exists for tag %s"), *TableTag.ToString());
        return;
    }

    // Create new UDataRecords instance (assuming a factory or NewObject)
    UDataLensTable* NewTable = NewObject<UDataLensTable>(this);
    if (!NewTable)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to create UDataRecords for %s"), *TableTag.ToString());
        return;
    }

    NewTable->InitializeFromTag(TableTag);

    TableMap.Add(TableTag, NewTable);

    UE_LOG(LogTemp, Log, TEXT("Created empty DataRecords table for %s"), *TableTag.ToString());
}

void UDataLensSubsystem::SetAttribute(FGuid RecordId, FGameplayTag Attribute, int32 Value)
{
    // Extract the table tag from the attribute tag
    FGameplayTag TableTag = ExtractTableTag(Attribute);

    UDataLensTable** TablePtr = TableMap.Find(TableTag);
    if (!TablePtr || !*TablePtr)
    {
        UE_LOG(LogTemp, Warning, TEXT("SetAttribute: No table found for tag %s"), *TableTag.ToString());
        return;
    }

    UDataLensTable* Table = *TablePtr;
    int32 AttributeIndex = Table->FindAttributeTagIndex(Attribute);
    if (AttributeIndex == INDEX_NONE)
    {
        UE_LOG(LogTemp, Warning, TEXT("SetAttribute: No attribute index found for tag %s in table %s"), *Attribute.ToString(), *TableTag.ToString());
        return;
    }

    TMap<FGuid, FDataLensRecordUpdatePayload>& TablePayloads = WritablePayloadBuffer->FindOrAdd(TableTag);
    FDataLensRecordUpdatePayload& Payload = TablePayloads.FindOrAdd(RecordId);

    if (Payload.bDeleteRecord)
    {
        return; // Ignore if record deleted
    }

    Payload.RecordID = RecordId;
    Payload.AttributesToSet.Add(AttributeIndex, Value);
}

void UDataLensSubsystem::AddRelatedAddress(FGuid RecordId, FGameplayTag RelatedRecord, FRecordAddress Address)
{
    // Extract TableTag from RelatedRecord
    FGameplayTag TableTag = ExtractTableTag(RelatedRecord);

    UDataLensTable** TablePtr = TableMap.Find(TableTag);
    if (!TablePtr || !*TablePtr)
    {
        UE_LOG(LogTemp, Warning, TEXT("AddRelatedAddress: No table found for tag %s"), *TableTag.ToString());
        return;
    }

    UDataLensTable* Table = *TablePtr;
    int32 RelationIndex = Table->FindRelationTagIndex(RelatedRecord);
    if (RelationIndex == INDEX_NONE)
    {
        UE_LOG(LogTemp, Warning, TEXT("AddRelatedAddress: No relation index found for tag %s in table %s"),
            *RelatedRecord.ToString(), *TableTag.ToString());
        return;
    }

    TMap<FGuid, FDataLensRecordUpdatePayload>& TablePayloads = WritablePayloadBuffer->FindOrAdd(TableTag);
    FDataLensRecordUpdatePayload& Payload = TablePayloads.FindOrAdd(RecordId);

    if (Payload.bDeleteRecord)
    {
        return; // Ignore if record deleted
    }

    Payload.RecordID = RecordId;

    // Remove from Removes if present
    if (Payload.RelatedToRemove.Contains(RelationIndex))
    {
        FRecordAddressArray& RemoveArray = Payload.RelatedToRemove[RelationIndex];
        RemoveArray.Addresses.Remove(Address);
        if (RemoveArray.Addresses.Num() == 0)
        {
            Payload.RelatedToRemove.Remove(RelationIndex);
        }
    }

    // Add the address to Adds
    FRecordAddressArray& AddArray = Payload.RelatedToAdd.FindOrAdd(RelationIndex);
    if (!AddArray.Addresses.Contains(Address))
    {
        AddArray.Addresses.Add(Address);
    }
}

void UDataLensSubsystem::RemoveRelatedAddress(FGuid RecordId, FGameplayTag RelatedRecord, FRecordAddress Address)
{
    // Extract TableTag from RelatedRecord
    FGameplayTag TableTag = ExtractTableTag(RelatedRecord);

    UDataLensTable** TablePtr = TableMap.Find(TableTag);
    if (!TablePtr || !*TablePtr)
    {
        UE_LOG(LogTemp, Warning, TEXT("RemoveRelatedAddress: No table found for tag %s"), *TableTag.ToString());
        return;
    }

    UDataLensTable* Table = *TablePtr;
    int32 RelationIndex = Table->FindRelationTagIndex(RelatedRecord);
    if (RelationIndex == INDEX_NONE)
    {
        UE_LOG(LogTemp, Warning, TEXT("RemoveRelatedAddress: No relation index found for tag %s in table %s"),
            *RelatedRecord.ToString(), *TableTag.ToString());
        return;
    }

    TMap<FGuid, FDataLensRecordUpdatePayload>& TablePayloads = WritablePayloadBuffer->FindOrAdd(TableTag);
    FDataLensRecordUpdatePayload& Payload = TablePayloads.FindOrAdd(RecordId);

    if (Payload.bDeleteRecord)
    {
        return; // Ignore if record deleted
    }

    Payload.RecordID = RecordId;

    // Remove from Adds if present
    if (Payload.RelatedToAdd.Contains(RelationIndex))
    {
        FRecordAddressArray AddArray = Payload.RelatedToAdd[RelationIndex];
        AddArray.Addresses.Remove(Address);
        if (AddArray.Addresses.Num() == 0)
        {
            Payload.RelatedToAdd.Remove(RelationIndex);
        }
    }

    if (Payload.ClearRelated.Contains(RelationIndex))
    {
        // If clear is set, no need to track removals since the list is reset
        return;
    }

    // Otherwise, record removal
    FRecordAddressArray& RemoveArray = Payload.RelatedToRemove.FindOrAdd(RelationIndex);
    if (!RemoveArray.Addresses.Contains(Address))
    {
        RemoveArray.Addresses.Add(Address);
    }
}

void UDataLensSubsystem::ClearRelatedAddresses(FGuid RecordId, FGameplayTag RelatedRecord)
{
    // Extract TableTag from RelatedRecord (assumes format: DataRecords.TableTag.Rel.RelatedColumnTag)
    FGameplayTag TableTag = ExtractTableTag(RelatedRecord); // You’d implement this utility

    UDataLensTable** TablePtr = TableMap.Find(TableTag);
    if (!TablePtr || !*TablePtr)
    {
        UE_LOG(LogTemp, Warning, TEXT("ClearRelatedAddresses: No table found for tag %s"), *TableTag.ToString());
        return;
    }

    UDataLensTable* Table = *TablePtr;
    int32 RelationIndex = Table->FindRelationTagIndex(RelatedRecord);
    if (RelationIndex == INDEX_NONE)
    {
        UE_LOG(LogTemp, Warning, TEXT("ClearRelatedAddresses: No relation index found for tag %s in table %s"),
            *RelatedRecord.ToString(), *TableTag.ToString());
        return;
    }

    TMap<FGuid, FDataLensRecordUpdatePayload>& TablePayloads = WritablePayloadBuffer->FindOrAdd(TableTag);
    FDataLensRecordUpdatePayload& Payload = TablePayloads.FindOrAdd(RecordId);

    if (Payload.bDeleteRecord)
    {
        return; // Ignore if deleted
    }

    Payload.RecordID = RecordId;
    Payload.ClearRelated.Add(RelationIndex);
    Payload.RelatedToAdd.Remove(RelationIndex);
    Payload.RelatedToRemove.Remove(RelationIndex);
}

void UDataLensSubsystem::AddTraitTag(FGuid RecordId, FGameplayTag TableTag, FGameplayTag TraitTag)
{
    if (!TableMap.Contains(TableTag))
    {
        UE_LOG(LogTemp, Warning, TEXT("AddTraitTag: No table found for tag %s"), *TableTag.ToString());
        return;
    }

    TMap<FGuid, FDataLensRecordUpdatePayload>& TablePayloads = WritablePayloadBuffer->FindOrAdd(TableTag);
    FDataLensRecordUpdatePayload& Payload = TablePayloads.FindOrAdd(RecordId);

    if (Payload.bDeleteRecord)
    {
        return; // Ignore if record is flagged for deletion
    }

    Payload.RecordID = RecordId;
    Payload.TraitsToRemove.RemoveTag(TraitTag); // Cancel removal if it was marked

    Payload.TraitsToAdd.AddTag(TraitTag); // Always allow adding, regardless of bClearTraits
}

void UDataLensSubsystem::RemoveTraitTag(FGuid RecordId, FGameplayTag TableTag, FGameplayTag TraitTag)
{
    if (!TableMap.Contains(TableTag))
    {
        UE_LOG(LogTemp, Warning, TEXT("RemoveTraitTag: No table found for tag %s"), *TableTag.ToString());
        return;
    }

    TMap<FGuid, FDataLensRecordUpdatePayload>& TablePayloads = WritablePayloadBuffer->FindOrAdd(TableTag);
    FDataLensRecordUpdatePayload& Payload = TablePayloads.FindOrAdd(RecordId);

    if (Payload.bDeleteRecord)
    {
        return; // Ignore commands after deletion
    }

    Payload.RecordID = RecordId;
    Payload.TraitsToAdd.RemoveTag(TraitTag);      // Cancel addition if it was added earlier

    if (Payload.bClearTraits)
    {
        // Tag would be cleared anyway, no need to track it
        return;
    }

    Payload.TraitsToRemove.AddTag(TraitTag);      // Mark it for removal
}

void UDataLensSubsystem::ClearTraitTags(FGuid RecordId, FGameplayTag TableTag)
{
    if (!TableMap.Contains(TableTag))
    {
        UE_LOG(LogTemp, Warning, TEXT("ClearTraitTags: No table found for tag %s"), *TableTag.ToString());
        return;
    }

    TMap<FGuid, FDataLensRecordUpdatePayload>& TablePayloads = WritablePayloadBuffer->FindOrAdd(TableTag);
    FDataLensRecordUpdatePayload& Payload = TablePayloads.FindOrAdd(RecordId);

    if (Payload.bDeleteRecord)
    {
        return; // Ignore commands after deletion
    }

    Payload.RecordID = RecordId;
    Payload.bClearTraits = true;
    Payload.TraitsToAdd.Reset();
    Payload.TraitsToRemove.Reset();
}

FGuid UDataLensSubsystem::CreateNewRecord(FGameplayTag TableTag)
{
    if (!TableMap.Contains(TableTag))
    {
        UE_LOG(LogTemp, Warning, TEXT("CreateNewRecord: No table found for tag %s"), *TableTag.ToString());
        return FGuid(); // Invalid
    }

    FGuid NewRecordID = FGuid::NewGuid();

    TMap<FGuid, FDataLensRecordUpdatePayload>& TablePayloads = WritablePayloadBuffer->FindOrAdd(TableTag);
    FDataLensRecordUpdatePayload& Payload = TablePayloads.FindOrAdd(NewRecordID);

    Payload.RecordID = NewRecordID;
    // Other fields remain empty; the table will fill defaults when applied

    return NewRecordID;
}

void UDataLensSubsystem::DeleteRecord(FGuid RecordId, FGameplayTag TableTag)
{
    if (!RecordId.IsValid())
    {
        UE_LOG(LogTemp, Warning, TEXT("DeleteRecord: Invalid RecordId"));
        return;
    }

    if (!TableMap.Contains(TableTag))
    {
        UE_LOG(LogTemp, Warning, TEXT("DeleteRecord: No table found for tag %s"), *TableTag.ToString());
        return;
    }

    // Access or create payload buffer for this table
    TMap<FGuid, FDataLensRecordUpdatePayload>& TablePayloads = WritablePayloadBuffer->FindOrAdd(TableTag);
    FDataLensRecordUpdatePayload& Payload = TablePayloads.FindOrAdd(RecordId);

    // If this record is already marked for deletion, skip
    if (Payload.bDeleteRecord)
    {
        return;
    }

    // Mark for deletion and clear other staged ops
    Payload.RecordID = RecordId;
    Payload.bDeleteRecord = true;
    Payload.AttributesToSet.Empty();
    Payload.RelatedToAdd.Empty();
    Payload.RelatedToRemove.Empty();
    Payload.ClearRelated.Empty();
    Payload.TraitsToAdd.Reset();
    Payload.TraitsToRemove.Reset();
    Payload.bClearTraits = false;
}

void UDataLensSubsystem::EmptyTable(FGameplayTag TableTag)
{
    if (UDataLensTable** TablePtr = TableMap.Find(TableTag))
    {
        if (*TablePtr)
        {
            // Clear the current payload buffer for this table (discard pending updates)
            WritablePayloadBuffer->FindOrAdd(TableTag).Empty();

            // Create a "clear table" payload with special RecordID (all zero GUID)
            FDataLensRecordUpdatePayload ClearPayload;
            ClearPayload.RecordID.Invalidate();  // sets to 00000000-0000-0000-0000-000000000000
            ClearPayload.bClearTable = true;

            // Add the clear payload as the first command
            (*WritablePayloadBuffer)[TableTag].Add(ClearPayload.RecordID, MoveTemp(ClearPayload));
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("EmptyTable: No table found for tag %s"), *TableTag.ToString());
    }
}

FDataLensDatabaseSaveData UDataLensSubsystem::SaveDatabase()
{
    FDataLensDatabaseSaveData SaveData;

    for (const auto& Pair : TableMap)
    {
        FGameplayTag TableTag = Pair.Key;
        UDataLensTable* Table = Pair.Value;

        FDataLensTableSaveData TableSave;
        TableSave.TableTag = TableTag;

        Table->SaveTable(TableSave); // Each table serializes its own data

        SaveData.Tables.Add(TableSave);
    }

    return SaveData;
}

void UDataLensSubsystem::LoadDatabase(const FDataLensDatabaseSaveData& SaveData)
{
    TableMap.Empty(); // Wipe current state

    for (const FDataLensTableSaveData& TableData : SaveData.Tables)
    {
        UDataLensTable* NewTable = NewObject<UDataLensTable>(this);
        NewTable->LoadTable(TableData);
        TableMap.Add(TableData.TableTag, NewTable);
    }
}
