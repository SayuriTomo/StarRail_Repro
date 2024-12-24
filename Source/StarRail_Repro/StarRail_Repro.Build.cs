// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class StarRail_Repro : ModuleRules
{
	public StarRail_Repro(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
