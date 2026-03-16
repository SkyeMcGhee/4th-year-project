// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataLensStructs.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDataLensStructs() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
TOOLKITNARRATIVES_API UScriptStruct* Z_Construct_UScriptStruct_FDataExpressionToken();
TOOLKITNARRATIVES_API UScriptStruct* Z_Construct_UScriptStruct_FDataLensDatabaseSaveData();
TOOLKITNARRATIVES_API UScriptStruct* Z_Construct_UScriptStruct_FDataLensFieldAddress();
TOOLKITNARRATIVES_API UScriptStruct* Z_Construct_UScriptStruct_FDataLensQuery();
TOOLKITNARRATIVES_API UScriptStruct* Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload();
TOOLKITNARRATIVES_API UScriptStruct* Z_Construct_UScriptStruct_FDataLensTableSaveData();
TOOLKITNARRATIVES_API UScriptStruct* Z_Construct_UScriptStruct_FLensTableViewColumn();
TOOLKITNARRATIVES_API UScriptStruct* Z_Construct_UScriptStruct_FRecordAddress();
TOOLKITNARRATIVES_API UScriptStruct* Z_Construct_UScriptStruct_FRecordAddressArray();
TOOLKITNARRATIVES_API UScriptStruct* Z_Construct_UScriptStruct_FRecordAttributeValues();
TOOLKITNARRATIVES_API UScriptStruct* Z_Construct_UScriptStruct_FRecordRelatedAddresses();
TOOLKITNARRATIVES_API UScriptStruct* Z_Construct_UScriptStruct_FSortColumnByIndex();
TOOLKITNARRATIVES_API UScriptStruct* Z_Construct_UScriptStruct_FSortColumnByName();
UPackage* Z_Construct_UPackage__Script_ToolkitNarratives();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRecordAddress ****************************************************
struct Z_Construct_UScriptStruct_FRecordAddress_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRecordAddress); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRecordAddress); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Uniquely identifies a record in the Data Lens Subsystem\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nUniquely identifies a record in the Data Lens Subsystem\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TableTag_MetaData[] = {
		{ "Category", "Record Address" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// The Tag used to resolve which Data Lens Table holds the record\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nThe Tag used to resolve which Data Lens Table holds the record\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordID_MetaData[] = {
		{ "Category", "Record Address" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// The globally unique ID of the record\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nThe globally unique ID of the record\n</summary>" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRecordAddress constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TableTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecordID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRecordAddress constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecordAddress>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRecordAddress_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRecordAddress;
class UScriptStruct* FRecordAddress::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRecordAddress.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRecordAddress.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecordAddress, (UObject*)Z_Construct_UPackage__Script_ToolkitNarratives(), TEXT("RecordAddress"));
	}
	return Z_Registration_Info_UScriptStruct_FRecordAddress.OuterSingleton;
	}

// ********** Begin ScriptStruct FRecordAddress Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordAddress_Statics::NewProp_TableTag = { "TableTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordAddress, TableTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TableTag_MetaData), NewProp_TableTag_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordAddress_Statics::NewProp_RecordID = { "RecordID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordAddress, RecordID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordID_MetaData), NewProp_RecordID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecordAddress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordAddress_Statics::NewProp_TableTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordAddress_Statics::NewProp_RecordID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordAddress_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRecordAddress Property Definitions *********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecordAddress_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolkitNarratives,
	nullptr,
	&NewStructOps,
	"RecordAddress",
	Z_Construct_UScriptStruct_FRecordAddress_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordAddress_Statics::PropPointers),
	sizeof(FRecordAddress),
	alignof(FRecordAddress),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordAddress_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRecordAddress_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRecordAddress()
{
	if (!Z_Registration_Info_UScriptStruct_FRecordAddress.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRecordAddress.InnerSingleton, Z_Construct_UScriptStruct_FRecordAddress_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRecordAddress.InnerSingleton);
}
// ********** End ScriptStruct FRecordAddress ******************************************************

// ********** Begin ScriptStruct FRecordAddressArray ***********************************************
struct Z_Construct_UScriptStruct_FRecordAddressArray_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRecordAddressArray); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRecordAddressArray); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Blueprint accessible collection of addresses\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nBlueprint accessible collection of addresses\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Addresses_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRecordAddressArray constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Addresses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Addresses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRecordAddressArray constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecordAddressArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRecordAddressArray_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRecordAddressArray;
class UScriptStruct* FRecordAddressArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRecordAddressArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRecordAddressArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecordAddressArray, (UObject*)Z_Construct_UPackage__Script_ToolkitNarratives(), TEXT("RecordAddressArray"));
	}
	return Z_Registration_Info_UScriptStruct_FRecordAddressArray.OuterSingleton;
	}

