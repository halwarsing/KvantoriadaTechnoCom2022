// Some copyright should be here...

using UnrealBuildTool;

public class HalKvantoriadaPlugin : ModuleRules
{
	public HalKvantoriadaPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core", "CoreUObject", "Engine", "Slate", "SlateCore", "InputCore", "Networking", "Sockets", "Json", "JsonUtilities"
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Core", "CoreUObject", "Engine", "Slate", "SlateCore", "InputCore", "Networking", "Sockets", "Json", "JsonUtilities"
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
