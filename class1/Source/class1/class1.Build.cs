// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class class1 : ModuleRules
{
	public class1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
