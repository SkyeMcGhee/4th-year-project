// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataLensTableView.h"
#include "DataLensStructs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDataLensTableView() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct_NoRegister();
TOOLKITNARRATIVES_API UClass* Z_Construct_UClass_UDataLensTableView();
TOOLKITNARRATIVES_API UClass* Z_Construct_UClass_UDataLensTableView_NoRegister();
TOOLKITNARRATIVES_API UScriptStruct* Z_Construct_UScriptStruct_FDataLensQuery();
UPackage* Z_Construct_UPackage__Script_ToolkitNarratives();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDataLensTableView Function ConvertRawBytesToStructArray *****************
struct Z_Construct_UFunction_UDataLensTableView_ConvertRawBytesToStructArray_Statics
{
	struct DataLensTableView_eventConvertRawBytesToStructArray_Parms
	{
		TArray<uint8> RawData;
		UScriptStruct* StructType;
		TArray<uint8> OutStructArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "View" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Internal conversion function used to \n/// </summary>\n/// <param name=\"RawData\"></param>\n/// <param name=\"StructType\"></param>\n/// <param name=\"OutStructArray\"></param>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensTableView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nInternal conversion function used to\n</summary>\n<param name=\"RawData\"></param>\n<param name=\"StructType\"></param>\n<param name=\"OutStructArray\"></param>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RawData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConvertRawBytesToStructArray constinit property declarations **********
	static const UECodeGen_Private::FBytePropertyParams NewProp_RawData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RawData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StructType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutStructArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutStructArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConvertRawBytesToStructArray constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConvertRawBytesToStructArray Property Definitions *********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLensTableView_ConvertRawBytesToStructArray_Statics::NewProp_RawData_Inner = { "RawData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLensTableView_ConvertRawBytesToStructArray_Statics::NewProp_RawData = { "RawData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensTableView_eventConvertRawBytesToStructArray_Parms, RawData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RawData_MetaData), NewProp_RawData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLensTableView_ConvertRawBytesToStructArray_Statics::NewProp_StructType = { "StructType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensTableView_eventConvertRawBytesToStructArray_Parms, StructType), Z_Construct_UClass_UScriptStruct_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLensTableView_ConvertRawBytesToStructArray_Statics::NewProp_OutStructArray_Inner = { "OutStructArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLensTableView_ConvertRawBytesToStructArray_Statics::NewProp_OutStructArray = { "OutStructArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensTableView_eventConvertRawBytesToStructArray_Parms, OutStructArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLensTableView_ConvertRawBytesToStructArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensTableView_ConvertRawBytesToStructArray_Statics::NewProp_RawData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensTableView_ConvertRawBytesToStructArray_Statics::NewProp_RawData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensTableView_ConvertRawBytesToStructArray_Statics::NewProp_StructType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensTableView_ConvertRawBytesToStructArray_Statics::NewProp_OutStructArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensTableView_ConvertRawBytesToStructArray_Statics::NewProp_OutStructArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensTableView_ConvertRawBytesToStructArray_Statics::PropPointers) < 2048);
// ********** End Function ConvertRawBytesToStructArray Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLensTableView_ConvertRawBytesToStructArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataLensTableView, nullptr, "ConvertRawBytesToStructArray", 	Z_Construct_UFunction_UDataLensTableView_ConvertRawBytesToStructArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensTableView_ConvertRawBytesToStructArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDataLensTableView_ConvertRawBytesToStructArray_Statics::DataLensTableView_eventConvertRawBytesToStructArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensTableView_ConvertRawBytesToStructArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLensTableView_ConvertRawBytesToStructArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataLensTableView_ConvertRawBytesToStructArray_Statics::DataLensTableView_eventConvertRawBytesToStructArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLensTableView_ConvertRawBytesToStructArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLensTableView_ConvertRawBytesToStructArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLensTableView::execConvertRawBytesToStructArray)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_RawData);
	P_GET_OBJECT(UScriptStruct,Z_Param_StructType);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_OutStructArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDataLensTableView::ConvertRawBytesToStructArray(Z_Param_Out_RawData,Z_Param_StructType,Z_Param_Out_OutStructArray);
	P_NATIVE_END;
}
// ********** End Class UDataLensTableView Function ConvertRawBytesToStructArray *******************

// ********** Begin Class UDataLensTableView Function GetResults ***********************************
struct Z_Construct_UFunction_UDataLensTableView_GetResults_Statics
{
	struct DataLensTableView_eventGetResults_Parms
	{
		TArray<uint8> OutArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "View" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Raw result view of the view, Get View Results is a custom node that will return the results as a TArray of the structure provided\n/// </summary>\n/// <param name=\"OutArray\"></param>\n" },
#endif
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/DataLensTableView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nRaw result view of the view, Get View Results is a custom node that will return the results as a TArray of the structure provided\n</summary>\n<param name=\"OutArray\"></param>" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetResults constinit property declarations ****************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetResults constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetResults Property Definitions ***************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLensTableView_GetResults_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLensTableView_GetResults_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLensTableView_eventGetResults_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLensTableView_GetResults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensTableView_GetResults_Statics::NewProp_OutArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLensTableView_GetResults_Statics::NewProp_OutArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensTableView_GetResults_Statics::PropPointers) < 2048);
// ********** End Function GetResults Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLensTableView_GetResults_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataLensTableView, nullptr, "GetResults", 	Z_Construct_UFunction_UDataLensTableView_GetResults_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensTableView_GetResults_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDataLensTableView_GetResults_Statics::DataLensTableView_eventGetResults_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensTableView_GetResults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLensTableView_GetResults_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataLensTableView_GetResults_Statics::DataLensTableView_eventGetResults_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLensTableView_GetResults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLensTableView_GetResults_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UDataLensTableView Function GetResults *************************************

// ********** Begin Class UDataLensTableView Function InitializeQuery ******************************
struct Z_Construct_UFunction_UDataLensTableView_InitializeQuery_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "View|Query" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensTableView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\n</summary>" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function InitializeQuery constinit property declarations ***********************
// ********** End Function InitializeQuery constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLensTableView_InitializeQuery_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataLensTableView, nullptr, "InitializeQuery", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLensTableView_InitializeQuery_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLensTableView_InitializeQuery_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDataLensTableView_InitializeQuery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLensTableView_InitializeQuery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLensTableView::execInitializeQuery)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeQuery();
	P_NATIVE_END;
}
// ********** End Class UDataLensTableView Function InitializeQuery ********************************

// ********** Begin Class UDataLensTableView *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UDataLensTableView;
UClass* UDataLensTableView::GetPrivateStaticClass()
{
	using TClass = UDataLensTableView;
	if (!Z_Registration_Info_UClass_UDataLensTableView.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("DataLensTableView"),
			Z_Registration_Info_UClass_UDataLensTableView.InnerSingleton,
			StaticRegisterNativesUDataLensTableView,
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
	return Z_Registration_Info_UClass_UDataLensTableView.InnerSingleton;
}
UClass* Z_Construct_UClass_UDataLensTableView_NoRegister()
{
	return UDataLensTableView::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDataLensTableView_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// A View on a data table with optional query filtering, column expression, and struct output mapping.\n/// </summary>\n" },
#endif
		{ "IncludePath", "DataLensTableView.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DataLensTableView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nA View on a data table with optional query filtering, column expression, and struct output mapping.\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetStructType_MetaData[] = {
		{ "Category", "View" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Struct that describes the output shape for this view. Must be BlueprintType and only include int/float/bool fields.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensTableView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nStruct that describes the output shape for this view. Must be BlueprintType and only include int/float/bool fields.\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[] = {
		{ "Category", "View|Query" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// The query that defines the view's records\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DataLensTableView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nThe query that defines the view's records\n</summary>" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UDataLensTableView constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetStructType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Query;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDataLensTableView constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ConvertRawBytesToStructArray"), .Pointer = &UDataLensTableView::execConvertRawBytesToStructArray },
		{ .NameUTF8 = UTF8TEXT("GetResults"), .Pointer = &UDataLensTableView::execGetResults },
		{ .NameUTF8 = UTF8TEXT("InitializeQuery"), .Pointer = &UDataLensTableView::execInitializeQuery },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataLensTableView_ConvertRawBytesToStructArray, "ConvertRawBytesToStructArray" }, // 2583414048
		{ &Z_Construct_UFunction_UDataLensTableView_GetResults, "GetResults" }, // 361178315
		{ &Z_Construct_UFunction_UDataLensTableView_InitializeQuery, "InitializeQuery" }, // 4095771448
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataLensTableView>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UDataLensTableView_Statics

// ********** Begin Class UDataLensTableView Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataLensTableView_Statics::NewProp_TargetStructType = { "TargetStructType", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataLensTableView, TargetStructType), Z_Construct_UClass_UScriptStruct_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetStructType_MetaData), NewProp_TargetStructType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataLensTableView_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataLensTableView, Query), Z_Construct_UScriptStruct_FDataLensQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Query_MetaData), NewProp_Query_MetaData) }; // 3161148820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataLensTableView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLensTableView_Statics::NewProp_TargetStructType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLensTableView_Statics::NewProp_Query,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLensTableView_Statics::PropPointers) < 2048);
// ********** End Class UDataLensTableView Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UDataLensTableView_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolkitNarratives,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLensTableView_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataLensTableView_Statics::ClassParams = {
	&UDataLensTableView::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDataLensTableView_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataLensTableView_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLensTableView_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataLensTableView_Statics::Class_MetaDataParams)
};
void UDataLensTableView::StaticRegisterNativesUDataLensTableView()
{
	UClass* Class = UDataLensTableView::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UDataLensTableView_Statics::Funcs));
}
UClass* Z_Construct_UClass_UDataLensTableView()
{
	if (!Z_Registration_Info_UClass_UDataLensTableView.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataLensTableView.OuterSingleton, Z_Construct_UClass_UDataLensTableView_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataLensTableView.OuterSingleton;
}
UDataLensTableView::UDataLensTableView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDataLensTableView);
UDataLensTableView::~UDataLensTableView() {}
// ********** End Class UDataLensTableView *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DataLensTableView_h__Script_ToolkitNarratives_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataLensTableView, UDataLensTableView::StaticClass, TEXT("UDataLensTableView"), &Z_Registration_Info_UClass_UDataLensTableView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataLensTableView), 1558308848U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DataLensTableView_h__Script_ToolkitNarratives_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DataLensTableView_h__Script_ToolkitNarratives_2787303003{
	TEXT("/Script/ToolkitNarratives"),
	Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DataLensTableView_h__Script_ToolkitNarratives_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DataLensTableView_h__Script_ToolkitNarratives_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