// ********** Begin ScriptStruct FRecordAddressArray Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordAddressArray_Statics::NewProp_Addresses_Inner = { "Addresses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRecordAddress, METADATA_PARAMS(0, nullptr) }; // 3084208652
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRecordAddressArray_Statics::NewProp_Addresses = { "Addresses", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordAddressArray, Addresses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Addresses_MetaData), NewProp_Addresses_MetaData) }; // 3084208652
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecordAddressArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordAddressArray_Statics::NewProp_Addresses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordAddressArray_Statics::NewProp_Addresses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordAddressArray_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRecordAddressArray Property Definitions ****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecordAddressArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolkitNarratives,
	nullptr,
	&NewStructOps,
	"RecordAddressArray",
	Z_Construct_UScriptStruct_FRecordAddressArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordAddressArray_Statics::PropPointers),
	sizeof(FRecordAddressArray),
	alignof(FRecordAddressArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordAddressArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRecordAddressArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRecordAddressArray()
{
	if (!Z_Registration_Info_UScriptStruct_FRecordAddressArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRecordAddressArray.InnerSingleton, Z_Construct_UScriptStruct_FRecordAddressArray_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRecordAddressArray.InnerSingleton);
}
// ********** End ScriptStruct FRecordAddressArray *************************************************

// ********** Begin ScriptStruct FRecordAttributeValues ********************************************
struct Z_Construct_UScriptStruct_FRecordAttributeValues_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRecordAttributeValues); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRecordAttributeValues); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Blueprint accessible collection of values\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nBlueprint accessible collection of values\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRecordAttributeValues constinit property declarations ************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRecordAttributeValues constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecordAttributeValues>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRecordAttributeValues_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRecordAttributeValues;
class UScriptStruct* FRecordAttributeValues::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRecordAttributeValues.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRecordAttributeValues.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecordAttributeValues, (UObject*)Z_Construct_UPackage__Script_ToolkitNarratives(), TEXT("RecordAttributeValues"));
	}
	return Z_Registration_Info_UScriptStruct_FRecordAttributeValues.OuterSingleton;
	}

// ********** Begin ScriptStruct FRecordAttributeValues Property Definitions ***********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRecordAttributeValues_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRecordAttributeValues_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordAttributeValues, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecordAttributeValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordAttributeValues_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordAttributeValues_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordAttributeValues_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRecordAttributeValues Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecordAttributeValues_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolkitNarratives,
	nullptr,
	&NewStructOps,
	"RecordAttributeValues",
	Z_Construct_UScriptStruct_FRecordAttributeValues_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordAttributeValues_Statics::PropPointers),
	sizeof(FRecordAttributeValues),
	alignof(FRecordAttributeValues),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordAttributeValues_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRecordAttributeValues_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRecordAttributeValues()
{
	if (!Z_Registration_Info_UScriptStruct_FRecordAttributeValues.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRecordAttributeValues.InnerSingleton, Z_Construct_UScriptStruct_FRecordAttributeValues_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRecordAttributeValues.InnerSingleton);
}
// ********** End ScriptStruct FRecordAttributeValues **********************************************

// ********** Begin ScriptStruct FRecordRelatedAddresses *******************************************
struct Z_Construct_UScriptStruct_FRecordRelatedAddresses_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRecordRelatedAddresses); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRecordRelatedAddresses); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Blueprint accessible collection of RecordAddresses\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nBlueprint accessible collection of RecordAddresses\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRecordRelatedAddresses constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRecordRelatedAddresses constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecordRelatedAddresses>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRecordRelatedAddresses_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRecordRelatedAddresses;
class UScriptStruct* FRecordRelatedAddresses::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRecordRelatedAddresses.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRecordRelatedAddresses.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecordRelatedAddresses, (UObject*)Z_Construct_UPackage__Script_ToolkitNarratives(), TEXT("RecordRelatedAddresses"));
	}
	return Z_Registration_Info_UScriptStruct_FRecordRelatedAddresses.OuterSingleton;
	}

// ********** Begin ScriptStruct FRecordRelatedAddresses Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordRelatedAddresses_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRecordAddressArray, METADATA_PARAMS(0, nullptr) }; // 1176907076
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRecordRelatedAddresses_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecordRelatedAddresses, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 1176907076
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecordRelatedAddresses_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordRelatedAddresses_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordRelatedAddresses_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordRelatedAddresses_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRecordRelatedAddresses Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecordRelatedAddresses_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolkitNarratives,
	nullptr,
	&NewStructOps,
	"RecordRelatedAddresses",
	Z_Construct_UScriptStruct_FRecordRelatedAddresses_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordRelatedAddresses_Statics::PropPointers),
	sizeof(FRecordRelatedAddresses),
	alignof(FRecordRelatedAddresses),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordRelatedAddresses_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRecordRelatedAddresses_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRecordRelatedAddresses()
{
	if (!Z_Registration_Info_UScriptStruct_FRecordRelatedAddresses.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRecordRelatedAddresses.InnerSingleton, Z_Construct_UScriptStruct_FRecordRelatedAddresses_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRecordRelatedAddresses.InnerSingleton);
}
// ********** End ScriptStruct FRecordRelatedAddresses *********************************************

