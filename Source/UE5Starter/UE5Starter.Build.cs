// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5Starter : ModuleRules
{
	public UE5Starter(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
