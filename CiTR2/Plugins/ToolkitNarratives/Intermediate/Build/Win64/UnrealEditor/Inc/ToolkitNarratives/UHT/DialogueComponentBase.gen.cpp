// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogueComponentBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDialogueComponentBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
TOOLKITNARRATIVES_API UClass* Z_Construct_UClass_UDialogueComponentBase();
TOOLKITNARRATIVES_API UClass* Z_Construct_UClass_UDialogueComponentBase_NoRegister();
TOOLKITNARRATIVES_API UClass* Z_Construct_UClass_UDialogueWidgetBase_NoRegister();
TOOLKITNARRATIVES_API UEnum* Z_Construct_UEnum_ToolkitNarratives_EDialogueAddType();
TOOLKITNARRATIVES_API UEnum* Z_Construct_UEnum_ToolkitNarratives_EProgressStoreType();
TOOLKITNARRATIVES_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueProgress();
UPackage* Z_Construct_UPackage__Script_ToolkitNarratives();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EProgressStoreType ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProgressStoreType;
static UEnum* EProgressStoreType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EProgressStoreType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EProgressStoreType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ToolkitNarratives_EProgressStoreType, (UObject*)Z_Construct_UPackage__Script_ToolkitNarratives(), TEXT("EProgressStoreType"));
	}
	return Z_Registration_Info_UEnum_EProgressStoreType.OuterSingleton;
}
template<> TOOLKITNARRATIVES_NON_ATTRIBUTED_API UEnum* StaticEnum<EProgressStoreType>()
{
	return EProgressStoreType_StaticEnum();
}
struct Z_Construct_UEnum_ToolkitNarratives_EProgressStoreType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Clear.DisplayName", "Clear" },
		{ "Clear.Name", "EProgressStoreType::Clear" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enum for Progress Store Type */" },
#endif
		{ "ModuleRelativePath", "Public/DialogueComponentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum for Progress Store Type" },
#endif
		{ "Update.DisplayName", "Update" },
		{ "Update.Name", "EProgressStoreType::Update" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProgressStoreType::Update", (int64)EProgressStoreType::Update },
		{ "EProgressStoreType::Clear", (int64)EProgressStoreType::Clear },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_ToolkitNarratives_EProgressStoreType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ToolkitNarratives_EProgressStoreType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ToolkitNarratives,
	nullptr,
	"EProgressStoreType",
	"EProgressStoreType",
	Z_Construct_UEnum_ToolkitNarratives_EProgressStoreType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ToolkitNarratives_EProgressStoreType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ToolkitNarratives_EProgressStoreType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ToolkitNarratives_EProgressStoreType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ToolkitNarratives_EProgressStoreType()
{
	if (!Z_Registration_Info_UEnum_EProgressStoreType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProgressStoreType.InnerSingleton, Z_Construct_UEnum_ToolkitNarratives_EProgressStoreType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EProgressStoreType.InnerSingleton;
}
// ********** End Enum EProgressStoreType **********************************************************

// ********** Begin Enum EDialogueAddType **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDialogueAddType;
static UEnum* EDialogueAddType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDialogueAddType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDialogueAddType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ToolkitNarratives_EDialogueAddType, (UObject*)Z_Construct_UPackage__Script_ToolkitNarratives(), TEXT("EDialogueAddType"));
	}
	return Z_Registration_Info_UEnum_EDialogueAddType.OuterSingleton;
}
template<> TOOLKITNARRATIVES_NON_ATTRIBUTED_API UEnum* StaticEnum<EDialogueAddType>()
{
	return EDialogueAddType_StaticEnum();
}
struct Z_Construct_UEnum_ToolkitNarratives_EDialogueAddType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enum for Add Dialogue Type */" },
#endif
		{ "ModuleRelativePath", "Public/DialogueComponentBase.h" },
		{ "PassThrough.DisplayName", "Pass Through" },
		{ "PassThrough.Name", "EDialogueAddType::PassThrough" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum for Add Dialogue Type" },
#endif
		{ "Updated.DisplayName", "Updated" },
		{ "Updated.Name", "EDialogueAddType::Updated" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDialogueAddType::PassThrough", (int64)EDialogueAddType::PassThrough },
		{ "EDialogueAddType::Updated", (int64)EDialogueAddType::Updated },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_ToolkitNarratives_EDialogueAddType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ToolkitNarratives_EDialogueAddType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ToolkitNarratives,
	nullptr,
	"EDialogueAddType",
	"EDialogueAddType",
	Z_Construct_UEnum_ToolkitNarratives_EDialogueAddType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ToolkitNarratives_EDialogueAddType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ToolkitNarratives_EDialogueAddType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ToolkitNarratives_EDialogueAddType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ToolkitNarratives_EDialogueAddType()
{
	if (!Z_Registration_Info_UEnum_EDialogueAddType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDialogueAddType.InnerSingleton, Z_Construct_UEnum_ToolkitNarratives_EDialogueAddType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDialogueAddType.InnerSingleton;
}
// ********** End Enum EDialogueAddType ************************************************************

// ********** Begin ScriptStruct FDialogueProgress *************************************************
struct Z_Construct_UScriptStruct_FDialogueProgress_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FDialogueProgress); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDialogueProgress); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Struct for Dialogue Progress Storage */" },
#endif
		{ "ModuleRelativePath", "Public/DialogueComponentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct for Dialogue Progress Storage" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[] = {
		{ "Category", "DialogueProgress" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Map of progress (Key: Progress Index, Value: Option Index) */" },
#endif
		{ "ModuleRelativePath", "Public/DialogueComponentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of progress (Key: Progress Index, Value: Option Index)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDialogueProgress constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Progress_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Progress_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Progress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDialogueProgress constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueProgress>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FDialogueProgress_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDialogueProgress;
class UScriptStruct* FDialogueProgress::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDialogueProgress.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDialogueProgress.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueProgress, (UObject*)Z_Construct_UPackage__Script_ToolkitNarratives(), TEXT("DialogueProgress"));
	}
	return Z_Registration_Info_UScriptStruct_FDialogueProgress.OuterSingleton;
	}

// ********** Begin ScriptStruct FDialogueProgress Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDialogueProgress_Statics::NewProp_Progress_ValueProp = { "Progress", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDialogueProgress_Statics::NewProp_Progress_Key_KeyProp = { "Progress_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDialogueProgress_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueProgress, Progress), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Progress_MetaData), NewProp_Progress_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueProgress_Statics::NewProp_Progress_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueProgress_Statics::NewProp_Progress_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueProgress_Statics::NewProp_Progress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueProgress_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FDialogueProgress Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueProgress_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolkitNarratives,
	nullptr,
	&NewStructOps,
	"DialogueProgress",
	Z_Construct_UScriptStruct_FDialogueProgress_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueProgress_Statics::PropPointers),
	sizeof(FDialogueProgress),
	alignof(FDialogueProgress),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueProgress_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueProgress_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogueProgress()
{
	if (!Z_Registration_Info_UScriptStruct_FDialogueProgress.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDialogueProgress.InnerSingleton, Z_Construct_UScriptStruct_FDialogueProgress_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDialogueProgress.InnerSingleton);
}
// ********** End ScriptStruct FDialogueProgress ***************************************************

// ********** Begin Class UDialogueComponentBase Function AddDialogue ******************************
struct Z_Construct_UFunction_UDialogueComponentBase_AddDialogue_Statics
{
	struct DialogueComponentBase_eventAddDialogue_Parms
	{
		FText Speaker;
		FText Dialogue;
		TArray<FText> Options;
		TSoftObjectPtr<USoundBase> Audio;
		int32 Option;
		EDialogueAddType Type;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adds a dialogue entry */" },
#endif
		{ "ModuleRelativePath", "Public/DialogueComponentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a dialogue entry" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddDialogue constinit property declarations ***************************
	static const UECodeGen_Private::FTextPropertyParams NewProp_Speaker;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Options_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Audio;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Option;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddDialogue constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddDialogue Property Definitions **************************************
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDialogueComponentBase_AddDialogue_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponentBase_eventAddDialogue_Parms, Speaker), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDialogueComponentBase_AddDialogue_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponentBase_eventAddDialogue_Parms, Dialogue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDialogueComponentBase_AddDialogue_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueComponentBase_AddDialogue_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponentBase_eventAddDialogue_Parms, Options), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UDialogueComponentBase_AddDialogue_Statics::NewProp_Audio = { "Audio", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponentBase_eventAddDialogue_Parms, Audio), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueComponentBase_AddDialogue_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponentBase_eventAddDialogue_Parms, Option), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDialogueComponentBase_AddDialogue_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDialogueComponentBase_AddDialogue_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponentBase_eventAddDialogue_Parms, Type), Z_Construct_UEnum_ToolkitNarratives_EDialogueAddType, METADATA_PARAMS(0, nullptr) }; // 3832309978
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponentBase_AddDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponentBase_AddDialogue_Statics::NewProp_Speaker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponentBase_AddDialogue_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponentBase_AddDialogue_Statics::NewProp_Options_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponentBase_AddDialogue_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponentBase_AddDialogue_Statics::NewProp_Audio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponentBase_AddDialogue_Statics::NewProp_Option,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponentBase_AddDialogue_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponentBase_AddDialogue_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_AddDialogue_Statics::PropPointers) < 2048);
// ********** End Function AddDialogue Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponentBase_AddDialogue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogueComponentBase, nullptr, "AddDialogue", 	Z_Construct_UFunction_UDialogueComponentBase_AddDialogue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_AddDialogue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDialogueComponentBase_AddDialogue_Statics::DialogueComponentBase_eventAddDialogue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_AddDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponentBase_AddDialogue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDialogueComponentBase_AddDialogue_Statics::DialogueComponentBase_eventAddDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueComponentBase_AddDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponentBase_AddDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueComponentBase::execAddDialogue)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_Speaker);
	P_GET_PROPERTY(FTextProperty,Z_Param_Dialogue);
	P_GET_TARRAY(FText,Z_Param_Options);
	P_GET_SOFTOBJECT(TSoftObjectPtr<USoundBase>,Z_Param_Audio);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Option);
	P_GET_ENUM_REF(EDialogueAddType,Z_Param_Out_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddDialogue(Z_Param_Speaker,Z_Param_Dialogue,Z_Param_Options,Z_Param_Audio,Z_Param_Out_Option,(EDialogueAddType&)(Z_Param_Out_Type));
	P_NATIVE_END;
}
// ********** End Class UDialogueComponentBase Function AddDialogue ********************************