// ********** Begin ScriptStruct FDataLensFieldAddress *********************************************
struct Z_Construct_UScriptStruct_FDataLensFieldAddress_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FDataLensFieldAddress); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDataLensFieldAddress); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Used to reference an attribute on a DataLensTable either by specifying the table to find in the database or by specifying the RelatedRecords field on the current table to check.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nUsed to reference an attribute on a DataLensTable either by specifying the table to find in the database or by specifying the RelatedRecords field on the current table to check.\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Tag Address" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// This can be a DataLensTable or a RelatedAttribute within a DataLenseTable\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nThis can be a DataLensTable or a RelatedAttribute within a DataLenseTable\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[] = {
		{ "Category", "Tag Address" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// The Attribute to resolve to\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nThe Attribute to resolve to\n</summary>" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDataLensFieldAddress constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDataLensFieldAddress constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataLensFieldAddress>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FDataLensFieldAddress_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDataLensFieldAddress;
class UScriptStruct* FDataLensFieldAddress::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDataLensFieldAddress.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDataLensFieldAddress.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataLensFieldAddress, (UObject*)Z_Construct_UPackage__Script_ToolkitNarratives(), TEXT("DataLensFieldAddress"));
	}
	return Z_Registration_Info_UScriptStruct_FDataLensFieldAddress.OuterSingleton;
	}

// ********** Begin ScriptStruct FDataLensFieldAddress Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataLensFieldAddress_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataLensFieldAddress, Source), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataLensFieldAddress_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataLensFieldAddress, Attribute), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attribute_MetaData), NewProp_Attribute_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataLensFieldAddress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensFieldAddress_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensFieldAddress_Statics::NewProp_Attribute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataLensFieldAddress_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FDataLensFieldAddress Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataLensFieldAddress_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolkitNarratives,
	nullptr,
	&NewStructOps,
	"DataLensFieldAddress",
	Z_Construct_UScriptStruct_FDataLensFieldAddress_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataLensFieldAddress_Statics::PropPointers),
	sizeof(FDataLensFieldAddress),
	alignof(FDataLensFieldAddress),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataLensFieldAddress_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataLensFieldAddress_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataLensFieldAddress()
{
	if (!Z_Registration_Info_UScriptStruct_FDataLensFieldAddress.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDataLensFieldAddress.InnerSingleton, Z_Construct_UScriptStruct_FDataLensFieldAddress_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDataLensFieldAddress.InnerSingleton);
}
// ********** End ScriptStruct FDataLensFieldAddress ***********************************************

// ********** Begin ScriptStruct FLensTableViewColumn **********************************************
struct Z_Construct_UScriptStruct_FLensTableViewColumn_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLensTableViewColumn); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLensTableViewColumn); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Defines the ExpressionFormula that will be used to populate the target column\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nDefines the ExpressionFormula that will be used to populate the target column\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Formula_MetaData[] = {
		{ "Category", "Computed Column" },
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColumnName_MetaData[] = {
		{ "Category", "Computed Column" },
		{ "DisplayName", "Column Name" },
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the derived column output" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLensTableViewColumn constinit property declarations **************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Formula;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ColumnName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLensTableViewColumn constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensTableViewColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLensTableViewColumn_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLensTableViewColumn;
class UScriptStruct* FLensTableViewColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLensTableViewColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLensTableViewColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensTableViewColumn, (UObject*)Z_Construct_UPackage__Script_ToolkitNarratives(), TEXT("LensTableViewColumn"));
	}
	return Z_Registration_Info_UScriptStruct_FLensTableViewColumn.OuterSingleton;
	}

// ********** Begin ScriptStruct FLensTableViewColumn Property Definitions *************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLensTableViewColumn_Statics::NewProp_Formula = { "Formula", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLensTableViewColumn, Formula), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Formula_MetaData), NewProp_Formula_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLensTableViewColumn_Statics::NewProp_ColumnName = { "ColumnName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLensTableViewColumn, ColumnName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColumnName_MetaData), NewProp_ColumnName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensTableViewColumn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensTableViewColumn_Statics::NewProp_Formula,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensTableViewColumn_Statics::NewProp_ColumnName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensTableViewColumn_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLensTableViewColumn Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensTableViewColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolkitNarratives,
	nullptr,
	&NewStructOps,
	"LensTableViewColumn",
	Z_Construct_UScriptStruct_FLensTableViewColumn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensTableViewColumn_Statics::PropPointers),
	sizeof(FLensTableViewColumn),
	alignof(FLensTableViewColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensTableViewColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLensTableViewColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLensTableViewColumn()
{
	if (!Z_Registration_Info_UScriptStruct_FLensTableViewColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLensTableViewColumn.InnerSingleton, Z_Construct_UScriptStruct_FLensTableViewColumn_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLensTableViewColumn.InnerSingleton);
}
// ********** End ScriptStruct FLensTableViewColumn ************************************************

// ********** Begin ScriptStruct FSortColumnByName *************************************************
struct Z_Construct_UScriptStruct_FSortColumnByName_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSortColumnByName); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSortColumnByName); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Indicates which columns should be used for sorting\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nIndicates which columns should be used for sorting\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColumnName_MetaData[] = {
		{ "Category", "SortColumnByName" },
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDescending_MetaData[] = {
		{ "Category", "SortColumnByName" },
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSortColumnByName constinit property declarations *****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ColumnName;
	static void NewProp_bDescending_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDescending;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSortColumnByName constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSortColumnByName>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSortColumnByName_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSortColumnByName;
class UScriptStruct* FSortColumnByName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSortColumnByName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSortColumnByName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSortColumnByName, (UObject*)Z_Construct_UPackage__Script_ToolkitNarratives(), TEXT("SortColumnByName"));
	}
	return Z_Registration_Info_UScriptStruct_FSortColumnByName.OuterSingleton;
	}

