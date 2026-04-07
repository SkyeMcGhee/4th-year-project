// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolkitNarratives_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	TOOLKITNARRATIVES_API UFunction* Z_Construct_UDelegateFunction_ToolkitNarratives_OnTickCommitted__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ToolkitNarratives;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ToolkitNarratives()
	{
		if (!Z_Registration_Info_UPackage__Script_ToolkitNarratives.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_ToolkitNarratives_OnTickCommitted__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/ToolkitNarratives",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x2CA63940,
			0xC84BA755,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ToolkitNarratives.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_ToolkitNarratives.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ToolkitNarratives(Z_Construct_UPackage__Script_ToolkitNarratives, TEXT("/Script/ToolkitNarratives"), Z_Registration_Info_UPackage__Script_ToolkitNarratives, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2CA63940, 0xC84BA755));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