// ********** Begin Class UDialogueComponentBase Function CallParentClearDialogueProgress **********
struct Z_Construct_UFunction_UDialogueComponentBase_CallParentClearDialogueProgress_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "ModuleRelativePath", "Public/DialogueComponentBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CallParentClearDialogueProgress constinit property declarations *******
// ********** End Function CallParentClearDialogueProgress constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponentBase_CallParentClearDialogueProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogueComponentBase, nullptr, "CallParentClearDialogueProgress", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_CallParentClearDialogueProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponentBase_CallParentClearDialogueProgress_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDialogueComponentBase_CallParentClearDialogueProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponentBase_CallParentClearDialogueProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueComponentBase::execCallParentClearDialogueProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallParentClearDialogueProgress();
	P_NATIVE_END;
}
// ********** End Class UDialogueComponentBase Function CallParentClearDialogueProgress ************

// ********** Begin Class UDialogueComponentBase Function CallParentCloseConversation **************
struct Z_Construct_UFunction_UDialogueComponentBase_CallParentCloseConversation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "ModuleRelativePath", "Public/DialogueComponentBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CallParentCloseConversation constinit property declarations ***********
// ********** End Function CallParentCloseConversation constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponentBase_CallParentCloseConversation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogueComponentBase, nullptr, "CallParentCloseConversation", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_CallParentCloseConversation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponentBase_CallParentCloseConversation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDialogueComponentBase_CallParentCloseConversation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponentBase_CallParentCloseConversation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueComponentBase::execCallParentCloseConversation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallParentCloseConversation();
	P_NATIVE_END;
}
// ********** End Class UDialogueComponentBase Function CallParentCloseConversation ****************

// ********** Begin Class UDialogueComponentBase Function CallParentOpenConversation ***************
struct Z_Construct_UFunction_UDialogueComponentBase_CallParentOpenConversation_Statics
{
	struct DialogueComponentBase_eventCallParentOpenConversation_Parms
	{
		UDialogueWidgetBase* InWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "ModuleRelativePath", "Public/DialogueComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function CallParentOpenConversation constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CallParentOpenConversation constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CallParentOpenConversation Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueComponentBase_CallParentOpenConversation_Statics::NewProp_InWidget = { "InWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponentBase_eventCallParentOpenConversation_Parms, InWidget), Z_Construct_UClass_UDialogueWidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InWidget_MetaData), NewProp_InWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponentBase_CallParentOpenConversation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponentBase_CallParentOpenConversation_Statics::NewProp_InWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_CallParentOpenConversation_Statics::PropPointers) < 2048);
// ********** End Function CallParentOpenConversation Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponentBase_CallParentOpenConversation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogueComponentBase, nullptr, "CallParentOpenConversation", 	Z_Construct_UFunction_UDialogueComponentBase_CallParentOpenConversation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_CallParentOpenConversation_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDialogueComponentBase_CallParentOpenConversation_Statics::DialogueComponentBase_eventCallParentOpenConversation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_CallParentOpenConversation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponentBase_CallParentOpenConversation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDialogueComponentBase_CallParentOpenConversation_Statics::DialogueComponentBase_eventCallParentOpenConversation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueComponentBase_CallParentOpenConversation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponentBase_CallParentOpenConversation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueComponentBase::execCallParentOpenConversation)
{
	P_GET_OBJECT(UDialogueWidgetBase,Z_Param_InWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallParentOpenConversation(Z_Param_InWidget);
	P_NATIVE_END;
}
// ********** End Class UDialogueComponentBase Function CallParentOpenConversation *****************

// ********** Begin Class UDialogueComponentBase Function CallParentProgressDialogue ***************
struct Z_Construct_UFunction_UDialogueComponentBase_CallParentProgressDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "ModuleRelativePath", "Public/DialogueComponentBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CallParentProgressDialogue constinit property declarations ************
// ********** End Function CallParentProgressDialogue constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponentBase_CallParentProgressDialogue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogueComponentBase, nullptr, "CallParentProgressDialogue", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_CallParentProgressDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponentBase_CallParentProgressDialogue_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDialogueComponentBase_CallParentProgressDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponentBase_CallParentProgressDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueComponentBase::execCallParentProgressDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallParentProgressDialogue();
	P_NATIVE_END;
}
// ********** End Class UDialogueComponentBase Function CallParentProgressDialogue *****************

