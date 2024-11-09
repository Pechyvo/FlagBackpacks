//Made by Pechyvo, Pechyvo#6299
class CfgPatches
{
	class FlagBackpacks
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts"};
	};
};
class CfgMods
{
	class FlagBackpacks
	{
		dir = "FlagBackpacks";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Flag Backpacks";
		credits = "DrDeSync";
		author = "Pechyvo";
		authorID = "0";
		version = "1";
		extra = 0;
		type = "mod";
		inputs = "";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"FlagBackpacks/scripts/4_world"};
			};
		};
	};
};
