#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "Containers/Array.h"
#include <DataLensStructs.h>
#include "DataLensTable.generated.h"

/// <summary>
/// A System of Arrays style data set supporting Int fields as "Attributes" and Array<RecordAddress> fields as "RelatedRecords".
/// Both attributes and related records can be identified by gameplay tag the system of array then takes the form of
/// Attribute[RecordIndex][AttributeTagIndex] = Value
/// and
/// RelatedRecords[RecordIndex][RelatedRecordTagIndex] = Array<RecordAddress> Addresses
/// </summary>
UCLASS(BlueprintType)
class TOOLKITNARRATIVES_API UDataLensTable : public UObject
{
    GENERATED_BODY()

protected:

    /// <summary>
    /// An index aligned collection of IDs uniquely identifying each record in the table
    /// </summary>
    UPROPERTY()
    TArray<FGuid> IDs;

    /// <summary>
    /// An index aligned collection of attribute Tags
    /// </summary>
    UPROPERTY()
    TArray<FGameplayTag> AttributeTags;

    /// <summary>
    /// An index aligned collection of related record tags
    /// </summary>
    UPROPERTY()
    TArray<FGameplayTag> RelationTags;

    /// <summary>
    /// An index aligned collection of attribute values
    /// </summary>
    UPROPERTY()
    TArray<FRecordAttributeValues> Attributes;

    /// <summary>
    /// An index aligned collection of related record addresses
    /// </summary>
    UPROPERTY()
    TArray<FRecordRelatedAddresses> RelatedRecords;

    /// <summary>
    /// An index aligned collection of traits applied to the record
    /// </summary>
    UPROPERTY()
    TArray<FGameplayTagContainer> Traits;

public:
    mutable FCriticalSection RecordAccessLock;

    UDataLensTable();

    /// <summary>
    /// Returns the index of the tag in AttributeTags or INDEX_NONE if not found
    /// </summary>
    /// <param name="Tag"></param>
    /// <returns>The index of the tag in AttributeTags or INDEX_NONE if not found</returns>
    int32 FindAttributeTagIndex(const FGameplayTag& Tag) const
    {
        return AttributeTags.IndexOfByKey(Tag);
    }

    /// <summary>
    /// Returns the index of the tag in RelationTags or INDEX_NONE if not found
    /// </summary>
    /// <param name="Tag"></param>
    /// <returns>The index of the tag in RelationTags or INDEX_NONE if not found</returns>
    int32 FindRelationTagIndex(const FGameplayTag& Tag) const
    {
        return RelationTags.IndexOfByKey(Tag);
    }

    /// <summary>
    /// Get the number of records this table holds
    /// </summary>
    /// <returns>The number of records the table contains</returns>
    int32 Num() const;

    /// <summary>
    /// Get the value of a given records attribute provided its tag
    /// </summary>
    /// <param name="RecordIndex">The record to read.</param>
    /// <param name="AttributeTag">The field to read</param>
    /// <returns>The value in the found index</returns>
    int32 GetAttributeByTag(int32 RecordIndex, FGameplayTag AttributeTag) const;

    /// <summary>
    /// Get the value of a given records attribute provided its index
    /// </summary>
    /// <param name="RecordIndex">The record to read.</param>
    /// <param name="AttributeIndex">The field to read</param>
    /// <returns>The value in the found index</returns>
    int32 GetAttributeByIndex(int32 RecordIndex, int32 AttributeIndex) const;

    /// <summary>
    /// Get the related records of a given record provided its tag
    /// </summary>
    /// <param name="RecordIndex">The record to read.</param>
    /// <param name="RelationshipTag">The field to read</param>
    /// <returns>The collection of addresses found</returns>
    TArray<FRecordAddress> GetRelationByTag(int32 RecordIndex, FGameplayTag RelationshipTag) const;

    /// <summary>
    /// Get the related records of a given record provided its index
    /// </summary>
    /// <param name="RecordIndex">The record to read.</param>
    /// <param name="RelationshipIndex">The field to read</param>
    /// <returns>The collection of addresses found</returns>
    TArray<FRecordAddress> GetRelationByIndex(int32 RecordIndex, int32 RelationshipIndex) const;

    /// <summary>
    /// Walks a given tag as a category constructing a table based on the logical scheme.
    /// </summary>
    /// <param name="TableTag">The tag to act as the root of the table scheme</param>
    void InitializeFromTag(const FGameplayTag& TableTag);