// ********** Begin Class UDialogueComponentBase Function CallParentRemoveDialogueProgress *********
struct Z_Construct_UFunction_UDialogueComponentBase_CallParentRemoveDialogueProgress_Statics
{
	struct DialogueComponentBase_eventCallParentRemoveDialogueProgress_Parms
	{
		int32 Steps;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "ModuleRelativePath", "Public/DialogueComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Steps_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CallParentRemoveDialogueProgress constinit property declarations ******
	static const UECodeGen_Private::FIntPropertyParams NewProp_Steps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CallParentRemoveDialogueProgress constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CallParentRemoveDialogueProgress Property Definitions *****************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueComponentBase_CallParentRemoveDialogueProgress_Statics::NewProp_Steps = { "Steps", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponentBase_eventCallParentRemoveDialogueProgress_Parms, Steps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Steps_MetaData), NewProp_Steps_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponentBase_CallParentRemoveDialogueProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponentBase_CallParentRemoveDialogueProgress_Statics::NewProp_Steps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_CallParentRemoveDialogueProgress_Statics::PropPointers) < 2048);
// ********** End Function CallParentRemoveDialogueProgress Property Definitions *******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponentBase_CallParentRemoveDialogueProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogueComponentBase, nullptr, "CallParentRemoveDialogueProgress", 	Z_Construct_UFunction_UDialogueComponentBase_CallParentRemoveDialogueProgress_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_CallParentRemoveDialogueProgress_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDialogueComponentBase_CallParentRemoveDialogueProgress_Statics::DialogueComponentBase_eventCallParentRemoveDialogueProgress_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_CallParentRemoveDialogueProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponentBase_CallParentRemoveDialogueProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDialogueComponentBase_CallParentRemoveDialogueProgress_Statics::DialogueComponentBase_eventCallParentRemoveDialogueProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueComponentBase_CallParentRemoveDialogueProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponentBase_CallParentRemoveDialogueProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueComponentBase::execCallParentRemoveDialogueProgress)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Steps);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallParentRemoveDialogueProgress(Z_Param_Steps);
	P_NATIVE_END;
}
// ********** End Class UDialogueComponentBase Function CallParentRemoveDialogueProgress ***********

// ********** Begin Class UDialogueComponentBase Function CallParentSetDialogueBranch **************
struct Z_Construct_UFunction_UDialogueComponentBase_CallParentSetDialogueBranch_Statics
{
	struct DialogueComponentBase_eventCallParentSetDialogueBranch_Parms
	{
		FName DialogueBranch;
		EProgressStoreType StoreType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "ModuleRelativePath", "Public/DialogueComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueBranch_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoreType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CallParentSetDialogueBranch constinit property declarations ***********
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogueBranch;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StoreType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StoreType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CallParentSetDialogueBranch constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CallParentSetDialogueBranch Property Definitions **********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueComponentBase_CallParentSetDialogueBranch_Statics::NewProp_DialogueBranch = { "DialogueBranch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponentBase_eventCallParentSetDialogueBranch_Parms, DialogueBranch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueBranch_MetaData), NewProp_DialogueBranch_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDialogueComponentBase_CallParentSetDialogueBranch_Statics::NewProp_StoreType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDialogueComponentBase_CallParentSetDialogueBranch_Statics::NewProp_StoreType = { "StoreType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponentBase_eventCallParentSetDialogueBranch_Parms, StoreType), Z_Construct_UEnum_ToolkitNarratives_EProgressStoreType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoreType_MetaData), NewProp_StoreType_MetaData) }; // 928982178
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponentBase_CallParentSetDialogueBranch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponentBase_CallParentSetDialogueBranch_Statics::NewProp_DialogueBranch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponentBase_CallParentSetDialogueBranch_Statics::NewProp_StoreType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponentBase_CallParentSetDialogueBranch_Statics::NewProp_StoreType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_CallParentSetDialogueBranch_Statics::PropPointers) < 2048);
// ********** End Function CallParentSetDialogueBranch Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponentBase_CallParentSetDialogueBranch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogueComponentBase, nullptr, "CallParentSetDialogueBranch", 	Z_Construct_UFunction_UDialogueComponentBase_CallParentSetDialogueBranch_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_CallParentSetDialogueBranch_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDialogueComponentBase_CallParentSetDialogueBranch_Statics::DialogueComponentBase_eventCallParentSetDialogueBranch_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_CallParentSetDialogueBranch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponentBase_CallParentSetDialogueBranch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDialogueComponentBase_CallParentSetDialogueBranch_Statics::DialogueComponentBase_eventCallParentSetDialogueBranch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueComponentBase_CallParentSetDialogueBranch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponentBase_CallParentSetDialogueBranch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueComponentBase::execCallParentSetDialogueBranch)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogueBranch);
	P_GET_ENUM(EProgressStoreType,Z_Param_StoreType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallParentSetDialogueBranch(Z_Param_DialogueBranch,EProgressStoreType(Z_Param_StoreType));
	P_NATIVE_END;
}
// ********** End Class UDialogueComponentBase Function CallParentSetDialogueBranch ****************

