// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataLensTable.h"
#include "DataLensStructs.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDataLensTable() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
TOOLKITNARRATIVES_API UClass* Z_Construct_UClass_UDataLensTable();
TOOLKITNARRATIVES_API UClass* Z_Construct_UClass_UDataLensTable_NoRegister();
TOOLKITNARRATIVES_API UScriptStruct* Z_Construct_UScriptStruct_FRecordAttributeValues();
TOOLKITNARRATIVES_API UScriptStruct* Z_Construct_UScriptStruct_FRecordRelatedAddresses();
UPackage* Z_Construct_UPackage__Script_ToolkitNarratives();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDataLensTable ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UDataLensTable;
UClass* UDataLensTable::GetPrivateStaticClass()
{
	using TClass = UDataLensTable;
	if (!Z_Registration_Info_UClass_UDataLensTable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("DataLensTable"),
			Z_Registration_Info_UClass_UDataLensTable.InnerSingleton,
			StaticRegisterNativesUDataLensTable,
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
	return Z_Registration_Info_UClass_UDataLensTable.InnerSingleton;
}
UClass* Z_Construct_UClass_UDataLensTable_NoRegister()
{
	return UDataLensTable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDataLensTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// A System of Arrays style data set supporting Int fields as \"Attributes\" and Array<RecordAddress> fields as \"RelatedRecords\".\n/// Both attributes and related records can be identified by gameplay tag the system of array then takes the form of\n/// Attribute[RecordIndex][AttributeTagIndex] = Value\n/// and\n/// RelatedRecords[RecordIndex][RelatedRecordTagIndex] = Array<RecordAddress> Addresses\n/// </summary>\n" },
#endif
		{ "IncludePath", "DataLensTable.h" },
		{ "ModuleRelativePath", "Public/DataLensTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nA System of Arrays style data set supporting Int fields as \"Attributes\" and Array<RecordAddress> fields as \"RelatedRecords\".\nBoth attributes and related records can be identified by gameplay tag the system of array then takes the form of\nAttribute[RecordIndex][AttributeTagIndex] = Value\nand\nRelatedRecords[RecordIndex][RelatedRecordTagIndex] = Array<RecordAddress> Addresses\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IDs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// An index aligned collection of IDs uniquely identifying each record in the table\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nAn index aligned collection of IDs uniquely identifying each record in the table\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeTags_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// An index aligned collection of attribute Tags\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nAn index aligned collection of attribute Tags\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelationTags_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// An index aligned collection of related record tags\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nAn index aligned collection of related record tags\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// An index aligned collection of attribute values\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nAn index aligned collection of attribute values\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelatedRecords_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// An index aligned collection of related record addresses\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nAn index aligned collection of related record addresses\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Traits_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// An index aligned collection of traits applied to the record\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nAn index aligned collection of traits applied to the record\n</summary>" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UDataLensTable constinit property declarations ***************************
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
// ********** End Class UDataLensTable constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataLensTable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UDataLensTable_Statics

// ********** Begin Class UDataLensTable Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataLensTable_Statics::NewProp_IDs_Inner = { "IDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataLensTable_Statics::NewProp_IDs = { "IDs", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataLensTable, IDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IDs_MetaData), NewProp_IDs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataLensTable_Statics::NewProp_AttributeTags_Inner = { "AttributeTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataLensTable_Statics::NewProp_AttributeTags = { "AttributeTags", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataLensTable, AttributeTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeTags_MetaData), NewProp_AttributeTags_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataLensTable_Statics::NewProp_RelationTags_Inner = { "RelationTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataLensTable_Statics::NewProp_RelationTags = { "RelationTags", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataLensTable, RelationTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelationTags_MetaData), NewProp_RelationTags_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataLensTable_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRecordAttributeValues, METADATA_PARAMS(0, nullptr) }; // 831983648
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataLensTable_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataLensTable, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) }; // 831983648
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataLensTable_Statics::NewProp_RelatedRecords_Inner = { "RelatedRecords", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRecordRelatedAddresses, METADATA_PARAMS(0, nullptr) }; // 3820085797
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataLensTable_Statics::NewProp_RelatedRecords = { "RelatedRecords", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataLensTable, RelatedRecords), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelatedRecords_MetaData), NewProp_RelatedRecords_MetaData) }; // 3820085797
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataLensTable_Statics::NewProp_Traits_Inner = { "Traits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3438578166
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataLensTable_Statics::NewProp_Traits = { "Traits", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataLensTable, Traits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Traits_MetaData), NewProp_Traits_MetaData) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataLensTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLensTable_Statics::NewProp_IDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLensTable_Statics::NewProp_IDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLensTable_Statics::NewProp_AttributeTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLensTable_Statics::NewProp_AttributeTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLensTable_Statics::NewProp_RelationTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLensTable_Statics::NewProp_RelationTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLensTable_Statics::NewProp_Attributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLensTable_Statics::NewProp_Attributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLensTable_Statics::NewProp_RelatedRecords_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLensTable_Statics::NewProp_RelatedRecords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLensTable_Statics::NewProp_Traits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLensTable_Statics::NewProp_Traits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLensTable_Statics::PropPointers) < 2048);
// ********** End Class UDataLensTable Property Definitions ****************************************
UObject* (*const Z_Construct_UClass_UDataLensTable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolkitNarratives,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLensTable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataLensTable_Statics::ClassParams = {
	&UDataLensTable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDataLensTable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataLensTable_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLensTable_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataLensTable_Statics::Class_MetaDataParams)
};
void UDataLensTable::StaticRegisterNativesUDataLensTable()
{
}
UClass* Z_Construct_UClass_UDataLensTable()
{
	if (!Z_Registration_Info_UClass_UDataLensTable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataLensTable.OuterSingleton, Z_Construct_UClass_UDataLensTable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataLensTable.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDataLensTable);
UDataLensTable::~UDataLensTable() {}
// ********** End Class UDataLensTable *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DataLensTable_h__Script_ToolkitNarratives_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataLensTable, UDataLensTable::StaticClass, TEXT("UDataLensTable"), &Z_Registration_Info_UClass_UDataLensTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataLensTable), 3391736763U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DataLensTable_h__Script_ToolkitNarratives_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DataLensTable_h__Script_ToolkitNarratives_1887445457{
	TEXT("/Script/ToolkitNarratives"),
	Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DataLensTable_h__Script_ToolkitNarratives_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DataLensTable_h__Script_ToolkitNarratives_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
