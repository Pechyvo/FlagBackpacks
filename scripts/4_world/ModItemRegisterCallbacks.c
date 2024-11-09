//Made by Pechyvo, Pechyvo#6299
modded class ModItemRegisterCallbacks
{   
    override void RegisterTwoHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterTwoHanded(pType, pBehavior);
        pType.AddItemInHandsProfileIK("CourierBag_FlagBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/courier_bag.anm");
		pType.AddItemInHandsProfileIK("ImprovisedBag_FlagBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/improvised_courier_bag.anm");
    };
    
}