// ********** Begin ScriptStruct FSortColumnByName Property Definitions ****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSortColumnByName_Statics::NewProp_ColumnName = { "ColumnName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSortColumnByName, ColumnName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColumnName_MetaData), NewProp_ColumnName_MetaData) };
void Z_Construct_UScriptStruct_FSortColumnByName_Statics::NewProp_bDescending_SetBit(void* Obj)
{
	((FSortColumnByName*)Obj)->bDescending = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSortColumnByName_Statics::NewProp_bDescending = { "bDescending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSortColumnByName), &Z_Construct_UScriptStruct_FSortColumnByName_Statics::NewProp_bDescending_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDescending_MetaData), NewProp_bDescending_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSortColumnByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSortColumnByName_Statics::NewProp_ColumnName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSortColumnByName_Statics::NewProp_bDescending,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSortColumnByName_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSortColumnByName Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSortColumnByName_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolkitNarratives,
	nullptr,
	&NewStructOps,
	"SortColumnByName",
	Z_Construct_UScriptStruct_FSortColumnByName_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSortColumnByName_Statics::PropPointers),
	sizeof(FSortColumnByName),
	alignof(FSortColumnByName),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSortColumnByName_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSortColumnByName_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSortColumnByName()
{
	if (!Z_Registration_Info_UScriptStruct_FSortColumnByName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSortColumnByName.InnerSingleton, Z_Construct_UScriptStruct_FSortColumnByName_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSortColumnByName.InnerSingleton);
}
// ********** End ScriptStruct FSortColumnByName ***************************************************

// ********** Begin ScriptStruct FDataLensQuery ****************************************************
struct Z_Construct_UScriptStruct_FDataLensQuery_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FDataLensQuery); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDataLensQuery); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Stores structured data about a Data Lens Query\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nStores structured data about a Data Lens Query\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAliases_MetaData[] = {
		{ "Category", "DataLensQuery" },
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelatedAliases_MetaData[] = {
		{ "Category", "DataLensQuery" },
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Select_MetaData[] = {
		{ "Category", "DataLensQuery" },
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[] = {
		{ "Category", "DataLensQuery" },
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Join_MetaData[] = {
		{ "Category", "DataLensQuery" },
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhereClause_MetaData[] = {
		{ "Category", "DataLensQuery" },
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupBy_MetaData[] = {
		{ "Category", "DataLensQuery" },
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortBy_MetaData[] = {
		{ "Category", "DataLensQuery" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ColumnName(s) from Select\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ColumnName(s) from Select" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HavingClause_MetaData[] = {
		{ "Category", "DataLensQuery" },
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDataLensQuery constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputAliases_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputAliases;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelatedAliases_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RelatedAliases;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Select_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Select;
	static const UECodeGen_Private::FStructPropertyParams NewProp_From;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Join_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Join;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WhereClause;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GroupBy_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GroupBy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SortBy_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SortBy;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HavingClause;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDataLensQuery constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataLensQuery>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FDataLensQuery_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDataLensQuery;
class UScriptStruct* FDataLensQuery::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDataLensQuery.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDataLensQuery.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataLensQuery, (UObject*)Z_Construct_UPackage__Script_ToolkitNarratives(), TEXT("DataLensQuery"));
	}
	return Z_Registration_Info_UScriptStruct_FDataLensQuery.OuterSingleton;
	}

// ********** Begin ScriptStruct FDataLensQuery Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewProp_InputAliases_Inner = { "InputAliases", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDataLensFieldAddress, METADATA_PARAMS(0, nullptr) }; // 3187014462
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewProp_InputAliases = { "InputAliases", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataLensQuery, InputAliases), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAliases_MetaData), NewProp_InputAliases_MetaData) }; // 3187014462
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewProp_RelatedAliases_Inner = { "RelatedAliases", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDataLensFieldAddress, METADATA_PARAMS(0, nullptr) }; // 3187014462
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewProp_RelatedAliases = { "RelatedAliases", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataLensQuery, RelatedAliases), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelatedAliases_MetaData), NewProp_RelatedAliases_MetaData) }; // 3187014462
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewProp_Select_Inner = { "Select", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLensTableViewColumn, METADATA_PARAMS(0, nullptr) }; // 3742916274
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewProp_Select = { "Select", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataLensQuery, Select), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Select_MetaData), NewProp_Select_MetaData) }; // 3742916274
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataLensQuery, From), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_From_MetaData), NewProp_From_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewProp_Join_Inner = { "Join", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewProp_Join = { "Join", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataLensQuery, Join), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Join_MetaData), NewProp_Join_MetaData) }; // 517357616
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewProp_WhereClause = { "WhereClause", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataLensQuery, WhereClause), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhereClause_MetaData), NewProp_WhereClause_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewProp_GroupBy_Inner = { "GroupBy", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewProp_GroupBy = { "GroupBy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataLensQuery, GroupBy), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupBy_MetaData), NewProp_GroupBy_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewProp_SortBy_Inner = { "SortBy", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSortColumnByName, METADATA_PARAMS(0, nullptr) }; // 2128636074
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataLensQuery, SortBy), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortBy_MetaData), NewProp_SortBy_MetaData) }; // 2128636074
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewProp_HavingClause = { "HavingClause", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataLensQuery, HavingClause), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HavingClause_MetaData), NewProp_HavingClause_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataLensQuery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewProp_InputAliases_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewProp_InputAliases,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewProp_RelatedAliases_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewProp_RelatedAliases,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewProp_Select_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewProp_Select,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewProp_From,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewProp_Join_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewProp_Join,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewProp_WhereClause,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewProp_GroupBy_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewProp_GroupBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewProp_SortBy_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewProp_SortBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewProp_HavingClause,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataLensQuery_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FDataLensQuery Property Definitions *********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataLensQuery_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolkitNarratives,
	nullptr,
	&NewStructOps,
	"DataLensQuery",
	Z_Construct_UScriptStruct_FDataLensQuery_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataLensQuery_Statics::PropPointers),
	sizeof(FDataLensQuery),
	alignof(FDataLensQuery),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataLensQuery_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataLensQuery_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataLensQuery()
{
	if (!Z_Registration_Info_UScriptStruct_FDataLensQuery.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDataLensQuery.InnerSingleton, Z_Construct_UScriptStruct_FDataLensQuery_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDataLensQuery.InnerSingleton);
}
// ********** End ScriptStruct FDataLensQuery ******************************************************

