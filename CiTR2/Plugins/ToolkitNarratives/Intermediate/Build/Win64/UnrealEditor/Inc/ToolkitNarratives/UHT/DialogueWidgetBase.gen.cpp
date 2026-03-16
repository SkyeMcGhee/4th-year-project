// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogueWidgetBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDialogueWidgetBase() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
TOOLKITNARRATIVES_API UClass* Z_Construct_UClass_UDialogueComponentBase_NoRegister();
TOOLKITNARRATIVES_API UClass* Z_Construct_UClass_UDialogueWidgetBase();
TOOLKITNARRATIVES_API UClass* Z_Construct_UClass_UDialogueWidgetBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToolkitNarratives();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDialogueWidgetBase Function OpenDialogue ********************************
struct DialogueWidgetBase_eventOpenDialogue_Parms
{
	UDialogueComponentBase* InstantiatingDialogue;
};
static FName NAME_UDialogueWidgetBase_OpenDialogue = FName(TEXT("OpenDialogue"));
void UDialogueWidgetBase::OpenDialogue(UDialogueComponentBase* InstantiatingDialogue)
{
	UFunction* Func = FindFunctionChecked(NAME_UDialogueWidgetBase_OpenDialogue);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		DialogueWidgetBase_eventOpenDialogue_Parms Parms;
		Parms.InstantiatingDialogue=InstantiatingDialogue;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OpenDialogue_Implementation(InstantiatingDialogue);
	}
}
struct Z_Construct_UFunction_UDialogueWidgetBase_OpenDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "ModuleRelativePath", "Public/DialogueWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstantiatingDialogue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OpenDialogue constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstantiatingDialogue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OpenDialogue constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OpenDialogue Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueWidgetBase_OpenDialogue_Statics::NewProp_InstantiatingDialogue = { "InstantiatingDialogue", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueWidgetBase_eventOpenDialogue_Parms, InstantiatingDialogue), Z_Construct_UClass_UDialogueComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstantiatingDialogue_MetaData), NewProp_InstantiatingDialogue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueWidgetBase_OpenDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidgetBase_OpenDialogue_Statics::NewProp_InstantiatingDialogue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidgetBase_OpenDialogue_Statics::PropPointers) < 2048);
// ********** End Function OpenDialogue Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueWidgetBase_OpenDialogue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogueWidgetBase, nullptr, "OpenDialogue", 	Z_Construct_UFunction_UDialogueWidgetBase_OpenDialogue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidgetBase_OpenDialogue_Statics::PropPointers), 
sizeof(DialogueWidgetBase_eventOpenDialogue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidgetBase_OpenDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueWidgetBase_OpenDialogue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(DialogueWidgetBase_eventOpenDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueWidgetBase_OpenDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueWidgetBase_OpenDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueWidgetBase::execOpenDialogue)
{
	P_GET_OBJECT(UDialogueComponentBase,Z_Param_InstantiatingDialogue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenDialogue_Implementation(Z_Param_InstantiatingDialogue);
	P_NATIVE_END;
}
// ********** End Class UDialogueWidgetBase Function OpenDialogue **********************************

// ********** Begin Class UDialogueWidgetBase Function UpdateDialogueText **************************
struct DialogueWidgetBase_eventUpdateDialogueText_Parms
{
	int32 Index;
	FText Speaker;
	FText Dialogue;
	TArray<FText> Options;
};
static FName NAME_UDialogueWidgetBase_UpdateDialogueText = FName(TEXT("UpdateDialogueText"));
void UDialogueWidgetBase::UpdateDialogueText(int32 Index, FText const& Speaker, FText const& Dialogue, TArray<FText> const& Options)
{
	UFunction* Func = FindFunctionChecked(NAME_UDialogueWidgetBase_UpdateDialogueText);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		DialogueWidgetBase_eventUpdateDialogueText_Parms Parms;
		Parms.Index=Index;
		Parms.Speaker=Speaker;
		Parms.Dialogue=Dialogue;
		Parms.Options=Options;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		UpdateDialogueText_Implementation(Index, Speaker, Dialogue, Options);
	}
}
struct Z_Construct_UFunction_UDialogueWidgetBase_UpdateDialogueText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "ModuleRelativePath", "Public/DialogueWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dialogue_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateDialogueText constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Speaker;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Options_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateDialogueText constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateDialogueText Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueWidgetBase_UpdateDialogueText_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueWidgetBase_eventUpdateDialogueText_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDialogueWidgetBase_UpdateDialogueText_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueWidgetBase_eventUpdateDialogueText_Parms, Speaker), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speaker_MetaData), NewProp_Speaker_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDialogueWidgetBase_UpdateDialogueText_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueWidgetBase_eventUpdateDialogueText_Parms, Dialogue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dialogue_MetaData), NewProp_Dialogue_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDialogueWidgetBase_UpdateDialogueText_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueWidgetBase_UpdateDialogueText_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueWidgetBase_eventUpdateDialogueText_Parms, Options), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueWidgetBase_UpdateDialogueText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidgetBase_UpdateDialogueText_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidgetBase_UpdateDialogueText_Statics::NewProp_Speaker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidgetBase_UpdateDialogueText_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidgetBase_UpdateDialogueText_Statics::NewProp_Options_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidgetBase_UpdateDialogueText_Statics::NewProp_Options,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidgetBase_UpdateDialogueText_Statics::PropPointers) < 2048);
// ********** End Function UpdateDialogueText Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueWidgetBase_UpdateDialogueText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogueWidgetBase, nullptr, "UpdateDialogueText", 	Z_Construct_UFunction_UDialogueWidgetBase_UpdateDialogueText_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidgetBase_UpdateDialogueText_Statics::PropPointers), 
sizeof(DialogueWidgetBase_eventUpdateDialogueText_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidgetBase_UpdateDialogueText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueWidgetBase_UpdateDialogueText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(DialogueWidgetBase_eventUpdateDialogueText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueWidgetBase_UpdateDialogueText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueWidgetBase_UpdateDialogueText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueWidgetBase::execUpdateDialogueText)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Speaker);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Dialogue);
	P_GET_TARRAY_REF(FText,Z_Param_Out_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateDialogueText_Implementation(Z_Param_Index,Z_Param_Out_Speaker,Z_Param_Out_Dialogue,Z_Param_Out_Options);
	P_NATIVE_END;
}
// ********** End Class UDialogueWidgetBase Function UpdateDialogueText ****************************

