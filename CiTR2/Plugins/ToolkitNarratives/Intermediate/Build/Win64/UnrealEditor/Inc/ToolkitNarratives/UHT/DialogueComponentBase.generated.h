// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DialogueComponentBase.h"

#ifdef TOOLKITNARRATIVES_DialogueComponentBase_generated_h
#error "DialogueComponentBase.generated.h already included, missing '#pragma once' in DialogueComponentBase.h"
#endif
#define TOOLKITNARRATIVES_DialogueComponentBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDialogueWidgetBase;
class USoundBase;
enum class EDialogueAddType : uint8;
enum class EProgressStoreType : uint8;

// ********** Begin ScriptStruct FDialogueProgress *************************************************
struct Z_Construct_UScriptStruct_FDialogueProgress_Statics;
#define FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DialogueComponentBase_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDialogueProgress_Statics; \
	TOOLKITNARRATIVES_API static class UScriptStruct* StaticStruct();


struct FDialogueProgress;
// ********** End ScriptStruct FDialogueProgress ***************************************************

// ********** Begin Class UDialogueComponentBase ***************************************************
#define FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DialogueComponentBase_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnAudioLoaded); \
	DECLARE_FUNCTION(execCallParentSetDialogueBranch); \
	DECLARE_FUNCTION(execSetDialogueBranch); \
	DECLARE_FUNCTION(execCallParentRemoveDialogueProgress); \
	DECLARE_FUNCTION(execRemoveDialogueProgress); \
	DECLARE_FUNCTION(execCallParentClearDialogueProgress); \
	DECLARE_FUNCTION(execClearDialogueProgress); \
	DECLARE_FUNCTION(execCallParentUpdateSelectedOption); \
	DECLARE_FUNCTION(execUpdateSelectedOption); \
	DECLARE_FUNCTION(execDialogue); \
	DECLARE_FUNCTION(execAddDialogue); \
	DECLARE_FUNCTION(execCallParentProgressDialogue); \
	DECLARE_FUNCTION(execProgressDialogue); \
	DECLARE_FUNCTION(execCallParentCloseConversation); \
	DECLARE_FUNCTION(execCloseConversation); \
	DECLARE_FUNCTION(execOpenConversationOnBranch); \
	DECLARE_FUNCTION(execCallParentOpenConversation); \
	DECLARE_FUNCTION(execOpenConversation);


#define FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DialogueComponentBase_h_43_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UDialogueComponentBase_Statics;
TOOLKITNARRATIVES_API UClass* Z_Construct_UClass_UDialogueComponentBase_NoRegister();

#define FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DialogueComponentBase_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueComponentBase(); \
	friend struct ::Z_Construct_UClass_UDialogueComponentBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOOLKITNARRATIVES_API UClass* ::Z_Construct_UClass_UDialogueComponentBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UDialogueComponentBase, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToolkitNarratives"), Z_Construct_UClass_UDialogueComponentBase_NoRegister) \
	DECLARE_SERIALIZER(UDialogueComponentBase)


#define FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DialogueComponentBase_h_43_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDialogueComponentBase(UDialogueComponentBase&&) = delete; \
	UDialogueComponentBase(const UDialogueComponentBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueComponentBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDialogueComponentBase) \
	NO_API virtual ~UDialogueComponentBase();


#define FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DialogueComponentBase_h_40_PROLOG
#define FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DialogueComponentBase_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DialogueComponentBase_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DialogueComponentBase_h_43_CALLBACK_WRAPPERS \
	FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DialogueComponentBase_h_43_INCLASS_NO_PURE_DECLS \
	FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DialogueComponentBase_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDialogueComponentBase;

// ********** End Class UDialogueComponentBase *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DialogueComponentBase_h

// ********** Begin Enum EProgressStoreType ********************************************************
#define FOREACH_ENUM_EPROGRESSSTORETYPE(op) \
	op(EProgressStoreType::Update) \
	op(EProgressStoreType::Clear) 

enum class EProgressStoreType : uint8;
template<> struct TIsUEnumClass<EProgressStoreType> { enum { Value = true }; };
template<> TOOLKITNARRATIVES_NON_ATTRIBUTED_API UEnum* StaticEnum<EProgressStoreType>();
// ********** End Enum EProgressStoreType **********************************************************

// ********** Begin Enum EDialogueAddType **********************************************************
#define FOREACH_ENUM_EDIALOGUEADDTYPE(op) \
	op(EDialogueAddType::PassThrough) \
	op(EDialogueAddType::Updated) 

enum class EDialogueAddType : uint8;
template<> struct TIsUEnumClass<EDialogueAddType> { enum { Value = true }; };
template<> TOOLKITNARRATIVES_NON_ATTRIBUTED_API UEnum* StaticEnum<EDialogueAddType>();
// ********** End Enum EDialogueAddType ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
