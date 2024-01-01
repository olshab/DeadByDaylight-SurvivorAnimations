using UnrealBuildTool;

public class CoreCommonUIUtils : ModuleRules {
	public CoreCommonUIUtils(ReadOnlyTargetRules Target) : base(Target) {
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		bLegacyPublicIncludePaths = false;
		ShadowVariableWarningLevel = WarningLevel.Warning;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"DBDSharedTypes",
			"DataTableUtilities",
			"Engine",
			"GameplayTags",
			"UMG",
		});
	}
}