//Made by Pechyvo, Pechyvo#6299
class CfgPatches
{
	class CourierFlagBackpacks
	{
		units[] = {"CourierBag_White","CourierBag_Chernarus","CourierBag_Chedaki","CourierBag_NAPA","CourierBag_CDF","CourierBag_Livonia","CourierBag_Altis","CourierBag_SSahrani","CourierBag_NSahrani","CourierBag_DayZ","CourierBag_LivoniaArmy","CourierBag_Bohemia","CourierBag_APA","CourierBag_UEC","CourierBag_Pirates","CourierBag_Cannibals","CourierBag_Bear","CourierBag_Wolf","CourierBag_BabyDeer","CourierBag_Rooster","CourierBag_LivoniaPolice","CourierBag_CMC","CourierBag_TEC","CourierBag_CHEL","CourierBag_Zenit","CourierBag_HunterZ","CourierBag_BrainZ","CourierBag_Refuge","CourierBag_RSTA","CourierBag_Snake"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters_Backpacks"};
	};
};
class CfgVehicles
{
	class Clothing;
	class CourierBag_FlagBase: Clothing
	{
		scope = 0;
		displayName = "Flag Courier Backpack";
		descriptionShort = "Simple courier bag made from rope and flag. Discreet yet effective.";
		model = "DZ\characters\backpacks\ImpCourierBag_g.p3d";
		debug_ItemCategory = 9;
		inventorySlot[] = {"Back"};
		attachments[] = {"WalkieTalkie"};
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		itemSize[] = {4,4};
		itemsCargoSize[] = {6,5};
		weight = 900;
		varWetMax = 1;
		heatIsolation = 0.3;
		visibilityModifier = 0.8;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "Small";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class ClothingTypes
		{
			male = "DZ\characters\backpacks\ImpCourierBag_m.p3d";
			female = "DZ\characters\backpacks\ImpCourierBag_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] = {{1,{"DZ\Characters\backpacks\data\ImpCourierBag.rvmat"}},{0.7,{"DZ\Characters\backpacks\data\ImpCourierBag.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\ImpCourierBag_damage.rvmat"}},{0.3,{"DZ\Characters\backpacks\data\ImpCourierBag_damage.rvmat"}},{0,{"DZ\Characters\backpacks\data\ImpCourierBag_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "taloonbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class CourierBag_White: CourierBag_FlagBase
	{
		scope = 2;
		color = "White";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\courier\data\impcourierbag_white_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_white_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_white_co.paa"};
	};
	class CourierBag_Chernarus: CourierBag_FlagBase
	{
		scope = 2;
		color = "Chernarus";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\courier\data\impcourierbag_chern_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_chern_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_chern_co.paa"};
	};
	class CourierBag_Chedaki: CourierBag_FlagBase
	{
		scope = 2;
		color = "Chedaki";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\courier\data\impcourierbag_ched_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_ched_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_ched_co.paa"};
	};
	class CourierBag_NAPA: CourierBag_FlagBase
	{
		scope = 2;
		color = "NAPA";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\courier\data\impcourierbag_napa_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_napa_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_napa_co.paa"};
	};
	class CourierBag_CDF: CourierBag_FlagBase
	{
		scope = 2;
		color = "CDF";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\courier\data\impcourierbag_cdf_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_cdf_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_cdf_co.paa"};
	};
	class CourierBag_Livonia: CourierBag_FlagBase
	{
		scope = 2;
		color = "Livonia";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\courier\data\impcourierbag_livo_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_livo_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_livo_co.paa"};
	};
	class CourierBag_Altis: CourierBag_FlagBase
	{
		scope = 2;
		color = "Altis";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\courier\data\impcourierbag_alti_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_alti_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_alti_co.paa"};
	};
	class CourierBag_SSahrani: CourierBag_FlagBase
	{
		scope = 2;
		color = "SSahrani";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\courier\data\impcourierbag_kos_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_kos_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_kos_co.paa"};
	};
	class CourierBag_NSahrani: CourierBag_FlagBase
	{
		scope = 2;
		color = "NSahrani";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\courier\data\impcourierbag_dros_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_dros_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_dros_co.paa"};
	};
	class CourierBag_DayZ: CourierBag_FlagBase
	{
		scope = 2;
		color = "DayZ";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\courier\data\impcourierbag_dayz_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_dayz_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_dayz_co.paa"};
	};
	class CourierBag_LivoniaArmy: CourierBag_FlagBase
	{
		scope = 2;
		color = "LivoniaArmy";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\courier\data\impcourierbag_ldf_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_ldf_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_ldf_co.paa"};
	};
	class CourierBag_Bohemia: CourierBag_FlagBase
	{
		scope = 2;
		color = "Bohemia";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\courier\data\impcourierbag_bi_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_bi_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_bi_co.paa"};
	};
	class CourierBag_APA: CourierBag_FlagBase
	{
		scope = 2;
		color = "APA";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\courier\data\impcourierbag_apa_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_apa_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_apa_co.paa"};
	};
	class CourierBag_UEC: CourierBag_FlagBase
	{
		scope = 2;
		color = "UEC";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\courier\data\impcourierbag_uec_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_uec_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_uec_co.paa"};
	};
	class CourierBag_Pirates: CourierBag_FlagBase
	{
		scope = 2;
		color = "Pirates";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\courier\data\impcourierbag_jolly_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_jolly_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_jolly_co.paa"};
	};
	class CourierBag_Cannibals: CourierBag_FlagBase
	{
		scope = 2;
		color = "Cannibals";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\courier\data\impcourierbag_jolly_c_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_jolly_c_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_jolly_c_co.paa"};
	};
	class CourierBag_Bear: CourierBag_FlagBase
	{
		scope = 2;
		color = "Bear";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\courier\data\impcourierbag_bear_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_bear_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_bear_co.paa"};
	};
	class CourierBag_Wolf: CourierBag_FlagBase
	{
		scope = 2;
		color = "Wolf";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\courier\data\impcourierbag_wolf_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_wolf_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_wolf_co.paa"};
	};
	class CourierBag_BabyDeer: CourierBag_FlagBase
	{
		scope = 2;
		color = "BabyDeer";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\courier\data\impcourierbag_fawn_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_fawn_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_fawn_co.paa"};
	};
	class CourierBag_Rooster: CourierBag_FlagBase
	{
		scope = 2;
		color = "Rooster";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\courier\data\impcourierbag_cock_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_cock_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_cock_co.paa"};
	};
	class CourierBag_LivoniaPolice: CourierBag_FlagBase
	{
		scope = 2;
		color = "LivoniaPolice";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\courier\data\impcourierbag_police_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_police_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_police_co.paa"};
	};
	class CourierBag_CMC: CourierBag_FlagBase
	{
		scope = 2;
		color = "CMC";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\courier\data\impcourierbag_cmc_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_cmc_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_cmc_co.paa"};
	};
	class CourierBag_TEC: CourierBag_FlagBase
	{
		scope = 2;
		color = "TEC";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\courier\data\impcourierbag_tec_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_tec_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_tec_co.paa"};
	};
	class CourierBag_CHEL: CourierBag_FlagBase
	{
		scope = 2;
		color = "CHEL";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\courier\data\impcourierbag_chel_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_chel_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_chel_co.paa"};
	};
	class CourierBag_Zenit: CourierBag_FlagBase
	{
		scope = 2;
		color = "Zenit";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\courier\data\impcourierbag_zenit_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_zenit_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_zenit_co.paa"};
	};
	class CourierBag_HunterZ: CourierBag_FlagBase
	{
		scope = 2;
		color = "HunterZ";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\courier\data\impcourierbag_zhunters_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_zhunters_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_zhunters_co.paa"};
	};
	class CourierBag_BrainZ: CourierBag_FlagBase
	{
		scope = 2;
		color = "BrainZ";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\courier\data\impcourierbag_brain_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_brain_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_brain_co.paa"};
	};
	class CourierBag_Refuge: CourierBag_FlagBase
	{
		scope = 2;
		color = "Refuge";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\courier\data\impcourierbag_refuge_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_refuge_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_refuge_co.paa"};
	};
	class CourierBag_RSTA: CourierBag_FlagBase
	{
		scope = 2;
		color = "RSTA";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\courier\data\impcourierbag_rsta_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_rsta_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_rsta_co.paa"};
	};
	class CourierBag_Snake: CourierBag_FlagBase
	{
		scope = 2;
		color = "Snake";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\courier\data\impcourierbag_snake_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_snake_co.paa","FlagBackpacks\bags\courier\data\impcourierbag_snake_co.paa"};
	};
};
