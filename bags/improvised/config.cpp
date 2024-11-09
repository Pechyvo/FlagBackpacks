//Made by Pechyvo, Pechyvo#6299
class CfgPatches
{
	class ImprovisedFlagBackpacks
	{
		units[] = {"ImprovisedBag_White","ImprovisedBag_Chernarus","ImprovisedBag_Chedaki","ImprovisedBag_NAPA","ImprovisedBag_CDF","ImprovisedBag_Livonia","ImprovisedBag_Altis","ImprovisedBag_SSahrani","ImprovisedBag_NSahrani","ImprovisedBag_DayZ","ImprovisedBag_LivoniaArmy","ImprovisedBag_Bohemia","ImprovisedBag_APA","ImprovisedBag_UEC","ImprovisedBag_Pirates","ImprovisedBag_Cannibals","ImprovisedBag_Bear","ImprovisedBag_Wolf","ImprovisedBag_BabyDeer","ImprovisedBag_Rooster","ImprovisedBag_LivoniaPolice","ImprovisedBag_CMC","ImprovisedBag_TEC","ImprovisedBag_CHEL","ImprovisedBag_Zenit","ImprovisedBag_HunterZ","ImprovisedBag_BrainZ","ImprovisedBag_Refuge","ImprovisedBag_RSTA","ImprovisedBag_Snake"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters_Backpacks"};
	};
};
class CfgVehicles
{
	class Clothing;
	class ImprovisedBag_FlagBase: Clothing
	{
		scope = 0;
		displayName = "Flag Backpack";
		descriptionShort = "Low profile flag backpack with wooden frame. Not too rigid, but very practical";
		model = "DZ\characters\backpacks\bp_Improvised_g.p3d";
		debug_ItemCategory = 9;
		inventorySlot[] = {"Back"};
		attachments[] = {"Chemlight","WalkieTalkie"};
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		itemSize[] = {4,5};
		itemsCargoSize[] = {7,6};
		weight = 2400;
		varWetMax = 1;
		heatIsolation = 0.4;
		visibilityModifier = 0.7;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "Small";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class ClothingTypes
		{
			male = "DZ\characters\backpacks\bp_Improvised_m.p3d";
			female = "DZ\characters\backpacks\bp_Improvised_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] = {{1,{"DZ\Characters\backpacks\data\bp_improvised.rvmat"}},{0.7,{"DZ\Characters\backpacks\data\bp_improvised.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\bp_improvised_damage.rvmat"}},{0.3,{"DZ\Characters\backpacks\data\bp_improvised_damage.rvmat"}},{0,{"DZ\Characters\backpacks\data\bp_improvised_destruct.rvmat"}}};
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
	class ImprovisedBag_White: ImprovisedBag_FlagBase
	{
		scope = 2;
		color = "White";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\improvised\data\bp_improvised_white_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_white_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_white_co.paa"};
	};
	class ImprovisedBag_Chernarus: ImprovisedBag_FlagBase
	{
		scope = 2;
		color = "Chernarus";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\improvised\data\bp_improvised_chern_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_chern_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_chern_co.paa"};
	};
	class ImprovisedBag_Chedaki: ImprovisedBag_FlagBase
	{
		scope = 2;
		color = "Chedaki";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\improvised\data\bp_improvised_ched_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_ched_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_ched_co.paa"};
	};
	class ImprovisedBag_NAPA: ImprovisedBag_FlagBase
	{
		scope = 2;
		color = "NAPA";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\improvised\data\bp_improvised_napa_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_napa_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_napa_co.paa"};
	};
	class ImprovisedBag_CDF: ImprovisedBag_FlagBase
	{
		scope = 2;
		color = "CDF";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\improvised\data\bp_improvised_cdf_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_cdf_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_cdf_co.paa"};
	};
	class ImprovisedBag_Livonia: ImprovisedBag_FlagBase
	{
		scope = 2;
		color = "Livonia";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\improvised\data\bp_improvised_livo_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_livo_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_livo_co.paa"};
	};
	class ImprovisedBag_Altis: ImprovisedBag_FlagBase
	{
		scope = 2;
		color = "Altis";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\improvised\data\bp_improvised_alti_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_alti_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_alti_co.paa"};
	};
	class ImprovisedBag_SSahrani: ImprovisedBag_FlagBase
	{
		scope = 2;
		color = "SSahrani";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\improvised\data\bp_improvised_kos_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_kos_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_kos_co.paa"};
	};
	class ImprovisedBag_NSahrani: ImprovisedBag_FlagBase
	{
		scope = 2;
		color = "NSahrani";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\improvised\data\bp_improvised_dros_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_dros_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_dros_co.paa"};
	};
	class ImprovisedBag_DayZ: ImprovisedBag_FlagBase
	{
		scope = 2;
		color = "DayZ";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\improvised\data\bp_improvised_dayz_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_dayz_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_dayz_co.paa"};
	};
	class ImprovisedBag_LivoniaArmy: ImprovisedBag_FlagBase
	{
		scope = 2;
		color = "LivoniaArmy";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\improvised\data\bp_improvised_ldf_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_ldf_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_ldf_co.paa"};
	};
	class ImprovisedBag_Bohemia: ImprovisedBag_FlagBase
	{
		scope = 2;
		color = "Bohemia";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\improvised\data\bp_improvised_bi_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_bi_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_bi_co.paa"};
	};
	class ImprovisedBag_APA: ImprovisedBag_FlagBase
	{
		scope = 2;
		color = "APA";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\improvised\data\bp_improvised_apa_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_apa_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_apa_co.paa"};
	};
	class ImprovisedBag_UEC: ImprovisedBag_FlagBase
	{
		scope = 2;
		color = "UEC";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\improvised\data\bp_improvised_uec_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_uec_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_uec_co.paa"};
	};
	class ImprovisedBag_Pirates: ImprovisedBag_FlagBase
	{
		scope = 2;
		color = "Pirates";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\improvised\data\bp_improvised_jolly_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_jolly_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_jolly_co.paa"};
	};
	class ImprovisedBag_Cannibals: ImprovisedBag_FlagBase
	{
		scope = 2;
		color = "Cannibals";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\improvised\data\bp_improvised_jolly_c_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_jolly_c_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_jolly_c_co.paa"};
	};
	class ImprovisedBag_Bear: ImprovisedBag_FlagBase
	{
		scope = 2;
		color = "Bear";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\improvised\data\bp_improvised_bear_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_bear_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_bear_co.paa"};
	};
	class ImprovisedBag_Wolf: ImprovisedBag_FlagBase
	{
		scope = 2;
		color = "Wolf";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\improvised\data\bp_improvised_wolf_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_wolf_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_wolf_co.paa"};
	};
	class ImprovisedBag_BabyDeer: ImprovisedBag_FlagBase
	{
		scope = 2;
		color = "BabyDeer";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\improvised\data\bp_improvised_fawn_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_fawn_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_fawn_co.paa"};
	};
	class ImprovisedBag_Rooster: ImprovisedBag_FlagBase
	{
		scope = 2;
		color = "Rooster";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\improvised\data\bp_improvised_cock_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_cock_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_cock_co.paa"};
	};
	class ImprovisedBag_LivoniaPolice: ImprovisedBag_FlagBase
	{
		scope = 2;
		color = "LivoniaPolice";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\improvised\data\bp_improvised_police_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_police_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_police_co.paa"};
	};
	class ImprovisedBag_CMC: ImprovisedBag_FlagBase
	{
		scope = 2;
		color = "CMC";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\improvised\data\bp_improvised_cmc_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_cmc_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_cmc_co.paa"};
	};
	class ImprovisedBag_TEC: ImprovisedBag_FlagBase
	{
		scope = 2;
		color = "TEC";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\improvised\data\bp_improvised_tec_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_tec_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_tec_co.paa"};
	};
	class ImprovisedBag_CHEL: ImprovisedBag_FlagBase
	{
		scope = 2;
		color = "CHEL";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\improvised\data\bp_improvised_chel_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_chel_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_chel_co.paa"};
	};
	class ImprovisedBag_Zenit: ImprovisedBag_FlagBase
	{
		scope = 2;
		color = "Zenit";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\improvised\data\bp_improvised_zenit_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_zenit_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_zenit_co.paa"};
	};
	class ImprovisedBag_HunterZ: ImprovisedBag_FlagBase
	{
		scope = 2;
		color = "HunterZ";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\improvised\data\bp_improvised_zhunters_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_zhunters_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_zhunters_co.paa"};
	};
	class ImprovisedBag_BrainZ: ImprovisedBag_FlagBase
	{
		scope = 2;
		color = "BrainZ";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\improvised\data\bp_improvised_brain_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_brain_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_brain_co.paa"};
	};
	class ImprovisedBag_Refuge: ImprovisedBag_FlagBase
	{
		scope = 2;
		color = "Refuge";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\improvised\data\bp_improvised_refuge_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_refuge_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_refuge_co.paa"};
	};
	class ImprovisedBag_RSTA: ImprovisedBag_FlagBase
	{
		scope = 2;
		color = "RSTA";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\improvised\data\bp_improvised_rsta_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_rsta_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_rsta_co.paa"};
	};
	class ImprovisedBag_Snake: ImprovisedBag_FlagBase
	{
		scope = 2;
		color = "Snake";
		hiddenSelectionsTextures[] = {"FlagBackpacks\bags\improvised\data\bp_improvised_snake_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_snake_co.paa","FlagBackpacks\bags\improvised\data\bp_improvised_snake_co.paa"};
	};
};
