#include "DataLensTable.h"
#include "GameplayTagsManager.h"
#include "DataLensSubsystem.h"

UDataLensTable::UDataLensTable()
{
}

int32 UDataLensTable::Num() const
{
    return IDs.Num();
}

int32 UDataLensTable::GetAttributeByTag(int32 Index, FGameplayTag Attribute) const
{
    int32 index = FindAttributeTagIndex(Attribute);
    return GetAttributeByIndex(Index, index);
}

int32 UDataLensTable::GetAttributeByIndex(int32 Index, int32 Attribute) const
{
    return Attributes[Index].Values[Attribute];
}

TArray<FRecordAddress> UDataLensTable::GetRelationByTag(int32 Index, FGameplayTag Relationship) const
{
    int32 index = FindRelationTagIndex(Relationship);
    return GetRelationByIndex(Index, index);
}

TArray<FRecordAddress> UDataLensTable::GetRelationByIndex(int32 Index, int32 Relationship) const
{
    return RelatedRecords[Index].Values[Relationship].Addresses;
}

void UDataLensTable::InitializeFromTag(const FGameplayTag& TableTag)
{
    FScopeLock Lock(&RecordAccessLock);
    AttributeTags.Empty();
    RelationTags.Empty();

    UGameplayTagsManager& TagsManager = UGameplayTagsManager::Get();
    FString BaseTagString = TableTag.GetTagName().ToString();
    FName AttTagName(*(BaseTagString + TEXT(".Att")));
    FName RefTagName(*(BaseTagString + TEXT(".Ref")));
    // Find children under TableTag/Att
    FGameplayTag AttParentTag = FGameplayTag::RequestGameplayTag(AttTagName);
    FGameplayTagContainer AttChildren = TagsManager.RequestGameplayTagChildren(AttParentTag);
    for (const FGameplayTag& Tag : AttChildren)
    {
        AttributeTags.Add(Tag);
    }

    // Find children under TableTag/Ref
    FGameplayTag RefParentTag = FGameplayTag::RequestGameplayTag(RefTagName);
    FGameplayTagContainer RefChildren = TagsManager.RequestGameplayTagChildren(RefParentTag);
    for (const FGameplayTag& Tag : RefChildren)
    {
        RelationTags.Add(Tag);
    }
}

void UDataLensTable::UpdateAttributeValue(int32 RecordIndex, int32 AttributeIndex, int32 Value)
{
    FScopeLock Lock(&RecordAccessLock);
    if (Attributes.IsValidIndex(RecordIndex) && Attributes[RecordIndex].Values.IsValidIndex(AttributeIndex))
    {
        Attributes[RecordIndex].Values[AttributeIndex] = Value;
    }
}

void UDataLensTable::UpdateRelatedRecordValues(int32 RecordIndex, int32 RelatedIndex, TArray<FRecordAddress> Value)
{
    FScopeLock Lock(&RecordAccessLock);
    if (RelatedRecords.IsValidIndex(RecordIndex) && RelatedRecords[RecordIndex].Values.IsValidIndex(RelatedIndex))
    {
        RelatedRecords[RecordIndex].Values[RelatedIndex].Addresses = Value;
    }
}

int32 UDataLensTable::AddToRelatedRecordValue(int32 RecordIndex, int32 RelatedIndex, FRecordAddress Address)
{
    FScopeLock Lock(&RecordAccessLock);
    if (RelatedRecords.IsValidIndex(RecordIndex) && RelatedRecords[RecordIndex].Values.IsValidIndex(RelatedIndex))
    {
        RelatedRecords[RecordIndex].Values[RelatedIndex].Addresses.Add(Address);
        return RelatedRecords[RecordIndex].Values[RelatedIndex].Addresses.Num();
    }
    return 0;
}

int32 UDataLensTable::RemoveFromRelatedRecordValue(int32 RecordIndex, int32 RelatedIndex, FRecordAddress Address)
{
    FScopeLock Lock(&RecordAccessLock);
    if (RelatedRecords.IsValidIndex(RecordIndex) && RelatedRecords[RecordIndex].Values.IsValidIndex(RelatedIndex))
    {
        return RelatedRecords[RecordIndex].Values[RelatedIndex].Addresses.Remove(Address);
    }
    return 0;
}

