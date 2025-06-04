// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MB_Project : ModuleRules
{
	public MB_Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "Niagara" });
	}
}