// ********** Begin ScriptStruct FSortColumnByIndex ************************************************
struct Z_Construct_UScriptStruct_FSortColumnByIndex_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSortColumnByIndex); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSortColumnByIndex); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// One sort instruction: which column, ascending/descending\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nOne sort instruction: which column, ascending/descending\n</summary>" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSortColumnByIndex constinit property declarations ****************
// ********** End ScriptStruct FSortColumnByIndex constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSortColumnByIndex>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSortColumnByIndex_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSortColumnByIndex;
class UScriptStruct* FSortColumnByIndex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSortColumnByIndex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSortColumnByIndex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSortColumnByIndex, (UObject*)Z_Construct_UPackage__Script_ToolkitNarratives(), TEXT("SortColumnByIndex"));
	}
	return Z_Registration_Info_UScriptStruct_FSortColumnByIndex.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSortColumnByIndex_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolkitNarratives,
	nullptr,
	&NewStructOps,
	"SortColumnByIndex",
	nullptr,
	0,
	sizeof(FSortColumnByIndex),
	alignof(FSortColumnByIndex),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSortColumnByIndex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSortColumnByIndex_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSortColumnByIndex()
{
	if (!Z_Registration_Info_UScriptStruct_FSortColumnByIndex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSortColumnByIndex.InnerSingleton, Z_Construct_UScriptStruct_FSortColumnByIndex_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSortColumnByIndex.InnerSingleton);
}
// ********** End ScriptStruct FSortColumnByIndex **************************************************

// ********** Begin ScriptStruct FDataExpressionToken **********************************************
struct Z_Construct_UScriptStruct_FDataExpressionToken_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FDataExpressionToken); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDataExpressionToken); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// A single RPN token for expressions\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nA single RPN token for expressions\n</summary>" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDataExpressionToken constinit property declarations **************
// ********** End ScriptStruct FDataExpressionToken constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataExpressionToken>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FDataExpressionToken_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDataExpressionToken;
class UScriptStruct* FDataExpressionToken::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDataExpressionToken.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDataExpressionToken.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataExpressionToken, (UObject*)Z_Construct_UPackage__Script_ToolkitNarratives(), TEXT("DataExpressionToken"));
	}
	return Z_Registration_Info_UScriptStruct_FDataExpressionToken.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataExpressionToken_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolkitNarratives,
	nullptr,
	&NewStructOps,
	"DataExpressionToken",
	nullptr,
	0,
	sizeof(FDataExpressionToken),
	alignof(FDataExpressionToken),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataExpressionToken_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataExpressionToken_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataExpressionToken()
{
	if (!Z_Registration_Info_UScriptStruct_FDataExpressionToken.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDataExpressionToken.InnerSingleton, Z_Construct_UScriptStruct_FDataExpressionToken_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDataExpressionToken.InnerSingleton);
}
// ********** End ScriptStruct FDataExpressionToken ************************************************

