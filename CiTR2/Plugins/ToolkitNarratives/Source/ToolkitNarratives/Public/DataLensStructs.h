#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "DataLensStructs.generated.h"

/// <summary>
/// Uniquely identifies a record in the Data Lens Subsystem
/// </summary>
USTRUCT(BlueprintType)
struct TOOLKITNARRATIVES_API FRecordAddress
{
    GENERATED_BODY()

public:

    /// <summary>
    /// The Tag used to resolve which Data Lens Table holds the record
    /// </summary>
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Record Address")
    FGameplayTag TableTag;

    /// <summary>
    /// The globally unique ID of the record
    /// </summary>
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Record Address")
    FGuid RecordID;

    FRecordAddress()
        : TableTag(), RecordID()
    {
    }

    FRecordAddress(const FGameplayTag& InSourceID, const FGuid& InRecordID)
        : TableTag(InSourceID), RecordID(InRecordID)
    {
    }

    bool operator==(const FRecordAddress& Other) const
    {
        return TableTag == Other.TableTag && RecordID == Other.RecordID;
    }

    bool operator!=(const FRecordAddress& Other) const
    {
        return !(*this == Other);
    }

    FString ToString() const
    {
        return FString::Printf(TEXT("%s:%s"), *TableTag.ToString(), *RecordID.ToString());
    }
};

/// <summary>
/// Blueprint accessible collection of addresses
/// </summary>
USTRUCT(BlueprintType)
struct FRecordAddressArray
{
    GENERATED_BODY()

    FRecordAddressArray()
        : Addresses()
    {
    }

    UPROPERTY()
    TArray<FRecordAddress> Addresses;
};

/// <summary>
/// Blueprint accessible collection of values
/// </summary>
USTRUCT(BlueprintType)
struct FRecordAttributeValues
{
    GENERATED_BODY()

    UPROPERTY()
    TArray<int32> Values;
};

/// <summary>
/// Blueprint accessible collection of RecordAddresses
/// </summary>
USTRUCT(BlueprintType)
struct FRecordRelatedAddresses
{
    GENERATED_BODY()

    UPROPERTY()
    TArray<FRecordAddressArray> Values;
};

/// <summary>
/// Used to reference an attribute on a DataLensTable either by specifying the table to find in the database or by specifying the RelatedRecords field on the current table to check.
/// </summary>
USTRUCT(BlueprintType)
struct FDataLensFieldAddress
{
    GENERATED_BODY()

    FDataLensFieldAddress()
        : Source(), Attribute()
    {
    }

    /// <summary>
    /// This can be a DataLensTable or a RelatedAttribute within a DataLenseTable
    /// </summary>
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tag Address")
    FGameplayTag Source;

    /// <summary>
    /// The Attribute to resolve to
    /// </summary>
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tag Address")
    FGameplayTag Attribute;
};

/// <summary>
/// Defines the ExpressionFormula that will be used to populate the target column
/// </summary>
USTRUCT(BlueprintType)
struct FLensTableViewColumn
{
    GENERATED_BODY()

    FLensTableViewColumn()
        : Formula(), ColumnName(NAME_None)
    {
    }

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Computed Column")
    FString Formula;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Computed Column", meta = (DisplayName = "Column Name", ToolTip = "Name of the derived column output"))
    FName ColumnName;
};

/// <summary>
/// Indicates which columns should be used for sorting
/// </summary>
USTRUCT(BlueprintType)
struct FSortColumnByName
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName ColumnName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bDescending = false;
};

/// <summary>
/// Stores structured data about a Data Lens Query
/// </summary>
USTRUCT(BlueprintType)
struct FDataLensQuery
{
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FDataLensFieldAddress> InputAliases;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FDataLensFieldAddress> RelatedAliases;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FLensTableViewColumn> Select;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTag From;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FGameplayTag> Join;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString WhereClause;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FName> GroupBy; // ColumnName(s) from Select
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FSortColumnByName> SortBy;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString HavingClause;
};

/// <summary>
/// What kind of aggregate (if any) a column uses
/// </summary>
enum class EAggregateOp : uint8
{
	None,
	Sum, SumIf,
	Avg, Median,
	Min, Max,
	Count, CountIf,
	First, Last,
};

/// <summary>
/// One sort instruction: which column, ascending/descending
/// </summary>
USTRUCT()
struct FSortColumnByIndex
{
	GENERATED_BODY()

	int32 ColumnIndex;
	bool  bDescending;
};

/// <summary>
/// Maps a tag to its related index
/// </summary>
struct FResolvedField
{
	bool           bIsLocal;
	int32          Index;
	FGameplayTag   TargetAttributeTag;
};

/// <summary>
/// Compiled boolean condition used in string expressions
/// </summary>
struct FCompiledCondition {
	enum class ECondOp : uint8 { EQ, NE, LT, LE, GT, GE } Op;
	float Value;

