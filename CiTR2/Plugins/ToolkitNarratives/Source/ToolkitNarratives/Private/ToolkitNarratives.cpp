// Copyright 2025 Heathen Engineering Limited

#include "ToolkitNarratives.h"

#define LOCTEXT_NAMESPACE "FToolkitNarrativesModule"

void FToolkitNarrativesModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FToolkitNarrativesModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FToolkitNarrativesModule, ToolkitNarratives)