// ********** Begin ScriptStruct FDataLensTableSaveData ********************************************
struct Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FDataLensTableSaveData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDataLensTableSaveData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Wrapper for per table save data\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nWrapper for per table save data\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TableTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IDs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// An index aligned collection of IDs uniquely identifying each record in the table\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nAn index aligned collection of IDs uniquely identifying each record in the table\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeTags_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// An index aligned collection of attribute Tags\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nAn index aligned collection of attribute Tags\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelationTags_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// An index aligned collection of related record tags\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nAn index aligned collection of related record tags\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// An index aligned collection of attribute values\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nAn index aligned collection of attribute values\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelatedRecords_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// An index aligned collection of related record addresses\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nAn index aligned collection of related record addresses\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Traits_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// An index aligned collection of traits applied to the record\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nAn index aligned collection of traits applied to the record\n</summary>" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDataLensTableSaveData constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TableTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IDs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributeTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelationTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RelationTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelatedRecords_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RelatedRecords;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Traits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Traits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDataLensTableSaveData constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataLensTableSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDataLensTableSaveData;
class UScriptStruct* FDataLensTableSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDataLensTableSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDataLensTableSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataLensTableSaveData, (UObject*)Z_Construct_UPackage__Script_ToolkitNarratives(), TEXT("DataLensTableSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_FDataLensTableSaveData.OuterSingleton;
	}

// ********** Begin ScriptStruct FDataLensTableSaveData Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::NewProp_TableTag = { "TableTag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataLensTableSaveData, TableTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TableTag_MetaData), NewProp_TableTag_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::NewProp_IDs_Inner = { "IDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::NewProp_IDs = { "IDs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataLensTableSaveData, IDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IDs_MetaData), NewProp_IDs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::NewProp_AttributeTags_Inner = { "AttributeTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::NewProp_AttributeTags = { "AttributeTags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataLensTableSaveData, AttributeTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeTags_MetaData), NewProp_AttributeTags_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::NewProp_RelationTags_Inner = { "RelationTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::NewProp_RelationTags = { "RelationTags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataLensTableSaveData, RelationTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelationTags_MetaData), NewProp_RelationTags_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRecordAttributeValues, METADATA_PARAMS(0, nullptr) }; // 831983648
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataLensTableSaveData, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) }; // 831983648
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::NewProp_RelatedRecords_Inner = { "RelatedRecords", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRecordRelatedAddresses, METADATA_PARAMS(0, nullptr) }; // 3820085797
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::NewProp_RelatedRecords = { "RelatedRecords", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataLensTableSaveData, RelatedRecords), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelatedRecords_MetaData), NewProp_RelatedRecords_MetaData) }; // 3820085797
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::NewProp_Traits_Inner = { "Traits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3438578166
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::NewProp_Traits = { "Traits", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataLensTableSaveData, Traits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Traits_MetaData), NewProp_Traits_MetaData) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::NewProp_TableTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::NewProp_IDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::NewProp_IDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::NewProp_AttributeTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::NewProp_AttributeTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::NewProp_RelationTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::NewProp_RelationTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::NewProp_Attributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::NewProp_Attributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::NewProp_RelatedRecords_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::NewProp_RelatedRecords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::NewProp_Traits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::NewProp_Traits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FDataLensTableSaveData Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolkitNarratives,
	nullptr,
	&NewStructOps,
	"DataLensTableSaveData",
	Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::PropPointers),
	sizeof(FDataLensTableSaveData),
	alignof(FDataLensTableSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataLensTableSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_FDataLensTableSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDataLensTableSaveData.InnerSingleton, Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDataLensTableSaveData.InnerSingleton);
}
// ********** End ScriptStruct FDataLensTableSaveData **********************************************

// ********** Begin ScriptStruct FDataLensDatabaseSaveData *****************************************
struct Z_Construct_UScriptStruct_FDataLensDatabaseSaveData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FDataLensDatabaseSaveData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDataLensDatabaseSaveData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Wrapper for database save data\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nWrapper for database save data\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tables_MetaData[] = {
		{ "Category", "DataLensDatabaseSaveData" },
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDataLensDatabaseSaveData constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tables;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDataLensDatabaseSaveData constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataLensDatabaseSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FDataLensDatabaseSaveData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDataLensDatabaseSaveData;
class UScriptStruct* FDataLensDatabaseSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDataLensDatabaseSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDataLensDatabaseSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataLensDatabaseSaveData, (UObject*)Z_Construct_UPackage__Script_ToolkitNarratives(), TEXT("DataLensDatabaseSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_FDataLensDatabaseSaveData.OuterSingleton;
	}

// ********** Begin ScriptStruct FDataLensDatabaseSaveData Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataLensDatabaseSaveData_Statics::NewProp_Tables_Inner = { "Tables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDataLensTableSaveData, METADATA_PARAMS(0, nullptr) }; // 159103488
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataLensDatabaseSaveData_Statics::NewProp_Tables = { "Tables", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataLensDatabaseSaveData, Tables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tables_MetaData), NewProp_Tables_MetaData) }; // 159103488
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataLensDatabaseSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensDatabaseSaveData_Statics::NewProp_Tables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensDatabaseSaveData_Statics::NewProp_Tables,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataLensDatabaseSaveData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FDataLensDatabaseSaveData Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataLensDatabaseSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolkitNarratives,
	nullptr,
	&NewStructOps,
	"DataLensDatabaseSaveData",
	Z_Construct_UScriptStruct_FDataLensDatabaseSaveData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataLensDatabaseSaveData_Statics::PropPointers),
	sizeof(FDataLensDatabaseSaveData),
	alignof(FDataLensDatabaseSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataLensDatabaseSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataLensDatabaseSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataLensDatabaseSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_FDataLensDatabaseSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDataLensDatabaseSaveData.InnerSingleton, Z_Construct_UScriptStruct_FDataLensDatabaseSaveData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDataLensDatabaseSaveData.InnerSingleton);
}
// ********** End ScriptStruct FDataLensDatabaseSaveData *******************************************

