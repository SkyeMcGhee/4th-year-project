#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"            // Base UObject class
#include "UObject/ScriptMacros.h"      // UFUNCTION, DECLARE_FUNCTION macros
#include "UObject/UnrealType.h"        // FProperty, etc.
#include "DataLensStructs.h"
#include "DataLensTable.h"
#include "DataLensSubsystem.h"
#include "DataLensTableView.generated.h"

FORCEINLINE uint32 GetTypeHash(const FGroupKey& Key)
{
	return FCrc::MemCrc32(Key.KeyData.GetData(), Key.KeyData.Num());
}

/// <summary>
/// A View on a data table with optional query filtering, column expression, and struct output mapping.
/// </summary>
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), Blueprintable)
class TOOLKITNARRATIVES_API UDataLensTableView : public UObject
{
	GENERATED_BODY()

public:

	/// <summary>
	/// 
	/// </summary>
	UFUNCTION(BlueprintCallable, Category = "View|Query")
	void InitializeQuery();

	/// <summary>
	/// Struct that describes the output shape for this view. Must be BlueprintType and only include int/float/bool fields.
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "View")
	TObjectPtr<UScriptStruct> TargetStructType;

	/// <summary>
	/// The query that defines the view's records
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "View|Query")
	FDataLensQuery Query;

	/// <summary>
	/// Raw result view of the view, Get View Results is a custom node that will return the results as a TArray of the structure provided
	/// </summary>
	/// <param name="OutArray"></param>
	UFUNCTION(BlueprintCallable, CustomThunk, Category = "View")
	void GetResults(TArray<uint8>& OutArray);

	/// <summary>
	/// Internal conversion function used to 
	/// </summary>
	/// <param name="RawData"></param>
	/// <param name="StructType"></param>
	/// <param name="OutStructArray"></param>
	UFUNCTION(BlueprintCallable, Category = "View")
	static void ConvertRawBytesToStructArray(const TArray<uint8>& RawData, UScriptStruct* StructType, TArray<uint8>& OutStructArray);


	DECLARE_FUNCTION(execGetResults);

	template<typename T>
	TArray<T> GetTypedResults()
	{
		TArray<T> TypedArray;
		if (!TargetStructType || TargetStructType->GetStructureSize() != sizeof(T)) return TypedArray;

		const int32 ElementSize = TargetStructType->GetStructureSize();
		TypedArray.SetNum(NumElements);

		for (int32 i = 0; i < NumElements; ++i)
		{
			void* SrcPtr = &RawDataBuffer[i * ElementSize];
			FMemory::Memcpy(&TypedArray[i], SrcPtr, ElementSize);
		}

		return TypedArray;
	}

	/// <summary>
	/// Called by subsystem to rebuild
	/// </summary>
	void Churn();

	/// <summary>
	/// Called to commit build to buffer
	/// </summary>
	void Commit();

protected:
	TArray<FDataLensTargetField>			MappedFields;
	TArray<uint8>							RawDataBuffer;
	TArray<FIntermediateRecord>				TempRows;
	int32									NumElements;
	UDataLensTable*							SourceTable = nullptr;
	TArray<FResolvedField>					ResolvedInputs;
	TArray<FResolvedField>					ResolvedRelated;
	TArray<FDataExpressionToken>			CompiledWhere;
	TArray<TArray<FDataExpressionToken>>	CompiledSelect;
	TArray<EAggregateOp>					SelectAggregates;
	TArray<int32>							GroupByIndices;
	TArray<FSortColumnByIndex>				SortInstructions;
	int32									IntIndex = 0;
	int32									FloatIndex = 0;
	int32									BoolIndex = 0;

	/// <summary>
	/// Find the index of a computed column by its ColumnName
	/// (returns INDEX_NONE if not found)
	/// </summary>
	/// <param name="ColumnName"></param>
	/// <returns></returns>
	int32 FindColumnIndexByName(const FName& ColumnName) const;

	/// <summary>
	/// Call this at Init or post-edit to refresh field mappings.
	/// </summary>
	void CollectFieldMappings();

	/// <summary>
	/// Tokenizes and compiles WHERE or SELECT expressions into RPN.
	/// </summary>
	/// <param name="Expression"></param>
	/// <param name="OutTokens"></param>
	void ParseAndCompileToRPN(const FString& Expression, TArray<FDataExpressionToken>& OutTokens);

	/// <summary>
	/// Evaluates a compiled RPN expression against a record.
	/// </summary>
	/// <param name="RPN"></param>
	/// <param name="AttrValues"></param>
	/// <param name="RelValues"></param>
	/// <returns></returns>
	float EvaluateRPNFloat(
		const TArray<FDataExpressionToken>& RPN,
		const TArray<int32>& AttrValues,
		const TArray<TArray<int32>>& RelValues,
		const FGameplayTagContainer& Tags);

	/// <summary>
	/// Evaluates a compiled RPN expression against a record.
	/// </summary>
	/// <param name="RPN"></param>
	/// <param name="AttrValues"></param>
	/// <param name="RelValues"></param>
	/// <returns></returns>
	bool EvaluateRPNBool(
		const TArray<FDataExpressionToken>& RPN,
		const TArray<int32>& AttrValues,
		const TArray<TArray<int32>>& RelValues,
		const FGameplayTagContainer& Tags);

	/// <summary>
	/// Evaluates a compiled RPN expression against a record.
	/// </summary>
	/// <param name="AggToken"></param>
	/// <param name="AttrValues"></param>
	/// <param name="RelValues"></param>
	/// <returns></returns>
	int EvaluateAggregate(
		const FDataExpressionToken& AggToken,
		const TArray<TArray<int32>>& RelValues);

	/// <summary>
	/// 
	/// </summary>
	/// <param name="ColumnIndex"></param>
	/// <returns></returns>
	int32 GetFieldOffset(int32 ColumnIndex) const
	{
		if (!MappedFields.IsValidIndex(ColumnIndex))
			return INDEX_NONE;

		FProperty* Prop = MappedFields[ColumnIndex].Property;
		return Prop ? Prop->GetOffset_ForInternal() : INDEX_NONE;
	}

	/// <summary>
	/// 
	/// </summary>
	/// <param name="ColumnIndex"></param>
	/// <returns></returns>
	int32 GetFieldSize(int32 ColumnIndex) const
	{
		if (!MappedFields.IsValidIndex(ColumnIndex))
			return 0;

		FProperty* Prop = MappedFields[ColumnIndex].Property;
		return Prop ? Prop->GetSize() : 0;
	}

	/// <summary>
	/// 
	/// </summary>
	/// <param name="StructData"></param>
	/// <param name="Field"></param>
	/// <returns></returns>
	uint8* GetFieldDataPtr(void* StructData, const FDataLensTargetField& Field) const
	{
		return reinterpret_cast<uint8*>(StructData) + Field.Offset;
	}

	/// <summary>
	/// 
	/// </summary>
	/// <typeparam name="T"></typeparam>
	/// <param name="StructData"></param>
	/// <param name="Field"></param>
	/// <returns></returns>
	template<typename T>
	T GetFieldValue(void* StructData, const FDataLensTargetField& Field) const
	{
		ensure(sizeof(T) == Field.Property->GetSize());
		ensure(IsCompatible<T>(Field)); // Optional safety
		uint8* Ptr = GetFieldDataPtr(StructData, Field);
		return *reinterpret_cast<T*>(Ptr);
	}
};