	bool Evaluate(float TestValue) const
	{
		switch (Op)
		{
		case ECondOp::EQ:
			return FMath::IsNearlyEqual(TestValue, Value);
		case ECondOp::NE:
			return !FMath::IsNearlyEqual(TestValue, Value);
		case ECondOp::LT:
			return TestValue < Value;
		case ECondOp::LE:
			return TestValue <= Value;
		case ECondOp::GT:
			return TestValue > Value;
		case ECondOp::GE:
			return TestValue >= Value;
		default:
			return false;
		}
	}
};

/// <summary>
/// A single RPN token for expressions
/// </summary>
USTRUCT()
struct FDataExpressionToken
{
	GENERATED_BODY()

	enum class EType : uint8
	{
		PushConstant,
		PushField,
		PushRelatedAggregate,
		Op_Neg,
		Op_Add,
		Op_Sub,
		Op_Mul,
		Op_Div,
		Op_LT,
		Op_GE,
		Op_LE,
		Op_EQ,
		Op_NE,
		Op_GT,
		Op_And,
		Op_Or,
        PushHasTrait,      // “HasTrait(‘Brave’)” → bool
        PushTraitCount,    // “TraitCount(‘Merchant’)” → int
        PushHasAny,        // “HasAny(‘Beast’,‘Undead’)” → bool
        PushHasAll         // “HasAll(‘Guard’,‘Loyal’)” → bool
	} Type;

	// Data depends on Type:
	float    ConstantValue;				// for PushConstant
	int32    FieldIndex;				// for PushField
	int32    RelatedAliasIdx;			// for PushRelatedAggregate
	FCompiledCondition  AggCondition;	// for PushRelatedAggregate
	EAggregateOp AggOp;					// for PushRelatedAggregate
    FGameplayTagContainer  TraitTag;      // for Trait functions
};

/// <summary>
/// Data type used in a target column of a view
/// </summary>
enum class EDataLensTargetType : uint8
{
	Int,
	Float,
	Bool,
    Guid
};

/// <summary>
/// Maps query column to a view target field
/// </summary>
struct FDataLensTargetField
{
	FName FieldName;
	EDataLensTargetType FieldType;
	FProperty* Property = nullptr;
	int32 Offset = INDEX_NONE;
	int32 IntermediateIndex = -1;
};

/// <summary>
/// SoA style intermediate value mapping used in views
/// </summary>
struct FIntermediateRecord
{
	// Store values per field by index in MappedFields
	FGuid ID;
	TArray<int32> IntValues;
	TArray<float> FloatValues;
	TArray<bool> BoolValues;

	FIntermediateRecord()
		: IntValues(), FloatValues(), BoolValues()
	{
	}

	// Utility: get/set by field index and type
	void SetInt(int32 Index, int32 Value) { IntValues[Index] = Value; }
	int32 GetInt(int32 Index) const { return IntValues[Index]; }

	void SetFloat(int32 Index, float Value) { FloatValues[Index] = Value; }
	float GetFloat(int32 Index) const { return FloatValues[Index]; }

	void SetBool(int32 Index, bool Value) { BoolValues[Index] = Value; }
	bool GetBool(int32 Index) const { return BoolValues[Index]; }
};

/// <summary>
/// Key data used when grouping intermediate records in view mappings
/// </summary>
struct FGroupKey
{
	TArray<uint8> KeyData;

	bool operator==(const FGroupKey& Other) const
	{
		return KeyData == Other.KeyData;
	}
};

/// <summary>
/// Wrapper for per table save data
/// </summary>
USTRUCT(BlueprintType)
struct FDataLensTableSaveData
{
	GENERATED_BODY()

    UPROPERTY()
    FGameplayTag TableTag;

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
};

/// <summary>
/// Wrapper for database save data
/// </summary>
USTRUCT(BlueprintType)
struct FDataLensDatabaseSaveData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	TArray<FDataLensTableSaveData> Tables;
};

USTRUCT()
struct FDataLensRecordUpdatePayload
{
    GENERATED_BODY()

    UPROPERTY()
    FGuid RecordID;

    UPROPERTY()
    TMap<int32, int32> AttributesToSet; // AttributeIndex -> Value

    UPROPERTY()
    TMap<int32, FRecordAddressArray> RelatedToAdd; // RelationIndex -> Addresses
    UPROPERTY()
    TMap<int32, FRecordAddressArray> RelatedToRemove;
    UPROPERTY()
    TSet<int32> ClearRelated; // Clear entire list at these indexes

    UPROPERTY()
    FGameplayTagContainer TraitsToAdd;

    UPROPERTY()
    FGameplayTagContainer TraitsToRemove;

    UPROPERTY()
    bool bClearTraits = false;

    UPROPERTY()
    bool bClearTable = false;

    UPROPERTY()
    bool bDeleteRecord = false;
};