// ********** Begin ScriptStruct FDataLensRecordUpdatePayload **************************************
struct Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FDataLensRecordUpdatePayload); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDataLensRecordUpdatePayload); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordID_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributesToSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelatedToAdd_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AttributeIndex -> Value\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AttributeIndex -> Value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelatedToRemove_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// RelationIndex -> Addresses\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RelationIndex -> Addresses" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearRelated_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraitsToAdd_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clear entire list at these indexes\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear entire list at these indexes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraitsToRemove_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClearTraits_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClearTable_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteRecord_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataLensStructs.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDataLensRecordUpdatePayload constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecordID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributesToSet_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributesToSet_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AttributesToSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelatedToAdd_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RelatedToAdd_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RelatedToAdd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelatedToRemove_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RelatedToRemove_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RelatedToRemove;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClearRelated_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ClearRelated;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraitsToAdd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraitsToRemove;
	static void NewProp_bClearTraits_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearTraits;
	static void NewProp_bClearTable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearTable;
	static void NewProp_bDeleteRecord_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteRecord;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDataLensRecordUpdatePayload constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataLensRecordUpdatePayload>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDataLensRecordUpdatePayload;
class UScriptStruct* FDataLensRecordUpdatePayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDataLensRecordUpdatePayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDataLensRecordUpdatePayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload, (UObject*)Z_Construct_UPackage__Script_ToolkitNarratives(), TEXT("DataLensRecordUpdatePayload"));
	}
	return Z_Registration_Info_UScriptStruct_FDataLensRecordUpdatePayload.OuterSingleton;
	}

// ********** Begin ScriptStruct FDataLensRecordUpdatePayload Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_RecordID = { "RecordID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataLensRecordUpdatePayload, RecordID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordID_MetaData), NewProp_RecordID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_AttributesToSet_ValueProp = { "AttributesToSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_AttributesToSet_Key_KeyProp = { "AttributesToSet_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_AttributesToSet = { "AttributesToSet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataLensRecordUpdatePayload, AttributesToSet), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributesToSet_MetaData), NewProp_AttributesToSet_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_RelatedToAdd_ValueProp = { "RelatedToAdd", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FRecordAddressArray, METADATA_PARAMS(0, nullptr) }; // 1176907076
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_RelatedToAdd_Key_KeyProp = { "RelatedToAdd_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_RelatedToAdd = { "RelatedToAdd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataLensRecordUpdatePayload, RelatedToAdd), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelatedToAdd_MetaData), NewProp_RelatedToAdd_MetaData) }; // 1176907076
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_RelatedToRemove_ValueProp = { "RelatedToRemove", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FRecordAddressArray, METADATA_PARAMS(0, nullptr) }; // 1176907076
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_RelatedToRemove_Key_KeyProp = { "RelatedToRemove_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_RelatedToRemove = { "RelatedToRemove", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataLensRecordUpdatePayload, RelatedToRemove), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelatedToRemove_MetaData), NewProp_RelatedToRemove_MetaData) }; // 1176907076
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_ClearRelated_ElementProp = { "ClearRelated", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_ClearRelated = { "ClearRelated", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataLensRecordUpdatePayload, ClearRelated), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearRelated_MetaData), NewProp_ClearRelated_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_TraitsToAdd = { "TraitsToAdd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataLensRecordUpdatePayload, TraitsToAdd), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraitsToAdd_MetaData), NewProp_TraitsToAdd_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_TraitsToRemove = { "TraitsToRemove", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataLensRecordUpdatePayload, TraitsToRemove), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraitsToRemove_MetaData), NewProp_TraitsToRemove_MetaData) }; // 3438578166
void Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_bClearTraits_SetBit(void* Obj)
{
	((FDataLensRecordUpdatePayload*)Obj)->bClearTraits = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_bClearTraits = { "bClearTraits", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDataLensRecordUpdatePayload), &Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_bClearTraits_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClearTraits_MetaData), NewProp_bClearTraits_MetaData) };
void Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_bClearTable_SetBit(void* Obj)
{
	((FDataLensRecordUpdatePayload*)Obj)->bClearTable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_bClearTable = { "bClearTable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDataLensRecordUpdatePayload), &Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_bClearTable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClearTable_MetaData), NewProp_bClearTable_MetaData) };
void Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_bDeleteRecord_SetBit(void* Obj)
{
	((FDataLensRecordUpdatePayload*)Obj)->bDeleteRecord = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_bDeleteRecord = { "bDeleteRecord", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDataLensRecordUpdatePayload), &Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_bDeleteRecord_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeleteRecord_MetaData), NewProp_bDeleteRecord_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_RecordID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_AttributesToSet_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_AttributesToSet_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_AttributesToSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_RelatedToAdd_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_RelatedToAdd_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_RelatedToAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_RelatedToRemove_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_RelatedToRemove_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_RelatedToRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_ClearRelated_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_ClearRelated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_TraitsToAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_TraitsToRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_bClearTraits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_bClearTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewProp_bDeleteRecord,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FDataLensRecordUpdatePayload Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolkitNarratives,
	nullptr,
	&NewStructOps,
	"DataLensRecordUpdatePayload",
	Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::PropPointers),
	sizeof(FDataLensRecordUpdatePayload),
	alignof(FDataLensRecordUpdatePayload),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload()
{
	if (!Z_Registration_Info_UScriptStruct_FDataLensRecordUpdatePayload.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDataLensRecordUpdatePayload.InnerSingleton, Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDataLensRecordUpdatePayload.InnerSingleton);
}
// ********** End ScriptStruct FDataLensRecordUpdatePayload ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DataLensStructs_h__Script_ToolkitNarratives_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRecordAddress::StaticStruct, Z_Construct_UScriptStruct_FRecordAddress_Statics::NewStructOps, TEXT("RecordAddress"),&Z_Registration_Info_UScriptStruct_FRecordAddress, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRecordAddress), 3084208652U) },
		{ FRecordAddressArray::StaticStruct, Z_Construct_UScriptStruct_FRecordAddressArray_Statics::NewStructOps, TEXT("RecordAddressArray"),&Z_Registration_Info_UScriptStruct_FRecordAddressArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRecordAddressArray), 1176907076U) },
		{ FRecordAttributeValues::StaticStruct, Z_Construct_UScriptStruct_FRecordAttributeValues_Statics::NewStructOps, TEXT("RecordAttributeValues"),&Z_Registration_Info_UScriptStruct_FRecordAttributeValues, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRecordAttributeValues), 831983648U) },
		{ FRecordRelatedAddresses::StaticStruct, Z_Construct_UScriptStruct_FRecordRelatedAddresses_Statics::NewStructOps, TEXT("RecordRelatedAddresses"),&Z_Registration_Info_UScriptStruct_FRecordRelatedAddresses, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRecordRelatedAddresses), 3820085797U) },
		{ FDataLensFieldAddress::StaticStruct, Z_Construct_UScriptStruct_FDataLensFieldAddress_Statics::NewStructOps, TEXT("DataLensFieldAddress"),&Z_Registration_Info_UScriptStruct_FDataLensFieldAddress, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataLensFieldAddress), 3187014462U) },
		{ FLensTableViewColumn::StaticStruct, Z_Construct_UScriptStruct_FLensTableViewColumn_Statics::NewStructOps, TEXT("LensTableViewColumn"),&Z_Registration_Info_UScriptStruct_FLensTableViewColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLensTableViewColumn), 3742916274U) },
		{ FSortColumnByName::StaticStruct, Z_Construct_UScriptStruct_FSortColumnByName_Statics::NewStructOps, TEXT("SortColumnByName"),&Z_Registration_Info_UScriptStruct_FSortColumnByName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSortColumnByName), 2128636074U) },
		{ FDataLensQuery::StaticStruct, Z_Construct_UScriptStruct_FDataLensQuery_Statics::NewStructOps, TEXT("DataLensQuery"),&Z_Registration_Info_UScriptStruct_FDataLensQuery, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataLensQuery), 3161148820U) },
		{ FSortColumnByIndex::StaticStruct, Z_Construct_UScriptStruct_FSortColumnByIndex_Statics::NewStructOps, TEXT("SortColumnByIndex"),&Z_Registration_Info_UScriptStruct_FSortColumnByIndex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSortColumnByIndex), 3165521672U) },
		{ FDataExpressionToken::StaticStruct, Z_Construct_UScriptStruct_FDataExpressionToken_Statics::NewStructOps, TEXT("DataExpressionToken"),&Z_Registration_Info_UScriptStruct_FDataExpressionToken, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataExpressionToken), 4054733902U) },
		{ FDataLensTableSaveData::StaticStruct, Z_Construct_UScriptStruct_FDataLensTableSaveData_Statics::NewStructOps, TEXT("DataLensTableSaveData"),&Z_Registration_Info_UScriptStruct_FDataLensTableSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataLensTableSaveData), 159103488U) },
		{ FDataLensDatabaseSaveData::StaticStruct, Z_Construct_UScriptStruct_FDataLensDatabaseSaveData_Statics::NewStructOps, TEXT("DataLensDatabaseSaveData"),&Z_Registration_Info_UScriptStruct_FDataLensDatabaseSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataLensDatabaseSaveData), 461894922U) },
		{ FDataLensRecordUpdatePayload::StaticStruct, Z_Construct_UScriptStruct_FDataLensRecordUpdatePayload_Statics::NewStructOps, TEXT("DataLensRecordUpdatePayload"),&Z_Registration_Info_UScriptStruct_FDataLensRecordUpdatePayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataLensRecordUpdatePayload), 554884207U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DataLensStructs_h__Script_ToolkitNarratives_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DataLensStructs_h__Script_ToolkitNarratives_243028219{
	TEXT("/Script/ToolkitNarratives"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DataLensStructs_h__Script_ToolkitNarratives_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DataLensStructs_h__Script_ToolkitNarratives_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
