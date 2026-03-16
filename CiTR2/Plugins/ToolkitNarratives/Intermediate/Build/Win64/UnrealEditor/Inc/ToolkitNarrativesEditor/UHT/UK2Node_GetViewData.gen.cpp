// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UK2Node_GetViewData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeUK2Node_GetViewData() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct_NoRegister();
TOOLKITNARRATIVESEDITOR_API UClass* Z_Construct_UClass_UK2Node_GetViewData();
TOOLKITNARRATIVESEDITOR_API UClass* Z_Construct_UClass_UK2Node_GetViewData_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToolkitNarrativesEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UK2Node_GetViewData ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UK2Node_GetViewData;
UClass* UK2Node_GetViewData::GetPrivateStaticClass()
{
	using TClass = UK2Node_GetViewData;
	if (!Z_Registration_Info_UClass_UK2Node_GetViewData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("K2Node_GetViewData"),
			Z_Registration_Info_UClass_UK2Node_GetViewData.InnerSingleton,
			StaticRegisterNativesUK2Node_GetViewData,
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
	return Z_Registration_Info_UClass_UK2Node_GetViewData.InnerSingleton;
}
UClass* Z_Construct_UClass_UK2Node_GetViewData_NoRegister()
{
	return UK2Node_GetViewData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UK2Node_GetViewData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UK2Node_GetViewData.h" },
		{ "ModuleRelativePath", "Public/UK2Node_GetViewData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetStructType_MetaData[] = {
		{ "Category", "View" },
		{ "ModuleRelativePath", "Public/UK2Node_GetViewData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UK2Node_GetViewData constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetStructType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UK2Node_GetViewData constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_GetViewData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UK2Node_GetViewData_Statics

// ********** Begin Class UK2Node_GetViewData Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK2Node_GetViewData_Statics::NewProp_TargetStructType = { "TargetStructType", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_GetViewData, TargetStructType), Z_Construct_UClass_UScriptStruct_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetStructType_MetaData), NewProp_TargetStructType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_GetViewData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_GetViewData_Statics::NewProp_TargetStructType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetViewData_Statics::PropPointers) < 2048);
// ********** End Class UK2Node_GetViewData Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UK2Node_GetViewData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolkitNarrativesEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetViewData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_GetViewData_Statics::ClassParams = {
	&UK2Node_GetViewData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UK2Node_GetViewData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetViewData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetViewData_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_GetViewData_Statics::Class_MetaDataParams)
};
void UK2Node_GetViewData::StaticRegisterNativesUK2Node_GetViewData()
{
}
UClass* Z_Construct_UClass_UK2Node_GetViewData()
{
	if (!Z_Registration_Info_UClass_UK2Node_GetViewData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_GetViewData.OuterSingleton, Z_Construct_UClass_UK2Node_GetViewData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UK2Node_GetViewData.OuterSingleton;
}
UK2Node_GetViewData::UK2Node_GetViewData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UK2Node_GetViewData);
UK2Node_GetViewData::~UK2Node_GetViewData() {}
// ********** End Class UK2Node_GetViewData ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarrativesEditor_Public_UK2Node_GetViewData_h__Script_ToolkitNarrativesEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_GetViewData, UK2Node_GetViewData::StaticClass, TEXT("UK2Node_GetViewData"), &Z_Registration_Info_UClass_UK2Node_GetViewData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_GetViewData), 558786502U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarrativesEditor_Public_UK2Node_GetViewData_h__Script_ToolkitNarrativesEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarrativesEditor_Public_UK2Node_GetViewData_h__Script_ToolkitNarrativesEditor_1794754291{
	TEXT("/Script/ToolkitNarrativesEditor"),
	Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarrativesEditor_Public_UK2Node_GetViewData_h__Script_ToolkitNarrativesEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarrativesEditor_Public_UK2Node_GetViewData_h__Script_ToolkitNarrativesEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