// ********** Begin Class UDialogueWidgetBase ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UDialogueWidgetBase;
UClass* UDialogueWidgetBase::GetPrivateStaticClass()
{
	using TClass = UDialogueWidgetBase;
	if (!Z_Registration_Info_UClass_UDialogueWidgetBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("DialogueWidgetBase"),
			Z_Registration_Info_UClass_UDialogueWidgetBase.InnerSingleton,
			StaticRegisterNativesUDialogueWidgetBase,
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
	return Z_Registration_Info_UClass_UDialogueWidgetBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UDialogueWidgetBase_NoRegister()
{
	return UDialogueWidgetBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDialogueWidgetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DialogueWidgetBase.h" },
		{ "ModuleRelativePath", "Public/DialogueWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueComponent_MetaData[] = {
		{ "Category", "Dialogues" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogueWidgetBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDialogueWidgetBase constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDialogueWidgetBase constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OpenDialogue"), .Pointer = &UDialogueWidgetBase::execOpenDialogue },
		{ .NameUTF8 = UTF8TEXT("UpdateDialogueText"), .Pointer = &UDialogueWidgetBase::execUpdateDialogueText },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueWidgetBase_OpenDialogue, "OpenDialogue" }, // 303913184
		{ &Z_Construct_UFunction_UDialogueWidgetBase_UpdateDialogueText, "UpdateDialogueText" }, // 3599558287
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueWidgetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UDialogueWidgetBase_Statics

// ********** Begin Class UDialogueWidgetBase Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueWidgetBase_Statics::NewProp_DialogueComponent = { "DialogueComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueWidgetBase, DialogueComponent), Z_Construct_UClass_UDialogueComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueComponent_MetaData), NewProp_DialogueComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueWidgetBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidgetBase_Statics::NewProp_DialogueComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidgetBase_Statics::PropPointers) < 2048);
// ********** End Class UDialogueWidgetBase Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UDialogueWidgetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolkitNarratives,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidgetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueWidgetBase_Statics::ClassParams = {
	&UDialogueWidgetBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDialogueWidgetBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidgetBase_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueWidgetBase_Statics::Class_MetaDataParams)
};
void UDialogueWidgetBase::StaticRegisterNativesUDialogueWidgetBase()
{
	UClass* Class = UDialogueWidgetBase::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UDialogueWidgetBase_Statics::Funcs));
}
UClass* Z_Construct_UClass_UDialogueWidgetBase()
{
	if (!Z_Registration_Info_UClass_UDialogueWidgetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueWidgetBase.OuterSingleton, Z_Construct_UClass_UDialogueWidgetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueWidgetBase.OuterSingleton;
}
UDialogueWidgetBase::UDialogueWidgetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDialogueWidgetBase);
UDialogueWidgetBase::~UDialogueWidgetBase() {}
// ********** End Class UDialogueWidgetBase ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DialogueWidgetBase_h__Script_ToolkitNarratives_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueWidgetBase, UDialogueWidgetBase::StaticClass, TEXT("UDialogueWidgetBase"), &Z_Registration_Info_UClass_UDialogueWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueWidgetBase), 3036439694U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DialogueWidgetBase_h__Script_ToolkitNarratives_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DialogueWidgetBase_h__Script_ToolkitNarratives_763728766{
	TEXT("/Script/ToolkitNarratives"),
	Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DialogueWidgetBase_h__Script_ToolkitNarratives_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DialogueWidgetBase_h__Script_ToolkitNarratives_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
