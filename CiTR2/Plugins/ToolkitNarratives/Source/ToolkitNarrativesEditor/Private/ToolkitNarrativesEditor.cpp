// Copyright 2025 Heathen Engineering Limited

#include "ToolkitNarrativesEditor.h"

#define LOCTEXT_NAMESPACE "FToolkitNarrativesEditorModule"

void FToolkitNarrativesEditorModule::StartupModule()
{
	if (GEngine && GEngine->IsInitialized())
	{
		FBlueprintActionDatabase::Get().RefreshAll();
	}
}

void FToolkitNarrativesEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FToolkitNarrativesEditorModule, DialogComponentSystem)