int32 UDataLensTable::RemoveAtIndexFromRelatedRecordValue(int32 RecordIndex, int32 RelatedIndex, int32 AddressIndex)
{
    FScopeLock Lock(&RecordAccessLock);
    if (RelatedRecords.IsValidIndex(RecordIndex) && RelatedRecords[RecordIndex].Values.IsValidIndex(RelatedIndex))
    {
        TArray<FRecordAddress>& Addresses = RelatedRecords[RecordIndex].Values[RelatedIndex].Addresses;
        if (Addresses.IsValidIndex(AddressIndex))
        {
            Addresses.RemoveAt(AddressIndex);
            return 1;
        }
    }
    return 0;
}

void UDataLensTable::ClearAtIndexRelatedRecord(int32 RecordIndex, int32 RelatedIndex)
{
    FScopeLock Lock(&RecordAccessLock);
    if (RelatedRecords.IsValidIndex(RecordIndex) && RelatedRecords[RecordIndex].Values.IsValidIndex(RelatedIndex))
    {
        RelatedRecords[RecordIndex].Values[RelatedIndex].Addresses.Empty();
    }
}

void UDataLensTable::RemoveRecord(int32 RecordIndex)
{
    FScopeLock Lock(&RecordAccessLock);
    if (IDs.IsValidIndex(RecordIndex))
    {
        IDs.RemoveAt(RecordIndex);
        Attributes.RemoveAt(RecordIndex);
        RelatedRecords.RemoveAt(RecordIndex);
    }
}

void UDataLensTable::RemoveRecord(FGuid RecordID)
{
    FScopeLock Lock(&RecordAccessLock);
    const int32 Index = IDs.IndexOfByKey(RecordID);
    if (Index != INDEX_NONE)
    {
        RemoveRecord(Index);
    }
}

void UDataLensTable::WriteToCsv(FString FilePath)
{
    FFileHelper::SaveStringToFile(GenerateCsvString(), *FilePath);
}

FString UDataLensTable::GenerateCsvString() const
{
    FScopeLock ScopeLock(&RecordAccessLock);

    FString Output;
    TArray<FString> Headers;
    Headers.Add(TEXT("ID"));

    auto GetLeafName = [](const FGameplayTag& Tag) -> FString
        {
            FString Full = Tag.ToString();
            FString Leaf;
            Full.Split(TEXT("."), nullptr, &Leaf, ESearchCase::IgnoreCase, ESearchDir::FromEnd);
            return Leaf;
        };

    for (const FGameplayTag& Tag : AttributeTags)
    {
        Headers.Add(GetLeafName(Tag));
    }

    for (const FGameplayTag& Tag : RelationTags)
    {
        Headers.Add(GetLeafName(Tag));
    }

    Output += FString::Join(Headers, TEXT(",")) + LINE_TERMINATOR;

    for (int32 i = 0; i < IDs.Num(); ++i)
    {
        TArray<FString> Row;
        Row.Add(IDs[i].ToString());

        for (int32 j = 0; j < AttributeTags.Num(); ++j)
        {
            Row.Add(FString::FromInt(Attributes[i].Values.IsValidIndex(j) ? Attributes[i].Values[j] : 0));
        }

        for (int32 j = 0; j < RelationTags.Num(); ++j)
        {
            if (RelatedRecords[i].Values.IsValidIndex(j))
            {
                TArray<FString> Related;
                for (const FRecordAddress& Addr : RelatedRecords[i].Values[j].Addresses)
                {
                    Related.Add(Addr.ToString());
                }
                Row.Add(FString::Join(Related, TEXT("|")));
            }
            else
            {
                Row.Add(TEXT(""));
            }
        }

        Output += FString::Join(Row, TEXT(",")) + LINE_TERMINATOR;
    }

    return Output;
}

TArray<int32> UDataLensTable::GetRecordAttributeValues(int32 Index) const
{
    FScopeLock Lock(&RecordAccessLock);
    return Attributes[Index].Values;
}

