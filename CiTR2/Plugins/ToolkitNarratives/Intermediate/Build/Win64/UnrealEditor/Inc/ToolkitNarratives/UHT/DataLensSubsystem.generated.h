// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataLensSubsystem.h"

#ifdef TOOLKITNARRATIVES_DataLensSubsystem_generated_h
#error "DataLensSubsystem.generated.h already included, missing '#pragma once' in DataLensSubsystem.h"
#endif
#define TOOLKITNARRATIVES_DataLensSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UDataLensTable;
class UDataLensTableView;
struct FDataLensDatabaseSaveData;
struct FGameplayTag;
struct FGuid;
struct FRecordAddress;

// ********** Begin Delegate FOnTickCommitted ******************************************************
#define FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DataLensSubsystem_h_13_DELEGATE \
TOOLKITNARRATIVES_API void FOnTickCommitted_DelegateWrapper(const FMulticastScriptDelegate& OnTickCommitted, float Duration);


// ********** End Delegate FOnTickCommitted ********************************************************

// ********** Begin Class UDataLensSubsystem *******************************************************
#define FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DataLensSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadDatabase); \
	DECLARE_FUNCTION(execSaveDatabase); \
	DECLARE_FUNCTION(execInitializeEmptyDatabase); \
	DECLARE_FUNCTION(execEmptyTable); \
	DECLARE_FUNCTION(execDeleteRecord); \
	DECLARE_FUNCTION(execCreateNewRecord); \
	DECLARE_FUNCTION(execClearTraitTags); \
	DECLARE_FUNCTION(execRemoveTraitTag); \
	DECLARE_FUNCTION(execAddTraitTag); \
	DECLARE_FUNCTION(execClearRelatedAddresses); \
	DECLARE_FUNCTION(execRemoveRelatedAddress); \
	DECLARE_FUNCTION(execAddRelatedAddress); \
	DECLARE_FUNCTION(execSetAttribute); \
	DECLARE_FUNCTION(execGetDataTable); \
	DECLARE_FUNCTION(execGetView); \
	DECLARE_FUNCTION(execRegisterView); \
	DECLARE_FUNCTION(execExtractTableTag);


struct Z_Construct_UClass_UDataLensSubsystem_Statics;
TOOLKITNARRATIVES_API UClass* Z_Construct_UClass_UDataLensSubsystem_NoRegister();

#define FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DataLensSubsystem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLensSubsystem(); \
	friend struct ::Z_Construct_UClass_UDataLensSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOOLKITNARRATIVES_API UClass* ::Z_Construct_UClass_UDataLensSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLensSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolkitNarratives"), Z_Construct_UClass_UDataLensSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UDataLensSubsystem)


#define FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DataLensSubsystem_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataLensSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLensSubsystem(UDataLensSubsystem&&) = delete; \
	UDataLensSubsystem(const UDataLensSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataLensSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLensSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataLensSubsystem) \
	NO_API virtual ~UDataLensSubsystem();


#define FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DataLensSubsystem_h_15_PROLOG
#define FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DataLensSubsystem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DataLensSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DataLensSubsystem_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DataLensSubsystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLensSubsystem;

// ********** End Class UDataLensSubsystem *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_mayas_Desktop_4thYrProj_4th_year_project_CiTR2_Plugins_ToolkitNarratives_Source_ToolkitNarratives_Public_DataLensSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
