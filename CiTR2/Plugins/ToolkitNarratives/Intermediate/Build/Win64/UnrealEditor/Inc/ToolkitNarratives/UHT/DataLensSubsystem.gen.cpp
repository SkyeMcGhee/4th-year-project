// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataLensSubsystem.h"
#include "DataLensStructs.h"
#include "Engine/GameInstance.h"
#include "GameplayTagContainer.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDataLensSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
TOOLKITNARRATIVES_API UClass* Z_Construct_UClass_UDataLensSubsystem();
TOOLKITNARRATIVES_API UClass* Z_Construct_UClass_UDataLensSubsystem_NoRegister();
TOOLKITNARRATIVES_API UClass* Z_Construct_UClass_UDataLensTable_NoRegister();
TOOLKITNARRATIVES_API UClass* Z_Construct_UClass_UDataLensTableView_NoRegister();
TOOLKITNARRATIVES_API UFunction* Z_Construct_UDelegateFunction_ToolkitNarratives_OnTickCommitted__DelegateSignature();
TOOLKITNARRATIVES_API UScriptStruct* Z_Construct_UScriptStruct_FDataLensDatabaseSaveData();
TOOLKITNARRATIVES_API UScriptStruct* Z_Construct_UScriptStruct_FRecordAddress();
UPackage* Z_Construct_UPackage__Script_ToolkitNarratives();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnTickCommitted ******************************************************
struct Z_Construct_UDelegateFunction_ToolkitNarratives_OnTickCommitted__DelegateSignature_Statics
{
	struct _Script_ToolkitNarratives_eventOnTickCommitted_Parms
	{
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataLensSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnTickCommitted constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnTickCommitted constinit property declarations ************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnTickCommitted Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ToolkitNarratives_OnTickCommitted__DelegateSignature_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ToolkitNarratives_eventOnTickCommitted_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ToolkitNarratives_OnTickCommitted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolkitNarratives_OnTickCommitted__DelegateSignature_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolkitNarratives_OnTickCommitted__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnTickCommitted Property Definitions ***********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ToolkitNarratives_OnTickCommitted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ToolkitNarratives, nullptr, "OnTickCommitted__DelegateSignature", 	Z_Construct_UDelegateFunction_ToolkitNarratives_OnTickCommitted__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolkitNarratives_OnTickCommitted__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ToolkitNarratives_OnTickCommitted__DelegateSignature_Statics::_Script_ToolkitNarratives_eventOnTickCommitted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolkitNarratives_OnTickCommitted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ToolkitNarratives_OnTickCommitted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ToolkitNarratives_OnTickCommitted__DelegateSignature_Statics::_Script_ToolkitNarratives_eventOnTickCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ToolkitNarratives_OnTickCommitted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ToolkitNarratives_OnTickCommitted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTickCommitted_DelegateWrapper(const FMulticastScriptDelegate& OnTickCommitted, float Duration)
{
	struct _Script_ToolkitNarratives_eventOnTickCommitted_Parms
	{
		float Duration;
	};
	_Script_ToolkitNarratives_eventOnTickCommitted_Parms Parms;
	Parms.Duration=Duration;
	OnTickCommitted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnTickCommitted ********************************************************

// ********** Begin Class UDataLensSubsystem Function AddRelatedAddress ****************************
struct Z_Construct_UFunction_UDataLensSubsystem_AddRelatedAddress_Statics
{
	struct DataLensSubsystem_eventAddRelatedAddress_Parms
	{
		FGuid RecordId;
		FGameplayTag RelatedRecord;
		FRecordAddress Address;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Writer" },
		{ "ModuleRelativePath", "Public/DataLensSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddRelatedAddress constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecordId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelatedRecord;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Address;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddRelatedAddress constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddRelatedAddress Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLensSubsystem_AddRelatedAddress_Statics::NewProp_RecordId = { "RecordId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventAddRelatedAddress_Parms, RecordId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLensSubsystem_AddRelatedAddress_Statics::NewProp_RelatedRecord = { "RelatedRecord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventAddRelatedAddress_Parms, RelatedRecord), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLensSubsystem_AddRelatedAddress_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventAddRelatedAddress_Parms, Address), Z_Construct_UScriptStruct_FRecordAddress, METADATA_PARAMS(0, nullptr) }; // 3084208652
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLensSubsystem_AddRelatedAddress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_AddRelatedAddress_Statics::NewProp_RecordId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_AddRelatedAddress_Statics::NewProp_RelatedRecord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_AddRelatedAddress_Statics::NewProp_Address,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_AddRelatedAddress_Statics::PropPointers) < 2048);
// ********** End Function AddRelatedAddress Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLensSubsystem_AddRelatedAddress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataLensSubsystem, nullptr, "AddRelatedAddress", 	Z_Construct_UFunction_UDataLensSubsystem_AddRelatedAddress_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_AddRelatedAddress_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDataLensSubsystem_AddRelatedAddress_Statics::DataLensSubsystem_eventAddRelatedAddress_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_AddRelatedAddress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLensSubsystem_AddRelatedAddress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataLensSubsystem_AddRelatedAddress_Statics::DataLensSubsystem_eventAddRelatedAddress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLensSubsystem_AddRelatedAddress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLensSubsystem_AddRelatedAddress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLensSubsystem::execAddRelatedAddress)
{
	P_GET_STRUCT(FGuid,Z_Param_RecordId);
	P_GET_STRUCT(FGameplayTag,Z_Param_RelatedRecord);
	P_GET_STRUCT(FRecordAddress,Z_Param_Address);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddRelatedAddress(Z_Param_RecordId,Z_Param_RelatedRecord,Z_Param_Address);
	P_NATIVE_END;
}
// ********** End Class UDataLensSubsystem Function AddRelatedAddress ******************************

// ********** Begin Class UDataLensSubsystem Function AddTraitTag **********************************
struct Z_Construct_UFunction_UDataLensSubsystem_AddTraitTag_Statics
{
	struct DataLensSubsystem_eventAddTraitTag_Parms
	{
		FGuid RecordId;
		FGameplayTag TableTag;
		FGameplayTag TraitTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Writer" },
		{ "ModuleRelativePath", "Public/DataLensSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddTraitTag constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecordId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TableTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraitTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddTraitTag constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddTraitTag Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLensSubsystem_AddTraitTag_Statics::NewProp_RecordId = { "RecordId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventAddTraitTag_Parms, RecordId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLensSubsystem_AddTraitTag_Statics::NewProp_TableTag = { "TableTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventAddTraitTag_Parms, TableTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLensSubsystem_AddTraitTag_Statics::NewProp_TraitTag = { "TraitTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventAddTraitTag_Parms, TraitTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLensSubsystem_AddTraitTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_AddTraitTag_Statics::NewProp_RecordId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_AddTraitTag_Statics::NewProp_TableTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_AddTraitTag_Statics::NewProp_TraitTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_AddTraitTag_Statics::PropPointers) < 2048);
// ********** End Function AddTraitTag Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLensSubsystem_AddTraitTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataLensSubsystem, nullptr, "AddTraitTag", 	Z_Construct_UFunction_UDataLensSubsystem_AddTraitTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_AddTraitTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDataLensSubsystem_AddTraitTag_Statics::DataLensSubsystem_eventAddTraitTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_AddTraitTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLensSubsystem_AddTraitTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataLensSubsystem_AddTraitTag_Statics::DataLensSubsystem_eventAddTraitTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLensSubsystem_AddTraitTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLensSubsystem_AddTraitTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLensSubsystem::execAddTraitTag)
{
	P_GET_STRUCT(FGuid,Z_Param_RecordId);
	P_GET_STRUCT(FGameplayTag,Z_Param_TableTag);
	P_GET_STRUCT(FGameplayTag,Z_Param_TraitTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTraitTag(Z_Param_RecordId,Z_Param_TableTag,Z_Param_TraitTag);
	P_NATIVE_END;
}
// ********** End Class UDataLensSubsystem Function AddTraitTag ************************************

// ********** Begin Class UDataLensSubsystem Function ClearRelatedAddresses ************************
struct Z_Construct_UFunction_UDataLensSubsystem_ClearRelatedAddresses_Statics
{
	struct DataLensSubsystem_eventClearRelatedAddresses_Parms
	{
		FGuid RecordId;
		FGameplayTag RelatedRecord;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Writer" },
		{ "ModuleRelativePath", "Public/DataLensSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearRelatedAddresses constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecordId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelatedRecord;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ClearRelatedAddresses constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ClearRelatedAddresses Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLensSubsystem_ClearRelatedAddresses_Statics::NewProp_RecordId = { "RecordId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventClearRelatedAddresses_Parms, RecordId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLensSubsystem_ClearRelatedAddresses_Statics::NewProp_RelatedRecord = { "RelatedRecord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventClearRelatedAddresses_Parms, RelatedRecord), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLensSubsystem_ClearRelatedAddresses_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_ClearRelatedAddresses_Statics::NewProp_RecordId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_ClearRelatedAddresses_Statics::NewProp_RelatedRecord,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_ClearRelatedAddresses_Statics::PropPointers) < 2048);
// ********** End Function ClearRelatedAddresses Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLensSubsystem_ClearRelatedAddresses_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataLensSubsystem, nullptr, "ClearRelatedAddresses", 	Z_Construct_UFunction_UDataLensSubsystem_ClearRelatedAddresses_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_ClearRelatedAddresses_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDataLensSubsystem_ClearRelatedAddresses_Statics::DataLensSubsystem_eventClearRelatedAddresses_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_ClearRelatedAddresses_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLensSubsystem_ClearRelatedAddresses_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataLensSubsystem_ClearRelatedAddresses_Statics::DataLensSubsystem_eventClearRelatedAddresses_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLensSubsystem_ClearRelatedAddresses()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLensSubsystem_ClearRelatedAddresses_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLensSubsystem::execClearRelatedAddresses)
{
	P_GET_STRUCT(FGuid,Z_Param_RecordId);
	P_GET_STRUCT(FGameplayTag,Z_Param_RelatedRecord);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearRelatedAddresses(Z_Param_RecordId,Z_Param_RelatedRecord);
	P_NATIVE_END;
}
// ********** End Class UDataLensSubsystem Function ClearRelatedAddresses **************************

// ********** Begin Class UDataLensSubsystem Function ClearTraitTags *******************************
struct Z_Construct_UFunction_UDataLensSubsystem_ClearTraitTags_Statics
{
	struct DataLensSubsystem_eventClearTraitTags_Parms
	{
		FGuid RecordId;
		FGameplayTag TableTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Writer" },
		{ "ModuleRelativePath", "Public/DataLensSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearTraitTags constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecordId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TableTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ClearTraitTags constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ClearTraitTags Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLensSubsystem_ClearTraitTags_Statics::NewProp_RecordId = { "RecordId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventClearTraitTags_Parms, RecordId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLensSubsystem_ClearTraitTags_Statics::NewProp_TableTag = { "TableTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventClearTraitTags_Parms, TableTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLensSubsystem_ClearTraitTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_ClearTraitTags_Statics::NewProp_RecordId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_ClearTraitTags_Statics::NewProp_TableTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_ClearTraitTags_Statics::PropPointers) < 2048);
// ********** End Function ClearTraitTags Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLensSubsystem_ClearTraitTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataLensSubsystem, nullptr, "ClearTraitTags", 	Z_Construct_UFunction_UDataLensSubsystem_ClearTraitTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_ClearTraitTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDataLensSubsystem_ClearTraitTags_Statics::DataLensSubsystem_eventClearTraitTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_ClearTraitTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLensSubsystem_ClearTraitTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataLensSubsystem_ClearTraitTags_Statics::DataLensSubsystem_eventClearTraitTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLensSubsystem_ClearTraitTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLensSubsystem_ClearTraitTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLensSubsystem::execClearTraitTags)
{
	P_GET_STRUCT(FGuid,Z_Param_RecordId);
	P_GET_STRUCT(FGameplayTag,Z_Param_TableTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearTraitTags(Z_Param_RecordId,Z_Param_TableTag);
	P_NATIVE_END;
}
// ********** End Class UDataLensSubsystem Function ClearTraitTags *********************************

// ********** Begin Class UDataLensSubsystem Function CreateNewRecord ******************************
struct Z_Construct_UFunction_UDataLensSubsystem_CreateNewRecord_Statics
{
	struct DataLensSubsystem_eventCreateNewRecord_Parms
	{
		FGameplayTag TableTag;
		FGuid ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Writer" },
		{ "ModuleRelativePath", "Public/DataLensSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateNewRecord constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TableTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateNewRecord constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateNewRecord Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLensSubsystem_CreateNewRecord_Statics::NewProp_TableTag = { "TableTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventCreateNewRecord_Parms, TableTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLensSubsystem_CreateNewRecord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventCreateNewRecord_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLensSubsystem_CreateNewRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_CreateNewRecord_Statics::NewProp_TableTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_CreateNewRecord_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_CreateNewRecord_Statics::PropPointers) < 2048);
// ********** End Function CreateNewRecord Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLensSubsystem_CreateNewRecord_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataLensSubsystem, nullptr, "CreateNewRecord", 	Z_Construct_UFunction_UDataLensSubsystem_CreateNewRecord_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_CreateNewRecord_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDataLensSubsystem_CreateNewRecord_Statics::DataLensSubsystem_eventCreateNewRecord_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_CreateNewRecord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLensSubsystem_CreateNewRecord_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataLensSubsystem_CreateNewRecord_Statics::DataLensSubsystem_eventCreateNewRecord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLensSubsystem_CreateNewRecord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLensSubsystem_CreateNewRecord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLensSubsystem::execCreateNewRecord)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_TableTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=P_THIS->CreateNewRecord(Z_Param_TableTag);
	P_NATIVE_END;
}
// ********** End Class UDataLensSubsystem Function CreateNewRecord ********************************

// ********** Begin Class UDataLensSubsystem Function DeleteRecord *********************************
struct Z_Construct_UFunction_UDataLensSubsystem_DeleteRecord_Statics
{
	struct DataLensSubsystem_eventDeleteRecord_Parms
	{
		FGuid RecordId;
		FGameplayTag TableTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Writer" },
		{ "ModuleRelativePath", "Public/DataLensSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DeleteRecord constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecordId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TableTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DeleteRecord constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DeleteRecord Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLensSubsystem_DeleteRecord_Statics::NewProp_RecordId = { "RecordId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventDeleteRecord_Parms, RecordId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLensSubsystem_DeleteRecord_Statics::NewProp_TableTag = { "TableTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventDeleteRecord_Parms, TableTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLensSubsystem_DeleteRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_DeleteRecord_Statics::NewProp_RecordId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_DeleteRecord_Statics::NewProp_TableTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_DeleteRecord_Statics::PropPointers) < 2048);
// ********** End Function DeleteRecord Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLensSubsystem_DeleteRecord_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataLensSubsystem, nullptr, "DeleteRecord", 	Z_Construct_UFunction_UDataLensSubsystem_DeleteRecord_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_DeleteRecord_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDataLensSubsystem_DeleteRecord_Statics::DataLensSubsystem_eventDeleteRecord_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_DeleteRecord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLensSubsystem_DeleteRecord_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataLensSubsystem_DeleteRecord_Statics::DataLensSubsystem_eventDeleteRecord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLensSubsystem_DeleteRecord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLensSubsystem_DeleteRecord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLensSubsystem::execDeleteRecord)
{
	P_GET_STRUCT(FGuid,Z_Param_RecordId);
	P_GET_STRUCT(FGameplayTag,Z_Param_TableTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteRecord(Z_Param_RecordId,Z_Param_TableTag);
	P_NATIVE_END;
}
// ********** End Class UDataLensSubsystem Function DeleteRecord ***********************************

// ********** Begin Class UDataLensSubsystem Function EmptyTable ***********************************
struct Z_Construct_UFunction_UDataLensSubsystem_EmptyTable_Statics
{
	struct DataLensSubsystem_eventEmptyTable_Parms
	{
		FGameplayTag TableTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Writer" },
		{ "ModuleRelativePath", "Public/DataLensSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EmptyTable constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TableTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EmptyTable constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EmptyTable Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLensSubsystem_EmptyTable_Statics::NewProp_TableTag = { "TableTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventEmptyTable_Parms, TableTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLensSubsystem_EmptyTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_EmptyTable_Statics::NewProp_TableTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_EmptyTable_Statics::PropPointers) < 2048);
// ********** End Function EmptyTable Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLensSubsystem_EmptyTable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataLensSubsystem, nullptr, "EmptyTable", 	Z_Construct_UFunction_UDataLensSubsystem_EmptyTable_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_EmptyTable_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDataLensSubsystem_EmptyTable_Statics::DataLensSubsystem_eventEmptyTable_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_EmptyTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLensSubsystem_EmptyTable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataLensSubsystem_EmptyTable_Statics::DataLensSubsystem_eventEmptyTable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLensSubsystem_EmptyTable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLensSubsystem_EmptyTable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLensSubsystem::execEmptyTable)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_TableTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EmptyTable(Z_Param_TableTag);
	P_NATIVE_END;
}
// ********** End Class UDataLensSubsystem Function EmptyTable *************************************

// ********** Begin Class UDataLensSubsystem Function ExtractTableTag ******************************
struct Z_Construct_UFunction_UDataLensSubsystem_ExtractTableTag_Statics
{
	struct DataLensSubsystem_eventExtractTableTag_Parms
	{
		FGameplayTag Tag;
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataLens" },
		{ "ModuleRelativePath", "Public/DataLensSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ExtractTableTag constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ExtractTableTag constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ExtractTableTag Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLensSubsystem_ExtractTableTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventExtractTableTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLensSubsystem_ExtractTableTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventExtractTableTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLensSubsystem_ExtractTableTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_ExtractTableTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_ExtractTableTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_ExtractTableTag_Statics::PropPointers) < 2048);
// ********** End Function ExtractTableTag Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLensSubsystem_ExtractTableTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataLensSubsystem, nullptr, "ExtractTableTag", 	Z_Construct_UFunction_UDataLensSubsystem_ExtractTableTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_ExtractTableTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDataLensSubsystem_ExtractTableTag_Statics::DataLensSubsystem_eventExtractTableTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_ExtractTableTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLensSubsystem_ExtractTableTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataLensSubsystem_ExtractTableTag_Statics::DataLensSubsystem_eventExtractTableTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLensSubsystem_ExtractTableTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLensSubsystem_ExtractTableTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLensSubsystem::execExtractTableTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=UDataLensSubsystem::ExtractTableTag(Z_Param_Tag);
	P_NATIVE_END;
}
// ********** End Class UDataLensSubsystem Function ExtractTableTag ********************************

// ********** Begin Class UDataLensSubsystem Function GetDataTable *********************************
struct Z_Construct_UFunction_UDataLensSubsystem_GetDataTable_Statics
{
	struct DataLensSubsystem_eventGetDataTable_Parms
	{
		FGameplayTag TableTag;
		UDataLensTable* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataLensSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDataTable constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TableTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDataTable constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDataTable Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLensSubsystem_GetDataTable_Statics::NewProp_TableTag = { "TableTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventGetDataTable_Parms, TableTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLensSubsystem_GetDataTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventGetDataTable_Parms, ReturnValue), Z_Construct_UClass_UDataLensTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLensSubsystem_GetDataTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_GetDataTable_Statics::NewProp_TableTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_GetDataTable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_GetDataTable_Statics::PropPointers) < 2048);
// ********** End Function GetDataTable Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLensSubsystem_GetDataTable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataLensSubsystem, nullptr, "GetDataTable", 	Z_Construct_UFunction_UDataLensSubsystem_GetDataTable_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_GetDataTable_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDataLensSubsystem_GetDataTable_Statics::DataLensSubsystem_eventGetDataTable_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_GetDataTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLensSubsystem_GetDataTable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataLensSubsystem_GetDataTable_Statics::DataLensSubsystem_eventGetDataTable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLensSubsystem_GetDataTable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLensSubsystem_GetDataTable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLensSubsystem::execGetDataTable)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_TableTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDataLensTable**)Z_Param__Result=P_THIS->GetDataTable(Z_Param_TableTag);
	P_NATIVE_END;
}
// ********** End Class UDataLensSubsystem Function GetDataTable ***********************************

// ********** Begin Class UDataLensSubsystem Function GetView **************************************
struct Z_Construct_UFunction_UDataLensSubsystem_GetView_Statics
{
	struct DataLensSubsystem_eventGetView_Parms
	{
		TSubclassOf<UDataLensTableView> ViewType;
		UDataLensTableView* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Views" },
		{ "ModuleRelativePath", "Public/DataLensSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetView constinit property declarations *******************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_ViewType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetView constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetView Property Definitions ******************************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDataLensSubsystem_GetView_Statics::NewProp_ViewType = { "ViewType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventGetView_Parms, ViewType), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UDataLensTableView_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLensSubsystem_GetView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventGetView_Parms, ReturnValue), Z_Construct_UClass_UDataLensTableView_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLensSubsystem_GetView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_GetView_Statics::NewProp_ViewType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_GetView_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_GetView_Statics::PropPointers) < 2048);
// ********** End Function GetView Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLensSubsystem_GetView_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataLensSubsystem, nullptr, "GetView", 	Z_Construct_UFunction_UDataLensSubsystem_GetView_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_GetView_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDataLensSubsystem_GetView_Statics::DataLensSubsystem_eventGetView_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_GetView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLensSubsystem_GetView_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataLensSubsystem_GetView_Statics::DataLensSubsystem_eventGetView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLensSubsystem_GetView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLensSubsystem_GetView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLensSubsystem::execGetView)
{
	P_GET_OBJECT(UClass,Z_Param_ViewType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDataLensTableView**)Z_Param__Result=P_THIS->GetView(Z_Param_ViewType);
	P_NATIVE_END;
}
// ********** End Class UDataLensSubsystem Function GetView ****************************************

// ********** Begin Class UDataLensSubsystem Function InitializeEmptyDatabase **********************
struct Z_Construct_UFunction_UDataLensSubsystem_InitializeEmptyDatabase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Writer" },
		{ "ModuleRelativePath", "Public/DataLensSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitializeEmptyDatabase constinit property declarations ***************
// ********** End Function InitializeEmptyDatabase constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLensSubsystem_InitializeEmptyDatabase_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataLensSubsystem, nullptr, "InitializeEmptyDatabase", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_InitializeEmptyDatabase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLensSubsystem_InitializeEmptyDatabase_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDataLensSubsystem_InitializeEmptyDatabase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLensSubsystem_InitializeEmptyDatabase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLensSubsystem::execInitializeEmptyDatabase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeEmptyDatabase();
	P_NATIVE_END;
}
// ********** End Class UDataLensSubsystem Function InitializeEmptyDatabase ************************

// ********** Begin Class UDataLensSubsystem Function LoadDatabase *********************************
struct Z_Construct_UFunction_UDataLensSubsystem_LoadDatabase_Statics
{
	struct DataLensSubsystem_eventLoadDatabase_Parms
	{
		FDataLensDatabaseSaveData SaveData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Writer" },
		{ "ModuleRelativePath", "Public/DataLensSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadDatabase constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadDatabase constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadDatabase Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLensSubsystem_LoadDatabase_Statics::NewProp_SaveData = { "SaveData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventLoadDatabase_Parms, SaveData), Z_Construct_UScriptStruct_FDataLensDatabaseSaveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveData_MetaData), NewProp_SaveData_MetaData) }; // 461894922
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLensSubsystem_LoadDatabase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_LoadDatabase_Statics::NewProp_SaveData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_LoadDatabase_Statics::PropPointers) < 2048);
// ********** End Function LoadDatabase Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLensSubsystem_LoadDatabase_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataLensSubsystem, nullptr, "LoadDatabase", 	Z_Construct_UFunction_UDataLensSubsystem_LoadDatabase_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_LoadDatabase_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDataLensSubsystem_LoadDatabase_Statics::DataLensSubsystem_eventLoadDatabase_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_LoadDatabase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLensSubsystem_LoadDatabase_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataLensSubsystem_LoadDatabase_Statics::DataLensSubsystem_eventLoadDatabase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLensSubsystem_LoadDatabase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLensSubsystem_LoadDatabase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLensSubsystem::execLoadDatabase)
{
	P_GET_STRUCT_REF(FDataLensDatabaseSaveData,Z_Param_Out_SaveData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadDatabase(Z_Param_Out_SaveData);
	P_NATIVE_END;
}
// ********** End Class UDataLensSubsystem Function LoadDatabase ***********************************

// ********** Begin Class UDataLensSubsystem Function RegisterView *********************************
struct Z_Construct_UFunction_UDataLensSubsystem_RegisterView_Statics
{
	struct DataLensSubsystem_eventRegisterView_Parms
	{
		TSubclassOf<UDataLensTableView> ViewType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Views" },
		{ "ModuleRelativePath", "Public/DataLensSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RegisterView constinit property declarations **************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_ViewType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RegisterView constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RegisterView Property Definitions *************************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDataLensSubsystem_RegisterView_Statics::NewProp_ViewType = { "ViewType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventRegisterView_Parms, ViewType), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UDataLensTableView_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLensSubsystem_RegisterView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_RegisterView_Statics::NewProp_ViewType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_RegisterView_Statics::PropPointers) < 2048);
// ********** End Function RegisterView Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLensSubsystem_RegisterView_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataLensSubsystem, nullptr, "RegisterView", 	Z_Construct_UFunction_UDataLensSubsystem_RegisterView_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_RegisterView_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDataLensSubsystem_RegisterView_Statics::DataLensSubsystem_eventRegisterView_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_RegisterView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLensSubsystem_RegisterView_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataLensSubsystem_RegisterView_Statics::DataLensSubsystem_eventRegisterView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLensSubsystem_RegisterView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLensSubsystem_RegisterView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLensSubsystem::execRegisterView)
{
	P_GET_OBJECT(UClass,Z_Param_ViewType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterView(Z_Param_ViewType);
	P_NATIVE_END;
}
// ********** End Class UDataLensSubsystem Function RegisterView ***********************************

// ********** Begin Class UDataLensSubsystem Function RemoveRelatedAddress *************************
struct Z_Construct_UFunction_UDataLensSubsystem_RemoveRelatedAddress_Statics
{
	struct DataLensSubsystem_eventRemoveRelatedAddress_Parms
	{
		FGuid RecordId;
		FGameplayTag RelatedRecord;
		FRecordAddress Address;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Writer" },
		{ "ModuleRelativePath", "Public/DataLensSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveRelatedAddress constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecordId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelatedRecord;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Address;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveRelatedAddress constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveRelatedAddress Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLensSubsystem_RemoveRelatedAddress_Statics::NewProp_RecordId = { "RecordId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventRemoveRelatedAddress_Parms, RecordId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLensSubsystem_RemoveRelatedAddress_Statics::NewProp_RelatedRecord = { "RelatedRecord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventRemoveRelatedAddress_Parms, RelatedRecord), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLensSubsystem_RemoveRelatedAddress_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventRemoveRelatedAddress_Parms, Address), Z_Construct_UScriptStruct_FRecordAddress, METADATA_PARAMS(0, nullptr) }; // 3084208652
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLensSubsystem_RemoveRelatedAddress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_RemoveRelatedAddress_Statics::NewProp_RecordId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_RemoveRelatedAddress_Statics::NewProp_RelatedRecord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_RemoveRelatedAddress_Statics::NewProp_Address,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_RemoveRelatedAddress_Statics::PropPointers) < 2048);
// ********** End Function RemoveRelatedAddress Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLensSubsystem_RemoveRelatedAddress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataLensSubsystem, nullptr, "RemoveRelatedAddress", 	Z_Construct_UFunction_UDataLensSubsystem_RemoveRelatedAddress_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_RemoveRelatedAddress_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDataLensSubsystem_RemoveRelatedAddress_Statics::DataLensSubsystem_eventRemoveRelatedAddress_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_RemoveRelatedAddress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLensSubsystem_RemoveRelatedAddress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataLensSubsystem_RemoveRelatedAddress_Statics::DataLensSubsystem_eventRemoveRelatedAddress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLensSubsystem_RemoveRelatedAddress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLensSubsystem_RemoveRelatedAddress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLensSubsystem::execRemoveRelatedAddress)
{
	P_GET_STRUCT(FGuid,Z_Param_RecordId);
	P_GET_STRUCT(FGameplayTag,Z_Param_RelatedRecord);
	P_GET_STRUCT(FRecordAddress,Z_Param_Address);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveRelatedAddress(Z_Param_RecordId,Z_Param_RelatedRecord,Z_Param_Address);
	P_NATIVE_END;
}
// ********** End Class UDataLensSubsystem Function RemoveRelatedAddress ***************************

// ********** Begin Class UDataLensSubsystem Function RemoveTraitTag *******************************
struct Z_Construct_UFunction_UDataLensSubsystem_RemoveTraitTag_Statics
{
	struct DataLensSubsystem_eventRemoveTraitTag_Parms
	{
		FGuid RecordId;
		FGameplayTag TableTag;
		FGameplayTag TraitTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Writer" },
		{ "ModuleRelativePath", "Public/DataLensSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveTraitTag constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecordId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TableTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraitTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveTraitTag constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveTraitTag Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLensSubsystem_RemoveTraitTag_Statics::NewProp_RecordId = { "RecordId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventRemoveTraitTag_Parms, RecordId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLensSubsystem_RemoveTraitTag_Statics::NewProp_TableTag = { "TableTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventRemoveTraitTag_Parms, TableTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLensSubsystem_RemoveTraitTag_Statics::NewProp_TraitTag = { "TraitTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventRemoveTraitTag_Parms, TraitTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLensSubsystem_RemoveTraitTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_RemoveTraitTag_Statics::NewProp_RecordId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_RemoveTraitTag_Statics::NewProp_TableTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_RemoveTraitTag_Statics::NewProp_TraitTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_RemoveTraitTag_Statics::PropPointers) < 2048);
// ********** End Function RemoveTraitTag Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLensSubsystem_RemoveTraitTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataLensSubsystem, nullptr, "RemoveTraitTag", 	Z_Construct_UFunction_UDataLensSubsystem_RemoveTraitTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_RemoveTraitTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDataLensSubsystem_RemoveTraitTag_Statics::DataLensSubsystem_eventRemoveTraitTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_RemoveTraitTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLensSubsystem_RemoveTraitTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataLensSubsystem_RemoveTraitTag_Statics::DataLensSubsystem_eventRemoveTraitTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLensSubsystem_RemoveTraitTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLensSubsystem_RemoveTraitTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLensSubsystem::execRemoveTraitTag)
{
	P_GET_STRUCT(FGuid,Z_Param_RecordId);
	P_GET_STRUCT(FGameplayTag,Z_Param_TableTag);
	P_GET_STRUCT(FGameplayTag,Z_Param_TraitTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveTraitTag(Z_Param_RecordId,Z_Param_TableTag,Z_Param_TraitTag);
	P_NATIVE_END;
}
// ********** End Class UDataLensSubsystem Function RemoveTraitTag *********************************

// ********** Begin Class UDataLensSubsystem Function SaveDatabase *********************************
struct Z_Construct_UFunction_UDataLensSubsystem_SaveDatabase_Statics
{
	struct DataLensSubsystem_eventSaveDatabase_Parms
	{
		FDataLensDatabaseSaveData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Writer" },
		{ "ModuleRelativePath", "Public/DataLensSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SaveDatabase constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SaveDatabase constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SaveDatabase Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLensSubsystem_SaveDatabase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventSaveDatabase_Parms, ReturnValue), Z_Construct_UScriptStruct_FDataLensDatabaseSaveData, METADATA_PARAMS(0, nullptr) }; // 461894922
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLensSubsystem_SaveDatabase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_SaveDatabase_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_SaveDatabase_Statics::PropPointers) < 2048);
// ********** End Function SaveDatabase Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLensSubsystem_SaveDatabase_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataLensSubsystem, nullptr, "SaveDatabase", 	Z_Construct_UFunction_UDataLensSubsystem_SaveDatabase_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_SaveDatabase_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDataLensSubsystem_SaveDatabase_Statics::DataLensSubsystem_eventSaveDatabase_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_SaveDatabase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLensSubsystem_SaveDatabase_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataLensSubsystem_SaveDatabase_Statics::DataLensSubsystem_eventSaveDatabase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLensSubsystem_SaveDatabase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLensSubsystem_SaveDatabase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLensSubsystem::execSaveDatabase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDataLensDatabaseSaveData*)Z_Param__Result=P_THIS->SaveDatabase();
	P_NATIVE_END;
}
// ********** End Class UDataLensSubsystem Function SaveDatabase ***********************************

// ********** Begin Class UDataLensSubsystem Function SetAttribute *********************************
struct Z_Construct_UFunction_UDataLensSubsystem_SetAttribute_Statics
{
	struct DataLensSubsystem_eventSetAttribute_Parms
	{
		FGuid RecordId;
		FGameplayTag Attribute;
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Writer" },
		{ "ModuleRelativePath", "Public/DataLensSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetAttribute constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecordId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAttribute constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAttribute Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLensSubsystem_SetAttribute_Statics::NewProp_RecordId = { "RecordId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventSetAttribute_Parms, RecordId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLensSubsystem_SetAttribute_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventSetAttribute_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDataLensSubsystem_SetAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensSubsystem_eventSetAttribute_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLensSubsystem_SetAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_SetAttribute_Statics::NewProp_RecordId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_SetAttribute_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensSubsystem_SetAttribute_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_SetAttribute_Statics::PropPointers) < 2048);
// ********** End Function SetAttribute Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLensSubsystem_SetAttribute_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataLensSubsystem, nullptr, "SetAttribute", 	Z_Construct_UFunction_UDataLensSubsystem_SetAttribute_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_SetAttribute_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDataLensSubsystem_SetAttribute_Statics::DataLensSubsystem_eventSetAttribute_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensSubsystem_SetAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLensSubsystem_SetAttribute_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataLensSubsystem_SetAttribute_Statics::DataLensSubsystem_eventSetAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLensSubsystem_SetAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLensSubsystem_SetAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLensSubsystem::execSetAttribute)
{
	P_GET_STRUCT(FGuid,Z_Param_RecordId);
	P_GET_STRUCT(FGameplayTag,Z_Param_Attribute);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAttribute(Z_Param_RecordId,Z_Param_Attribute,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UDataLensSubsystem Function SetAttribute ***********************************

// ********** Begin Class UDataLensSubsystem *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UDataLensSubsystem;
UClass* UDataLensSubsystem::GetPrivateStaticClass()
{
	using TClass = UDataLensSubsystem;
	if (!Z_Registration_Info_UClass_UDataLensSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("DataLensSubsystem"),
			Z_Registration_Info_UClass_UDataLensSubsystem.InnerSingleton,
			StaticRegisterNativesUDataLensSubsystem,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UDataLensSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UDataLensSubsystem_NoRegister()
{
	return UDataLensSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDataLensSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DataLensSubsystem.h" },
		{ "ModuleRelativePath", "Public/DataLensSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SystemFrequency_MetaData[] = {
		{ "Category", "Data Lens Subsystem" },
		{ "ClampMin", "0.01" },
		{ "DisplayName", "System Frequency (Hz)" },
		{ "ModuleRelativePath", "Public/DataLensSubsystem.h" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdated_MetaData[] = {
		{ "Category", "Data Lens Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// e.g. 10Hz max churn frequency\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "e.g. 10Hz max churn frequency" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TableMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataLensSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataLensSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDataLensSubsystem constinit property declarations ***********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SystemFrequency;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdated;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TableMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TableMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TableMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewMap_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ViewMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ViewMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDataLensSubsystem constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddRelatedAddress"), .Pointer = &UDataLensSubsystem::execAddRelatedAddress },
		{ .NameUTF8 = UTF8TEXT("AddTraitTag"), .Pointer = &UDataLensSubsystem::execAddTraitTag },
		{ .NameUTF8 = UTF8TEXT("ClearRelatedAddresses"), .Pointer = &UDataLensSubsystem::execClearRelatedAddresses },
		{ .NameUTF8 = UTF8TEXT("ClearTraitTags"), .Pointer = &UDataLensSubsystem::execClearTraitTags },
		{ .NameUTF8 = UTF8TEXT("CreateNewRecord"), .Pointer = &UDataLensSubsystem::execCreateNewRecord },
		{ .NameUTF8 = UTF8TEXT("DeleteRecord"), .Pointer = &UDataLensSubsystem::execDeleteRecord },
		{ .NameUTF8 = UTF8TEXT("EmptyTable"), .Pointer = &UDataLensSubsystem::execEmptyTable },
		{ .NameUTF8 = UTF8TEXT("ExtractTableTag"), .Pointer = &UDataLensSubsystem::execExtractTableTag },
		{ .NameUTF8 = UTF8TEXT("GetDataTable"), .Pointer = &UDataLensSubsystem::execGetDataTable },
		{ .NameUTF8 = UTF8TEXT("GetView"), .Pointer = &UDataLensSubsystem::execGetView },
		{ .NameUTF8 = UTF8TEXT("InitializeEmptyDatabase"), .Pointer = &UDataLensSubsystem::execInitializeEmptyDatabase },
		{ .NameUTF8 = UTF8TEXT("LoadDatabase"), .Pointer = &UDataLensSubsystem::execLoadDatabase },
		{ .NameUTF8 = UTF8TEXT("RegisterView"), .Pointer = &UDataLensSubsystem::execRegisterView },
		{ .NameUTF8 = UTF8TEXT("RemoveRelatedAddress"), .Pointer = &UDataLensSubsystem::execRemoveRelatedAddress },
		{ .NameUTF8 = UTF8TEXT("RemoveTraitTag"), .Pointer = &UDataLensSubsystem::execRemoveTraitTag },
		{ .NameUTF8 = UTF8TEXT("SaveDatabase"), .Pointer = &UDataLensSubsystem::execSaveDatabase },
		{ .NameUTF8 = UTF8TEXT("SetAttribute"), .Pointer = &UDataLensSubsystem::execSetAttribute },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataLensSubsystem_AddRelatedAddress, "AddRelatedAddress" }, // 2959753365
		{ &Z_Construct_UFunction_UDataLensSubsystem_AddTraitTag, "AddTraitTag" }, // 4091947467
		{ &Z_Construct_UFunction_UDataLensSubsystem_ClearRelatedAddresses, "ClearRelatedAddresses" }, // 1823020520
		{ &Z_Construct_UFunction_UDataLensSubsystem_ClearTraitTags, "ClearTraitTags" }, // 3178729973
		{ &Z_Construct_UFunction_UDataLensSubsystem_CreateNewRecord, "CreateNewRecord" }, // 1050112290
		{ &Z_Construct_UFunction_UDataLensSubsystem_DeleteRecord, "DeleteRecord" }, // 1104153670
		{ &Z_Construct_UFunction_UDataLensSubsystem_EmptyTable, "EmptyTable" }, // 2153126972
		{ &Z_Construct_UFunction_UDataLensSubsystem_ExtractTableTag, "ExtractTableTag" }, // 2027398622
		{ &Z_Construct_UFunction_UDataLensSubsystem_GetDataTable, "GetDataTable" }, // 3513877572
		{ &Z_Construct_UFunction_UDataLensSubsystem_GetView, "GetView" }, // 2385158633
		{ &Z_Construct_UFunction_UDataLensSubsystem_InitializeEmptyDatabase, "InitializeEmptyDatabase" }, // 10678472
		{ &Z_Construct_UFunction_UDataLensSubsystem_LoadDatabase, "LoadDatabase" }, // 4098897879
		{ &Z_Construct_UFunction_UDataLensSubsystem_RegisterView, "RegisterView" }, // 3788209796
		{ &Z_Construct_UFunction_UDataLensSubsystem_RemoveRelatedAddress, "RemoveRelatedAddress" }, // 1073147179
		{ &Z_Construct_UFunction_UDataLensSubsystem_RemoveTraitTag, "RemoveTraitTag" }, // 1416242274
		{ &Z_Construct_UFunction_UDataLensSubsystem_SaveDatabase, "SaveDatabase" }, // 2891136278
		{ &Z_Construct_UFunction_UDataLensSubsystem_SetAttribute, "SetAttribute" }, // 197119264
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataLensSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UDataLensSubsystem_Statics

// ********** Begin Class UDataLensSubsystem Property Definitions **********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDataLensSubsystem_Statics::NewProp_SystemFrequency = { "SystemFrequency", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataLensSubsystem, SystemFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SystemFrequency_MetaData), NewProp_SystemFrequency_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDataLensSubsystem_Statics::NewProp_OnUpdated = { "OnUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataLensSubsystem, OnUpdated), Z_Construct_UDelegateFunction_ToolkitNarratives_OnTickCommitted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUpdated_MetaData), NewProp_OnUpdated_MetaData) }; // 1482880477
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataLensSubsystem_Statics::NewProp_TableMap_ValueProp = { "TableMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UDataLensTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataLensSubsystem_Statics::NewProp_TableMap_Key_KeyProp = { "TableMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDataLensSubsystem_Statics::NewProp_TableMap = { "TableMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataLensSubsystem, TableMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TableMap_MetaData), NewProp_TableMap_MetaData) }; // 517357616
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataLensSubsystem_Statics::NewProp_ViewMap_ValueProp = { "ViewMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UDataLensTableView_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDataLensSubsystem_Statics::NewProp_ViewMap_Key_KeyProp = { "ViewMap_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UDataLensTableView_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDataLensSubsystem_Statics::NewProp_ViewMap = { "ViewMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataLensSubsystem, ViewMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewMap_MetaData), NewProp_ViewMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataLensSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLensSubsystem_Statics::NewProp_SystemFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLensSubsystem_Statics::NewProp_OnUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLensSubsystem_Statics::NewProp_TableMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLensSubsystem_Statics::NewProp_TableMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLensSubsystem_Statics::NewProp_TableMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLensSubsystem_Statics::NewProp_ViewMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLensSubsystem_Statics::NewProp_ViewMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLensSubsystem_Statics::NewProp_ViewMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLensSubsystem_Statics::PropPointers) < 2048);
// ********** End Class UDataLensSubsystem Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UDataLensSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolkitNarratives,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLensSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataLensSubsystem_Statics::ClassParams = {
	&UDataLensSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDataLensSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataLensSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLensSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataLensSubsystem_Statics::Class_MetaDataParams)
};
void UDataLensSubsystem::StaticRegisterNativesUDataLensSubsystem()
{
	UClass* Class = UDataLensSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UDataLensSubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_UDataLensSubsystem()
{
	if (!Z_Registration_Info_UClass_UDataLensSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataLensSubsystem.OuterSingleton, Z_Construct_UClass_UDataLensSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataLensSubsystem.OuterSingleton;
}
UDataLensSubsystem::UDataLensSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDataLensSubsystem);
UDataLensSubsystem::~UDataLensSubsystem() {}
// ********** End Class UDataLensSubsystem *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DataLensSubsystem_h__Script_ToolkitNarratives_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataLensSubsystem, UDataLensSubsystem::StaticClass, TEXT("UDataLensSubsystem"), &Z_Registration_Info_UClass_UDataLensSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataLensSubsystem), 3750604707U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DataLensSubsystem_h__Script_ToolkitNarratives_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DataLensSubsystem_h__Script_ToolkitNarratives_2363326297{
	TEXT("/Script/ToolkitNarratives"),
	Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DataLensSubsystem_h__Script_ToolkitNarratives_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DataLensSubsystem_h__Script_ToolkitNarratives_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