void UDataLensTable::GetRecordValues(FGameplayTag Self, int32 Index, TArray<FDataLensFieldAddress> Map, TArray<int32>& Result) const
{
    FScopeLock Lock(&RecordAccessLock);
    UDataLensSubsystem* Sub = UDataLensSubsystem::GetDataLensSubsystem();

    for (int i = 0; i < Map.Num(); ++i)
    {
        FDataLensFieldAddress Addr = Map[i];
        if (Addr.Source == Self)
        {
            Result[i] = GetAttributeByTag(Index, Addr.Attribute);
        }
        else
        {
            TArray<FRecordAddress> Rel = GetRelationByTag(Index, Addr.Source);
            if (Rel.Num() > 0)
            {
                UDataLensTable* Target = Sub->GetDataTable(Rel[0].TableTag);
                if (Target)
                {
                    int32 RecIdx = Target->IDs.IndexOfByKey(Rel[0].RecordID);
                    if (RecIdx != INDEX_NONE)
                    {
                        Result[i] = Target->GetAttributeByTag(RecIdx, Addr.Attribute);
                    }
                    else
                    {
                        Result[i] = 0;
                    }
                }
                else
                {
                    Result[i] = 0;
                }
            }
            else
            {
                Result[i] = 0;
            }
        }
    }
}

void UDataLensTable::GetRelatedValues(FGameplayTag Self, int32 Index, TArray<FDataLensFieldAddress> Map, TArray<TArray<int32>>& Result) const
{
    FScopeLock Lock(&RecordAccessLock);
    UDataLensSubsystem* Sub = UDataLensSubsystem::GetDataLensSubsystem();

    for (int i=0; i < Map.Num(); ++i)
    {
        FDataLensFieldAddress Addr = Map[i];
        Result[i].Empty();
        TArray<FRecordAddress> Rel = GetRelationByTag(Index, Addr.Source);
        if (Rel.Num() > 0)
        {
            Result[i].SetNum(Rel.Num());
            for (int ii=0; ii < Rel.Num(); ++ii)
            {
                UDataLensTable* Target = Sub->GetDataTable(Rel[ii].TableTag);
                if (Target)
                {
                    int32 RecIdx = Target->IDs.IndexOfByKey(Rel[ii].RecordID);
                    if (RecIdx != INDEX_NONE)
                    {
                        Result[i][ii] = Target->GetAttributeByTag(RecIdx, Addr.Attribute);
                    }
                    else
                    {
                        Result[i][ii] = 0;
                    }
                }
                else
                {
                    Result[i][ii] = 0;
                }
            }
        }
    }
}

const FGameplayTagContainer& UDataLensTable::GetRecordTags(int32 RecordIndex) const
{
    return Traits[RecordIndex];
}

void UDataLensTable::ApplyPayload(const FDataLensRecordUpdatePayload& Payload)
{
    if (Payload.bClearTable)
    {
        EmptyTable();
        return;
    }

    const FGuid& RecordID = Payload.RecordID;
    const int32 RecordIndex = IDs.IndexOfByKey(RecordID);
    if (RecordIndex == INDEX_NONE)
    {
        IDs.Add(RecordID);

        // Add attributes, applying payload values where present
        FRecordAttributeValues AttributeEntry;
        AttributeEntry.Values.SetNum(AttributeTags.Num());
        for (int32 i = 0; i < AttributeTags.Num(); ++i)
        {
            if (const int32* FoundValue = Payload.AttributesToSet.Find(i))
            {
                AttributeEntry.Values[i] = *FoundValue;
            }
            else
            {
                AttributeEntry.Values[i] = 0;
            }
        }
        Attributes.Add(AttributeEntry);

        // Add related records, applying payload adds where present
        FRecordRelatedAddresses RelatedEntry;
        RelatedEntry.Values.SetNum(RelationTags.Num());
        for (int32 i = 0; i < RelationTags.Num(); ++i)
        {
            if (const FRecordAddressArray* Addrs = Payload.RelatedToAdd.Find(i))
            {
                RelatedEntry.Values[i] = *Addrs;
            }
            else
            {
                RelatedEntry.Values[i] = FRecordAddressArray();
            }
        }
        RelatedRecords.Add(RelatedEntry);

        // Initialise traits
        if (Payload.TraitsToAdd.Num() > 0)
        {
            Traits.Add(FGameplayTagContainer(Payload.TraitsToAdd));
        }
        else
        {
            Traits.Add(FGameplayTagContainer());
        }

        // Early out: no need to apply anything else
        return;
    }

    if (Payload.bDeleteRecord)
    {
        RemoveRecord(RecordIndex);
        return;
    }

    for (const auto& Pair : Payload.AttributesToSet)
    {
        UpdateAttributeValue(RecordIndex, Pair.Key, Pair.Value);
    }

    for (int32 RelIndex : Payload.ClearRelated)
    {
        ClearAtIndexRelatedRecord(RecordIndex, RelIndex);
    }

    for (const auto& Rem : Payload.RelatedToRemove)
    {
        for (const FRecordAddress& Addr : Rem.Value.Addresses)
        {
            RemoveFromRelatedRecordValue(RecordIndex, Rem.Key, Addr);
        }
    }

    for (const auto& Add : Payload.RelatedToAdd)
    {
        for (const FRecordAddress& Addr : Add.Value.Addresses)
        {
            AddToRelatedRecordValue(RecordIndex, Add.Key, Addr);
        }
    }

    if (Payload.bClearTraits)
    {
        Traits[RecordIndex].Reset();
    }

    FGameplayTagContainer TagsToRemove = Payload.TraitsToRemove;
    Traits[RecordIndex].RemoveTags(TagsToRemove);

    for (const auto& Trait : Payload.TraitsToAdd)
    {
        Traits[RecordIndex].AddTag(Trait);
    }
}