    /// <summary>
    /// Set the value of a target record and a target attribute
    /// </summary>
    /// <param name="RecordIndex"></param>
    /// <param name="AttributeIndex"></param>
    /// <param name="Value"></param>
    void UpdateAttributeValue(int32 RecordIndex, int32 AttributeIndex, int32 Value);

    /// <summary>
    /// Set the value of a target record and a target related record
    /// </summary>
    /// <param name="RecordIndex"></param>
    /// <param name="RelatedIndex"></param>
    /// <param name="Value"></param>
    void UpdateRelatedRecordValues(int32 RecordIndex, int32 RelatedIndex, TArray<FRecordAddress> Value);

    /// <summary>
    /// Add an address to the target record and target related record
    /// </summary>
    /// <param name="RecordIndex"></param>
    /// <param name="RelatedIndex"></param>
    /// <param name="Address"></param>
    /// <returns></returns>
    int32 AddToRelatedRecordValue(int32 RecordIndex, int32 RelatedIndex, FRecordAddress Address);

    /// <summary>
    /// Remove the target address from the target record and target related record
    /// </summary>
    /// <param name="RecordIndex"></param>
    /// <param name="RelatedIndex"></param>
    /// <param name="Address"></param>
    /// <returns></returns>
    int32 RemoveFromRelatedRecordValue(int32 RecordIndex, int32 RelatedIndex, FRecordAddress Address);

    /// <summary>
    /// Remove the target address from the target record and target related record
    /// </summary>
    /// <param name="RecordIndex"></param>
    /// <param name="RelatedIndex"></param>
    /// <param name="AddressIndex"></param>
    /// <returns></returns>
    int32 RemoveAtIndexFromRelatedRecordValue(int32 RecordIndex, int32 RelatedIndex, int32 AddressIndex);

    /// <summary>
    /// Clear Addresses at this related index
    /// </summary>
    /// <param name="RecordIndex"></param>
    /// <param name="RelatedIndex"></param>
    void ClearAtIndexRelatedRecord(int32 RecordIndex, int32 RelatedIndex);

    /// <summary>
    /// Remove the indicated record from the table
    /// </summary>
    /// <param name="RecordIndex"></param>
    void RemoveRecord(int32 RecordIndex);
    /// <summary>
    /// Remove the indicated record from the table
    /// </summary>
    /// <param name="RecordID"></param>
    void RemoveRecord(FGuid RecordID);

    /// <summary>
    /// Dump the table to a CSV file on the disk for debug and review
    /// </summary>
    /// <param name="FilePath"></param>
    void WriteToCsv(FString FilePath);

    /// <summary>
    /// Dump the table to a CSV style string suitable for logging or debugging
    /// </summary>
    /// <returns></returns>
    FString GenerateCsvString() const;

    /// <summary>
    /// Get the ID of a record by Index
    /// </summary>
    /// <param name="Index"></param>
    /// <returns></returns>
    FGuid GetRecordId(int32 Index) const
    {
        return IDs[Index];
    }

    /// <summary>
    /// Get all the attribute values for the indicated record
    /// </summary>
    /// <param name="RecordIndex"></param>
    /// <returns></returns>
    TArray<int32> GetRecordAttributeValues(int32 RecordIndex) const;

    /// <summary>
    /// Get the values indicated by the field address map
    /// </summary>
    /// <param name="Self"></param>
    /// <param name="RecordIndex"></param>
    /// <param name="Map"></param>
    void GetRecordValues(FGameplayTag Self, int32 Index, TArray<FDataLensFieldAddress> Map, TArray<int32>& Result) const;

    /// <summary>
    /// Get the value of each related record for each related value in the map
    /// </summary>
    /// <param name="Self"></param>
    /// <param name="RecordIndex"></param>
    /// <param name="Map"></param>
    void GetRelatedValues(FGameplayTag Self, int32 Index, TArray<FDataLensFieldAddress> Map, TArray<TArray<int32>>& Result) const;

    /// <summary>
    /// 
    /// </summary>
    /// <param name="RecordIndex"></param>
    /// <returns></returns>
    const FGameplayTagContainer& GetRecordTags(int32 RecordIndex) const;

    void ApplyPayload(const FDataLensRecordUpdatePayload& Payload);

    /// <summary>
    /// Empty the table of all records
    /// </summary>
    void EmptyTable(int32 NewSize = 0);

    /// <summary>
    /// Load table data based on serialized data
    /// </summary>
    /// <param name="TableData"></param>
    void LoadTable(const FDataLensTableSaveData& TableData);

    /// <summary>
    /// Get a copy of the table state suitable for saving
    /// </summary>
    /// <returns></returns>
    void SaveTable(FDataLensTableSaveData& SaveTarget);
};