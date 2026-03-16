// Copyright 2025 Heathen Engineering Limited

using UnrealBuildTool;

public class ToolkitNarrativesEditor : ModuleRules
{
	public ToolkitNarrativesEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core",
            "CoreUObject",
            "Engine",
            "UnrealEd",
            "BlueprintGraph",
            "KismetCompiler",
                "CommonUI",
            "ToolkitNarratives"
        });

    }
}