void UDataLensTable::EmptyTable(int32 NewSize)
{
    IDs.Reset(NewSize);
    Attributes.Reset(NewSize);
    RelatedRecords.Reset(NewSize);
    Traits.Reset(NewSize);
}

void UDataLensTable::LoadTable(const FDataLensTableSaveData& TableData)
{
    // Build mapping: LiveTagIndex -> SaveDataIndex
    TArray<int32> AttributeIndexMap;
    AttributeIndexMap.SetNum(AttributeTags.Num());

    for (int32 i = 0; i < AttributeTags.Num(); ++i)
    {
        const FGameplayTag& LiveTag = AttributeTags[i];
        int32 SaveIndex = TableData.AttributeTags.IndexOfByKey(LiveTag);
        AttributeIndexMap[i] = SaveIndex; // SaveIndex can be INDEX_NONE
    }

    TArray<int32> RelationIndexMap;
    RelationIndexMap.SetNum(RelationTags.Num());

    for (int32 i = 0; i < RelationTags.Num(); ++i)
    {
        const FGameplayTag& LiveTag = RelationTags[i];
        int32 SaveIndex = TableData.RelationTags.IndexOfByKey(LiveTag);
        RelationIndexMap[i] = SaveIndex;
    }

    // Clear existing data (optional, depending on use case)
    int RecordCount = TableData.IDs.Num();
    EmptyTable(RecordCount);

    for (int32 i = 0; i < RecordCount; ++i)
    {
        // Copy ID
        IDs.Add(TableData.IDs[i]);

        // Copy traits directly
        Traits[i] = TableData.Traits[i];

        // Attributes
        FRecordAttributeValues NewAttr;
        NewAttr.Values.SetNum(AttributeTags.Num());

        for (int32 j = 0; j < AttributeTags.Num(); ++j)
        {
            int32 SaveIndex = AttributeIndexMap[j];
            NewAttr.Values[j] = (SaveIndex != INDEX_NONE)
                ? TableData.Attributes[i].Values[SaveIndex]
                : 0; // default missing tag to 0
        }

        // Related Records
        FRecordRelatedAddresses NewRel;
        NewRel.Values.SetNum(RelationTags.Num());

        for (int32 j = 0; j < RelationTags.Num(); ++j)
        {
            int32 SaveIndex = RelationIndexMap[j];
            NewRel.Values[j] = (SaveIndex != INDEX_NONE)
                ? TableData.RelatedRecords[i].Values[SaveIndex]
                : FRecordAddressArray(); // default missing tag to empty
        }
    }
}

void UDataLensTable::SaveTable(FDataLensTableSaveData& SaveTarget)
{
    int32 RecordCount = IDs.Num();

    SaveTarget.IDs = IDs;
    SaveTarget.AttributeTags = AttributeTags;
    SaveTarget.RelationTags = RelationTags;

    SaveTarget.Attributes.SetNum(RecordCount);
    SaveTarget.RelatedRecords.SetNum(RecordCount);
    SaveTarget.Traits.SetNum(RecordCount);

    for (int32 i = 0; i < RecordCount; ++i)
    {
        SaveTarget.Attributes[i] = Attributes[i];
        SaveTarget.RelatedRecords[i] = RelatedRecords[i];
        SaveTarget.Traits[i] = Traits[i];
    }
}
