// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DUCKDUCKKAZOO : ModuleRules
{
	public DUCKDUCKKAZOO(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "UMG",
			"OnlineSubsystem", "OnlineSubsystemUtils","OnlineSubsystemSteam"
		});

		//DynamicallyLoadedModuleNames.Add("OnlineSubsystemSteam");
	}
}
