// Copyright 2025 Heathen Engineering Limited

#pragma once

#include "Modules/ModuleManager.h"

class FToolkitNarrativesModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