// ********** Begin Class UDialogueComponentBase Function CallParentUpdateSelectedOption ***********
struct Z_Construct_UFunction_UDialogueComponentBase_CallParentUpdateSelectedOption_Statics
{
	struct DialogueComponentBase_eventCallParentUpdateSelectedOption_Parms
	{
		int32 ProgressIndex;
		int32 OptionIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "ModuleRelativePath", "Public/DialogueComponentBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CallParentUpdateSelectedOption constinit property declarations ********
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProgressIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CallParentUpdateSelectedOption constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CallParentUpdateSelectedOption Property Definitions *******************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueComponentBase_CallParentUpdateSelectedOption_Statics::NewProp_ProgressIndex = { "ProgressIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponentBase_eventCallParentUpdateSelectedOption_Parms, ProgressIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueComponentBase_CallParentUpdateSelectedOption_Statics::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponentBase_eventCallParentUpdateSelectedOption_Parms, OptionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponentBase_CallParentUpdateSelectedOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponentBase_CallParentUpdateSelectedOption_Statics::NewProp_ProgressIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponentBase_CallParentUpdateSelectedOption_Statics::NewProp_OptionIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_CallParentUpdateSelectedOption_Statics::PropPointers) < 2048);
// ********** End Function CallParentUpdateSelectedOption Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponentBase_CallParentUpdateSelectedOption_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogueComponentBase, nullptr, "CallParentUpdateSelectedOption", 	Z_Construct_UFunction_UDialogueComponentBase_CallParentUpdateSelectedOption_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_CallParentUpdateSelectedOption_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDialogueComponentBase_CallParentUpdateSelectedOption_Statics::DialogueComponentBase_eventCallParentUpdateSelectedOption_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_CallParentUpdateSelectedOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponentBase_CallParentUpdateSelectedOption_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDialogueComponentBase_CallParentUpdateSelectedOption_Statics::DialogueComponentBase_eventCallParentUpdateSelectedOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueComponentBase_CallParentUpdateSelectedOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponentBase_CallParentUpdateSelectedOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueComponentBase::execCallParentUpdateSelectedOption)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ProgressIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_OptionIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallParentUpdateSelectedOption(Z_Param_ProgressIndex,Z_Param_OptionIndex);
	P_NATIVE_END;
}
// ********** End Class UDialogueComponentBase Function CallParentUpdateSelectedOption *************

// ********** Begin Class UDialogueComponentBase Function ClearDialogueProgress ********************
static FName NAME_UDialogueComponentBase_ClearDialogueProgress = FName(TEXT("ClearDialogueProgress"));
void UDialogueComponentBase::ClearDialogueProgress()
{
	UFunction* Func = FindFunctionChecked(NAME_UDialogueComponentBase_ClearDialogueProgress);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		ClearDialogueProgress_Implementation();
	}
}
struct Z_Construct_UFunction_UDialogueComponentBase_ClearDialogueProgress_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clears dialogue progress */" },
#endif
		{ "ModuleRelativePath", "Public/DialogueComponentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears dialogue progress" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ClearDialogueProgress constinit property declarations *****************
// ********** End Function ClearDialogueProgress constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponentBase_ClearDialogueProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogueComponentBase, nullptr, "ClearDialogueProgress", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_ClearDialogueProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponentBase_ClearDialogueProgress_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDialogueComponentBase_ClearDialogueProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponentBase_ClearDialogueProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueComponentBase::execClearDialogueProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearDialogueProgress_Implementation();
	P_NATIVE_END;
}
// ********** End Class UDialogueComponentBase Function ClearDialogueProgress **********************

// ********** Begin Class UDialogueComponentBase Function CloseConversation ************************
static FName NAME_UDialogueComponentBase_CloseConversation = FName(TEXT("CloseConversation"));
void UDialogueComponentBase::CloseConversation()
{
	UFunction* Func = FindFunctionChecked(NAME_UDialogueComponentBase_CloseConversation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		CloseConversation_Implementation();
	}
}
struct Z_Construct_UFunction_UDialogueComponentBase_CloseConversation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Closes a conversation */" },
#endif
		{ "ModuleRelativePath", "Public/DialogueComponentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Closes a conversation" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function CloseConversation constinit property declarations *********************
// ********** End Function CloseConversation constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponentBase_CloseConversation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogueComponentBase, nullptr, "CloseConversation", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_CloseConversation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponentBase_CloseConversation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDialogueComponentBase_CloseConversation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponentBase_CloseConversation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueComponentBase::execCloseConversation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseConversation_Implementation();
	P_NATIVE_END;
}
// ********** End Class UDialogueComponentBase Function CloseConversation **************************

// ********** Begin Class UDialogueComponentBase Function Dialogue *********************************
static FName NAME_UDialogueComponentBase_Dialogue = FName(TEXT("Dialogue"));
void UDialogueComponentBase::Dialogue()
{
	UFunction* Func = FindFunctionChecked(NAME_UDialogueComponentBase_Dialogue);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		Dialogue_Implementation();
	}
}
struct Z_Construct_UFunction_UDialogueComponentBase_Dialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pure virtual function for dialogue processing */" },
#endif
		{ "ModuleRelativePath", "Public/DialogueComponentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pure virtual function for dialogue processing" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Dialogue constinit property declarations ******************************
// ********** End Function Dialogue constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponentBase_Dialogue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogueComponentBase, nullptr, "Dialogue", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_Dialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponentBase_Dialogue_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDialogueComponentBase_Dialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponentBase_Dialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueComponentBase::execDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Dialogue_Implementation();
	P_NATIVE_END;
}
// ********** End Class UDialogueComponentBase Function Dialogue ***********************************

// ********** Begin Class UDialogueComponentBase Function OnAudioLoaded ****************************
struct Z_Construct_UFunction_UDialogueComponentBase_OnAudioLoaded_Statics
{
	struct DialogueComponentBase_eventOnAudioLoaded_Parms
	{
		TSoftObjectPtr<USoundBase> LoadedAudio;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedAudio_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnAudioLoaded constinit property declarations *************************
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LoadedAudio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnAudioLoaded constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnAudioLoaded Property Definitions ************************************
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UDialogueComponentBase_OnAudioLoaded_Statics::NewProp_LoadedAudio = { "LoadedAudio", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponentBase_eventOnAudioLoaded_Parms, LoadedAudio), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedAudio_MetaData), NewProp_LoadedAudio_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponentBase_OnAudioLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponentBase_OnAudioLoaded_Statics::NewProp_LoadedAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_OnAudioLoaded_Statics::PropPointers) < 2048);
// ********** End Function OnAudioLoaded Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponentBase_OnAudioLoaded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogueComponentBase, nullptr, "OnAudioLoaded", 	Z_Construct_UFunction_UDialogueComponentBase_OnAudioLoaded_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_OnAudioLoaded_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDialogueComponentBase_OnAudioLoaded_Statics::DialogueComponentBase_eventOnAudioLoaded_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_OnAudioLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponentBase_OnAudioLoaded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDialogueComponentBase_OnAudioLoaded_Statics::DialogueComponentBase_eventOnAudioLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueComponentBase_OnAudioLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponentBase_OnAudioLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueComponentBase::execOnAudioLoaded)
{
	P_GET_SOFTOBJECT(TSoftObjectPtr<USoundBase>,Z_Param_LoadedAudio);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAudioLoaded(Z_Param_LoadedAudio);
	P_NATIVE_END;
}
// ********** End Class UDialogueComponentBase Function OnAudioLoaded ******************************

// ********** Begin Class UDialogueComponentBase Function OpenConversation *************************
struct DialogueComponentBase_eventOpenConversation_Parms
{
	UDialogueWidgetBase* InWidget;
};
static FName NAME_UDialogueComponentBase_OpenConversation = FName(TEXT("OpenConversation"));
void UDialogueComponentBase::OpenConversation(UDialogueWidgetBase* InWidget)
{
	UFunction* Func = FindFunctionChecked(NAME_UDialogueComponentBase_OpenConversation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		DialogueComponentBase_eventOpenConversation_Parms Parms;
		Parms.InWidget=InWidget;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OpenConversation_Implementation(InWidget);
	}
}
struct Z_Construct_UFunction_UDialogueComponentBase_OpenConversation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Opens a conversation */" },
#endif
		{ "ModuleRelativePath", "Public/DialogueComponentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Opens a conversation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OpenConversation constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OpenConversation constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OpenConversation Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueComponentBase_OpenConversation_Statics::NewProp_InWidget = { "InWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponentBase_eventOpenConversation_Parms, InWidget), Z_Construct_UClass_UDialogueWidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InWidget_MetaData), NewProp_InWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponentBase_OpenConversation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponentBase_OpenConversation_Statics::NewProp_InWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_OpenConversation_Statics::PropPointers) < 2048);
