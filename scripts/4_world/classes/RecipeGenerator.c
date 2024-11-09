//Made by Pechyvo, Pechyvo#6299
modded class PluginRecipesManager
{
    override void RegisterRecipies()
    {
        super.RegisterRecipies();

        RegisterRecipe(new CraftFlagCourierBag);
        RegisterRecipe(new CraftFlagImprovisedBag);
        RegisterRecipe(new DeCraftFlagCourierBag);
        RegisterRecipe(new DeCraftFlagImprovisedBag);
    }
};