// ********** End Function OpenConversation Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponentBase_OpenConversation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogueComponentBase, nullptr, "OpenConversation", 	Z_Construct_UFunction_UDialogueComponentBase_OpenConversation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_OpenConversation_Statics::PropPointers), 
sizeof(DialogueComponentBase_eventOpenConversation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_OpenConversation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponentBase_OpenConversation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(DialogueComponentBase_eventOpenConversation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueComponentBase_OpenConversation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponentBase_OpenConversation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueComponentBase::execOpenConversation)
{
	P_GET_OBJECT(UDialogueWidgetBase,Z_Param_InWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenConversation_Implementation(Z_Param_InWidget);
	P_NATIVE_END;
}
// ********** End Class UDialogueComponentBase Function OpenConversation ***************************

// ********** Begin Class UDialogueComponentBase Function OpenConversationOnBranch *****************
struct DialogueComponentBase_eventOpenConversationOnBranch_Parms
{
	UDialogueWidgetBase* InWidget;
	FName DialogueBranch;
	EProgressStoreType StoreType;
	bool ClearProgressBeforeOpen;
};
static FName NAME_UDialogueComponentBase_OpenConversationOnBranch = FName(TEXT("OpenConversationOnBranch"));
void UDialogueComponentBase::OpenConversationOnBranch(UDialogueWidgetBase* InWidget, FName DialogueBranch, EProgressStoreType StoreType, bool ClearProgressBeforeOpen)
{
	UFunction* Func = FindFunctionChecked(NAME_UDialogueComponentBase_OpenConversationOnBranch);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		DialogueComponentBase_eventOpenConversationOnBranch_Parms Parms;
		Parms.InWidget=InWidget;
		Parms.DialogueBranch=DialogueBranch;
		Parms.StoreType=StoreType;
		Parms.ClearProgressBeforeOpen=ClearProgressBeforeOpen ? true : false;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OpenConversationOnBranch_Implementation(InWidget, DialogueBranch, StoreType, ClearProgressBeforeOpen);
	}
}
struct Z_Construct_UFunction_UDialogueComponentBase_OpenConversationOnBranch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Changes Branch and then opens a conversation **/" },
#endif
		{ "ModuleRelativePath", "Public/DialogueComponentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changes Branch and then opens a conversation *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OpenConversationOnBranch constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWidget;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogueBranch;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StoreType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StoreType;
	static void NewProp_ClearProgressBeforeOpen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ClearProgressBeforeOpen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OpenConversationOnBranch constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OpenConversationOnBranch Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueComponentBase_OpenConversationOnBranch_Statics::NewProp_InWidget = { "InWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponentBase_eventOpenConversationOnBranch_Parms, InWidget), Z_Construct_UClass_UDialogueWidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InWidget_MetaData), NewProp_InWidget_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueComponentBase_OpenConversationOnBranch_Statics::NewProp_DialogueBranch = { "DialogueBranch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponentBase_eventOpenConversationOnBranch_Parms, DialogueBranch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDialogueComponentBase_OpenConversationOnBranch_Statics::NewProp_StoreType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDialogueComponentBase_OpenConversationOnBranch_Statics::NewProp_StoreType = { "StoreType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponentBase_eventOpenConversationOnBranch_Parms, StoreType), Z_Construct_UEnum_ToolkitNarratives_EProgressStoreType, METADATA_PARAMS(0, nullptr) }; // 928982178
void Z_Construct_UFunction_UDialogueComponentBase_OpenConversationOnBranch_Statics::NewProp_ClearProgressBeforeOpen_SetBit(void* Obj)
{
	((DialogueComponentBase_eventOpenConversationOnBranch_Parms*)Obj)->ClearProgressBeforeOpen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueComponentBase_OpenConversationOnBranch_Statics::NewProp_ClearProgressBeforeOpen = { "ClearProgressBeforeOpen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogueComponentBase_eventOpenConversationOnBranch_Parms), &Z_Construct_UFunction_UDialogueComponentBase_OpenConversationOnBranch_Statics::NewProp_ClearProgressBeforeOpen_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponentBase_OpenConversationOnBranch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponentBase_OpenConversationOnBranch_Statics::NewProp_InWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponentBase_OpenConversationOnBranch_Statics::NewProp_DialogueBranch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponentBase_OpenConversationOnBranch_Statics::NewProp_StoreType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponentBase_OpenConversationOnBranch_Statics::NewProp_StoreType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponentBase_OpenConversationOnBranch_Statics::NewProp_ClearProgressBeforeOpen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_OpenConversationOnBranch_Statics::PropPointers) < 2048);
// ********** End Function OpenConversationOnBranch Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponentBase_OpenConversationOnBranch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogueComponentBase, nullptr, "OpenConversationOnBranch", 	Z_Construct_UFunction_UDialogueComponentBase_OpenConversationOnBranch_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_OpenConversationOnBranch_Statics::PropPointers), 
sizeof(DialogueComponentBase_eventOpenConversationOnBranch_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_OpenConversationOnBranch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponentBase_OpenConversationOnBranch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(DialogueComponentBase_eventOpenConversationOnBranch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueComponentBase_OpenConversationOnBranch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponentBase_OpenConversationOnBranch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueComponentBase::execOpenConversationOnBranch)
{
	P_GET_OBJECT(UDialogueWidgetBase,Z_Param_InWidget);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogueBranch);
	P_GET_ENUM(EProgressStoreType,Z_Param_StoreType);
	P_GET_UBOOL(Z_Param_ClearProgressBeforeOpen);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenConversationOnBranch_Implementation(Z_Param_InWidget,Z_Param_DialogueBranch,EProgressStoreType(Z_Param_StoreType),Z_Param_ClearProgressBeforeOpen);
	P_NATIVE_END;
}
// ********** End Class UDialogueComponentBase Function OpenConversationOnBranch *******************

// ********** Begin Class UDialogueComponentBase Function ProgressDialogue *************************
static FName NAME_UDialogueComponentBase_ProgressDialogue = FName(TEXT("ProgressDialogue"));
void UDialogueComponentBase::ProgressDialogue()
{
	UFunction* Func = FindFunctionChecked(NAME_UDialogueComponentBase_ProgressDialogue);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		ProgressDialogue_Implementation();
	}
}
struct Z_Construct_UFunction_UDialogueComponentBase_ProgressDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Progresses the dialogue */" },
#endif
		{ "ModuleRelativePath", "Public/DialogueComponentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Progresses the dialogue" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ProgressDialogue constinit property declarations **********************
// ********** End Function ProgressDialogue constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponentBase_ProgressDialogue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogueComponentBase, nullptr, "ProgressDialogue", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_ProgressDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponentBase_ProgressDialogue_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDialogueComponentBase_ProgressDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponentBase_ProgressDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueComponentBase::execProgressDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProgressDialogue_Implementation();
	P_NATIVE_END;
}
// ********** End Class UDialogueComponentBase Function ProgressDialogue ***************************

// ********** Begin Class UDialogueComponentBase Function RemoveDialogueProgress *******************
struct DialogueComponentBase_eventRemoveDialogueProgress_Parms
{
	int32 Steps;
};
static FName NAME_UDialogueComponentBase_RemoveDialogueProgress = FName(TEXT("RemoveDialogueProgress"));
void UDialogueComponentBase::RemoveDialogueProgress(const int32 Steps)
{
	UFunction* Func = FindFunctionChecked(NAME_UDialogueComponentBase_RemoveDialogueProgress);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		DialogueComponentBase_eventRemoveDialogueProgress_Parms Parms;
		Parms.Steps=Steps;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		RemoveDialogueProgress_Implementation(Steps);
	}
}
struct Z_Construct_UFunction_UDialogueComponentBase_RemoveDialogueProgress_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Removes dialogue progress by a number of steps */" },
#endif
		{ "ModuleRelativePath", "Public/DialogueComponentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes dialogue progress by a number of steps" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Steps_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveDialogueProgress constinit property declarations ****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Steps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveDialogueProgress constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveDialogueProgress Property Definitions ***************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueComponentBase_RemoveDialogueProgress_Statics::NewProp_Steps = { "Steps", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponentBase_eventRemoveDialogueProgress_Parms, Steps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Steps_MetaData), NewProp_Steps_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponentBase_RemoveDialogueProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponentBase_RemoveDialogueProgress_Statics::NewProp_Steps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_RemoveDialogueProgress_Statics::PropPointers) < 2048);
// ********** End Function RemoveDialogueProgress Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponentBase_RemoveDialogueProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogueComponentBase, nullptr, "RemoveDialogueProgress", 	Z_Construct_UFunction_UDialogueComponentBase_RemoveDialogueProgress_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_RemoveDialogueProgress_Statics::PropPointers), 
sizeof(DialogueComponentBase_eventRemoveDialogueProgress_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_RemoveDialogueProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponentBase_RemoveDialogueProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(DialogueComponentBase_eventRemoveDialogueProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueComponentBase_RemoveDialogueProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponentBase_RemoveDialogueProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueComponentBase::execRemoveDialogueProgress)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Steps);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveDialogueProgress_Implementation(Z_Param_Steps);
	P_NATIVE_END;
}
// ********** End Class UDialogueComponentBase Function RemoveDialogueProgress *********************

// ********** Begin Class UDialogueComponentBase Function SetDialogueBranch ************************
struct DialogueComponentBase_eventSetDialogueBranch_Parms
{
	FName DialogueBranch;
	EProgressStoreType StoreType;
};
static FName NAME_UDialogueComponentBase_SetDialogueBranch = FName(TEXT("SetDialogueBranch"));
void UDialogueComponentBase::SetDialogueBranch(const FName DialogueBranch, const EProgressStoreType StoreType)
{
	UFunction* Func = FindFunctionChecked(NAME_UDialogueComponentBase_SetDialogueBranch);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		DialogueComponentBase_eventSetDialogueBranch_Parms Parms;
		Parms.DialogueBranch=DialogueBranch;
		Parms.StoreType=StoreType;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		SetDialogueBranch_Implementation(DialogueBranch, StoreType);
	}
}
struct Z_Construct_UFunction_UDialogueComponentBase_SetDialogueBranch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets a dialogue branch */" },
#endif
		{ "ModuleRelativePath", "Public/DialogueComponentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets a dialogue branch" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueBranch_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoreType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDialogueBranch constinit property declarations *********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogueBranch;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StoreType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StoreType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDialogueBranch constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDialogueBranch Property Definitions ********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueComponentBase_SetDialogueBranch_Statics::NewProp_DialogueBranch = { "DialogueBranch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponentBase_eventSetDialogueBranch_Parms, DialogueBranch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueBranch_MetaData), NewProp_DialogueBranch_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDialogueComponentBase_SetDialogueBranch_Statics::NewProp_StoreType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDialogueComponentBase_SetDialogueBranch_Statics::NewProp_StoreType = { "StoreType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponentBase_eventSetDialogueBranch_Parms, StoreType), Z_Construct_UEnum_ToolkitNarratives_EProgressStoreType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoreType_MetaData), NewProp_StoreType_MetaData) }; // 928982178
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponentBase_SetDialogueBranch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponentBase_SetDialogueBranch_Statics::NewProp_DialogueBranch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponentBase_SetDialogueBranch_Statics::NewProp_StoreType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponentBase_SetDialogueBranch_Statics::NewProp_StoreType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_SetDialogueBranch_Statics::PropPointers) < 2048);
// ********** End Function SetDialogueBranch Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponentBase_SetDialogueBranch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogueComponentBase, nullptr, "SetDialogueBranch", 	Z_Construct_UFunction_UDialogueComponentBase_SetDialogueBranch_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_SetDialogueBranch_Statics::PropPointers), 
sizeof(DialogueComponentBase_eventSetDialogueBranch_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_SetDialogueBranch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponentBase_SetDialogueBranch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(DialogueComponentBase_eventSetDialogueBranch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueComponentBase_SetDialogueBranch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponentBase_SetDialogueBranch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueComponentBase::execSetDialogueBranch)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogueBranch);
	P_GET_ENUM(EProgressStoreType,Z_Param_StoreType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDialogueBranch_Implementation(Z_Param_DialogueBranch,EProgressStoreType(Z_Param_StoreType));
	P_NATIVE_END;
}
// ********** End Class UDialogueComponentBase Function SetDialogueBranch **************************

// ********** Begin Class UDialogueComponentBase Function UpdateSelectedOption *********************
struct DialogueComponentBase_eventUpdateSelectedOption_Parms
{
	int32 ProgressIndex;
	int32 OptionIndex;
};
static FName NAME_UDialogueComponentBase_UpdateSelectedOption = FName(TEXT("UpdateSelectedOption"));
void UDialogueComponentBase::UpdateSelectedOption(int32 ProgressIndex, int32 OptionIndex)
{
	UFunction* Func = FindFunctionChecked(NAME_UDialogueComponentBase_UpdateSelectedOption);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		DialogueComponentBase_eventUpdateSelectedOption_Parms Parms;
		Parms.ProgressIndex=ProgressIndex;
		Parms.OptionIndex=OptionIndex;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		UpdateSelectedOption_Implementation(ProgressIndex, OptionIndex);
	}
}
struct Z_Construct_UFunction_UDialogueComponentBase_UpdateSelectedOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Updates the selected option */" },
#endif
		{ "ModuleRelativePath", "Public/DialogueComponentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates the selected option" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateSelectedOption constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProgressIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateSelectedOption constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateSelectedOption Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueComponentBase_UpdateSelectedOption_Statics::NewProp_ProgressIndex = { "ProgressIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponentBase_eventUpdateSelectedOption_Parms, ProgressIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueComponentBase_UpdateSelectedOption_Statics::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponentBase_eventUpdateSelectedOption_Parms, OptionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponentBase_UpdateSelectedOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponentBase_UpdateSelectedOption_Statics::NewProp_ProgressIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponentBase_UpdateSelectedOption_Statics::NewProp_OptionIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_UpdateSelectedOption_Statics::PropPointers) < 2048);
// ********** End Function UpdateSelectedOption Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponentBase_UpdateSelectedOption_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogueComponentBase, nullptr, "UpdateSelectedOption", 	Z_Construct_UFunction_UDialogueComponentBase_UpdateSelectedOption_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_UpdateSelectedOption_Statics::PropPointers), 
sizeof(DialogueComponentBase_eventUpdateSelectedOption_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponentBase_UpdateSelectedOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponentBase_UpdateSelectedOption_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(DialogueComponentBase_eventUpdateSelectedOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueComponentBase_UpdateSelectedOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponentBase_UpdateSelectedOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueComponentBase::execUpdateSelectedOption)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ProgressIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_OptionIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateSelectedOption_Implementation(Z_Param_ProgressIndex,Z_Param_OptionIndex);
	P_NATIVE_END;
}
// ********** End Class UDialogueComponentBase Function UpdateSelectedOption ***********************

// ********** Begin Class UDialogueComponentBase ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UDialogueComponentBase;
UClass* UDialogueComponentBase::GetPrivateStaticClass()
{
	using TClass = UDialogueComponentBase;
	if (!Z_Registration_Info_UClass_UDialogueComponentBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("DialogueComponentBase"),
			Z_Registration_Info_UClass_UDialogueComponentBase.InnerSingleton,
			StaticRegisterNativesUDialogueComponentBase,
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
	return Z_Registration_Info_UClass_UDialogueComponentBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UDialogueComponentBase_NoRegister()
{
	return UDialogueComponentBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDialogueComponentBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DialogueComponentBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DialogueComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAudio_MetaData[] = {
		{ "Category", "Dialogues" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should Use Audio? **/" },
#endif
		{ "ModuleRelativePath", "Public/DialogueComponentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should Use Audio? *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[] = {
		{ "Category", "Dialogues" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogueComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveWidget_MetaData[] = {
		{ "Category", "Dialogues" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to the Dialogue Widget */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogueComponentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the Dialogue Widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveProgress_MetaData[] = {
		{ "Category", "Dialogues" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Active dialogue progress mapping (Key: Progress Index, Value: Option Index) */" },
#endif
		{ "ModuleRelativePath", "Public/DialogueComponentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Active dialogue progress mapping (Key: Progress Index, Value: Option Index)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveIndex_MetaData[] = {
		{ "Category", "Dialogues" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current active dialogue index */" },
#endif
		{ "ModuleRelativePath", "Public/DialogueComponentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current active dialogue index" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveBranch_MetaData[] = {
		{ "Category", "Dialogues" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current active dialogue branch */" },
#endif
		{ "ModuleRelativePath", "Public/DialogueComponentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current active dialogue branch" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BranchProgress_MetaData[] = {
		{ "Category", "Dialogues" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Map storing progress for different dialogue branches */" },
#endif
		{ "ModuleRelativePath", "Public/DialogueComponentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map storing progress for different dialogue branches" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UDialogueComponentBase constinit property declarations *******************
	static void NewProp_bUseAudio_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAudio;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveWidget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveProgress_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveProgress_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ActiveProgress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActiveBranch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BranchProgress_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BranchProgress_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BranchProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDialogueComponentBase constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddDialogue"), .Pointer = &UDialogueComponentBase::execAddDialogue },
		{ .NameUTF8 = UTF8TEXT("CallParentClearDialogueProgress"), .Pointer = &UDialogueComponentBase::execCallParentClearDialogueProgress },
		{ .NameUTF8 = UTF8TEXT("CallParentCloseConversation"), .Pointer = &UDialogueComponentBase::execCallParentCloseConversation },
		{ .NameUTF8 = UTF8TEXT("CallParentOpenConversation"), .Pointer = &UDialogueComponentBase::execCallParentOpenConversation },
		{ .NameUTF8 = UTF8TEXT("CallParentProgressDialogue"), .Pointer = &UDialogueComponentBase::execCallParentProgressDialogue },
		{ .NameUTF8 = UTF8TEXT("CallParentRemoveDialogueProgress"), .Pointer = &UDialogueComponentBase::execCallParentRemoveDialogueProgress },
		{ .NameUTF8 = UTF8TEXT("CallParentSetDialogueBranch"), .Pointer = &UDialogueComponentBase::execCallParentSetDialogueBranch },
		{ .NameUTF8 = UTF8TEXT("CallParentUpdateSelectedOption"), .Pointer = &UDialogueComponentBase::execCallParentUpdateSelectedOption },
		{ .NameUTF8 = UTF8TEXT("ClearDialogueProgress"), .Pointer = &UDialogueComponentBase::execClearDialogueProgress },
		{ .NameUTF8 = UTF8TEXT("CloseConversation"), .Pointer = &UDialogueComponentBase::execCloseConversation },
		{ .NameUTF8 = UTF8TEXT("Dialogue"), .Pointer = &UDialogueComponentBase::execDialogue },
		{ .NameUTF8 = UTF8TEXT("OnAudioLoaded"), .Pointer = &UDialogueComponentBase::execOnAudioLoaded },
		{ .NameUTF8 = UTF8TEXT("OpenConversation"), .Pointer = &UDialogueComponentBase::execOpenConversation },
		{ .NameUTF8 = UTF8TEXT("OpenConversationOnBranch"), .Pointer = &UDialogueComponentBase::execOpenConversationOnBranch },
		{ .NameUTF8 = UTF8TEXT("ProgressDialogue"), .Pointer = &UDialogueComponentBase::execProgressDialogue },
		{ .NameUTF8 = UTF8TEXT("RemoveDialogueProgress"), .Pointer = &UDialogueComponentBase::execRemoveDialogueProgress },
		{ .NameUTF8 = UTF8TEXT("SetDialogueBranch"), .Pointer = &UDialogueComponentBase::execSetDialogueBranch },
		{ .NameUTF8 = UTF8TEXT("UpdateSelectedOption"), .Pointer = &UDialogueComponentBase::execUpdateSelectedOption },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueComponentBase_AddDialogue, "AddDialogue" }, // 3439063855
		{ &Z_Construct_UFunction_UDialogueComponentBase_CallParentClearDialogueProgress, "CallParentClearDialogueProgress" }, // 1318754826
		{ &Z_Construct_UFunction_UDialogueComponentBase_CallParentCloseConversation, "CallParentCloseConversation" }, // 782420925
		{ &Z_Construct_UFunction_UDialogueComponentBase_CallParentOpenConversation, "CallParentOpenConversation" }, // 3966810336
		{ &Z_Construct_UFunction_UDialogueComponentBase_CallParentProgressDialogue, "CallParentProgressDialogue" }, // 876604463
		{ &Z_Construct_UFunction_UDialogueComponentBase_CallParentRemoveDialogueProgress, "CallParentRemoveDialogueProgress" }, // 1759484528
		{ &Z_Construct_UFunction_UDialogueComponentBase_CallParentSetDialogueBranch, "CallParentSetDialogueBranch" }, // 1288920052
		{ &Z_Construct_UFunction_UDialogueComponentBase_CallParentUpdateSelectedOption, "CallParentUpdateSelectedOption" }, // 1623701919
		{ &Z_Construct_UFunction_UDialogueComponentBase_ClearDialogueProgress, "ClearDialogueProgress" }, // 3908462414
		{ &Z_Construct_UFunction_UDialogueComponentBase_CloseConversation, "CloseConversation" }, // 2111246397
		{ &Z_Construct_UFunction_UDialogueComponentBase_Dialogue, "Dialogue" }, // 3282427296
		{ &Z_Construct_UFunction_UDialogueComponentBase_OnAudioLoaded, "OnAudioLoaded" }, // 3166631198
		{ &Z_Construct_UFunction_UDialogueComponentBase_OpenConversation, "OpenConversation" }, // 2283761252
		{ &Z_Construct_UFunction_UDialogueComponentBase_OpenConversationOnBranch, "OpenConversationOnBranch" }, // 3937760340
		{ &Z_Construct_UFunction_UDialogueComponentBase_ProgressDialogue, "ProgressDialogue" }, // 3422369463
		{ &Z_Construct_UFunction_UDialogueComponentBase_RemoveDialogueProgress, "RemoveDialogueProgress" }, // 3343780109
		{ &Z_Construct_UFunction_UDialogueComponentBase_SetDialogueBranch, "SetDialogueBranch" }, // 2549435011
		{ &Z_Construct_UFunction_UDialogueComponentBase_UpdateSelectedOption, "UpdateSelectedOption" }, // 1052280505
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueComponentBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UDialogueComponentBase_Statics

// ********** Begin Class UDialogueComponentBase Property Definitions ******************************
void Z_Construct_UClass_UDialogueComponentBase_Statics::NewProp_bUseAudio_SetBit(void* Obj)
{
	((UDialogueComponentBase*)Obj)->bUseAudio = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueComponentBase_Statics::NewProp_bUseAudio = { "bUseAudio", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogueComponentBase), &Z_Construct_UClass_UDialogueComponentBase_Statics::NewProp_bUseAudio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAudio_MetaData), NewProp_bUseAudio_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueComponentBase_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueComponentBase, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComponent_MetaData), NewProp_AudioComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueComponentBase_Statics::NewProp_ActiveWidget = { "ActiveWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueComponentBase, ActiveWidget), Z_Construct_UClass_UDialogueWidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveWidget_MetaData), NewProp_ActiveWidget_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDialogueComponentBase_Statics::NewProp_ActiveProgress_ValueProp = { "ActiveProgress", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDialogueComponentBase_Statics::NewProp_ActiveProgress_Key_KeyProp = { "ActiveProgress_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDialogueComponentBase_Statics::NewProp_ActiveProgress = { "ActiveProgress", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueComponentBase, ActiveProgress), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveProgress_MetaData), NewProp_ActiveProgress_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDialogueComponentBase_Statics::NewProp_ActiveIndex = { "ActiveIndex", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueComponentBase, ActiveIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveIndex_MetaData), NewProp_ActiveIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogueComponentBase_Statics::NewProp_ActiveBranch = { "ActiveBranch", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueComponentBase, ActiveBranch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveBranch_MetaData), NewProp_ActiveBranch_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueComponentBase_Statics::NewProp_BranchProgress_ValueProp = { "BranchProgress", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDialogueProgress, METADATA_PARAMS(0, nullptr) }; // 2874820052
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogueComponentBase_Statics::NewProp_BranchProgress_Key_KeyProp = { "BranchProgress_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDialogueComponentBase_Statics::NewProp_BranchProgress = { "BranchProgress", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueComponentBase, BranchProgress), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BranchProgress_MetaData), NewProp_BranchProgress_MetaData) }; // 2874820052
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueComponentBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponentBase_Statics::NewProp_bUseAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponentBase_Statics::NewProp_AudioComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponentBase_Statics::NewProp_ActiveWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponentBase_Statics::NewProp_ActiveProgress_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponentBase_Statics::NewProp_ActiveProgress_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponentBase_Statics::NewProp_ActiveProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponentBase_Statics::NewProp_ActiveIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponentBase_Statics::NewProp_ActiveBranch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponentBase_Statics::NewProp_BranchProgress_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponentBase_Statics::NewProp_BranchProgress_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponentBase_Statics::NewProp_BranchProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueComponentBase_Statics::PropPointers) < 2048);
// ********** End Class UDialogueComponentBase Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UDialogueComponentBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolkitNarratives,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueComponentBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueComponentBase_Statics::ClassParams = {
	&UDialogueComponentBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDialogueComponentBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueComponentBase_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueComponentBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueComponentBase_Statics::Class_MetaDataParams)
};
void UDialogueComponentBase::StaticRegisterNativesUDialogueComponentBase()
{
	UClass* Class = UDialogueComponentBase::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UDialogueComponentBase_Statics::Funcs));
}
UClass* Z_Construct_UClass_UDialogueComponentBase()
{
	if (!Z_Registration_Info_UClass_UDialogueComponentBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueComponentBase.OuterSingleton, Z_Construct_UClass_UDialogueComponentBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueComponentBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDialogueComponentBase);
UDialogueComponentBase::~UDialogueComponentBase() {}
// ********** End Class UDialogueComponentBase *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DialogueComponentBase_h__Script_ToolkitNarratives_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EProgressStoreType_StaticEnum, TEXT("EProgressStoreType"), &Z_Registration_Info_UEnum_EProgressStoreType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 928982178U) },
		{ EDialogueAddType_StaticEnum, TEXT("EDialogueAddType"), &Z_Registration_Info_UEnum_EDialogueAddType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3832309978U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDialogueProgress::StaticStruct, Z_Construct_UScriptStruct_FDialogueProgress_Statics::NewStructOps, TEXT("DialogueProgress"),&Z_Registration_Info_UScriptStruct_FDialogueProgress, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueProgress), 2874820052U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueComponentBase, UDialogueComponentBase::StaticClass, TEXT("UDialogueComponentBase"), &Z_Registration_Info_UClass_UDialogueComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueComponentBase), 1103473590U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DialogueComponentBase_h__Script_ToolkitNarratives_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DialogueComponentBase_h__Script_ToolkitNarratives_756890539{
	TEXT("/Script/ToolkitNarratives"),
	Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DialogueComponentBase_h__Script_ToolkitNarratives_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DialogueComponentBase_h__Script_ToolkitNarratives_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DialogueComponentBase_h__Script_ToolkitNarratives_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DialogueComponentBase_h__Script_ToolkitNarratives_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DialogueComponentBase_h__Script_ToolkitNarratives_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DialogueComponentBase_h__Script_ToolkitNarratives_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
