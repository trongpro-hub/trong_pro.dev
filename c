script_key = "mIblajnqLVmmUBLZeXGJFBwkuWwDxbLZ"
getgenv().SetFpsCap = false
getgenv().FpsCap = 10
getgenv().OneClickUi = true -- Only Open Necessacry Ui For One Click
getgenv().FpsBoost1 = false
getgenv().FixCrash = false -- Turn it On For Hopping Server, Improve Performance But Silent Aim On Mob And Player
getgenv().FixCrash2 = false -- Turn it On For Hopping Server, Improve Performance But Will Remove Speed Changer
    getgenv().WhiteScreen = true
    getgenv().UiCheckItems = false
    getgenv().OneClickSetting = {
        Enable=true,
        UnlimitGetQuest=true,
        TripleQuest=true,
        AutoAddStats=true,
        RedeemCode=true,
        Sea2KeyHop=true,
        FruitEat = { --Priority, Name, 
            [1] = {"ice-ice"},
            [2] = {"ice-ice"}
        },
        EatFruitFromStorage = true,
        SnipeFruit = true,
        SnipeFruitMirage = true,
        HopIfFoundNearExploiter = false,
        HopHakiColor =false,
        HopTushita = false,
        HopValkyriehelm = true,
        HopMirrorFractal=true,
        FarmPole = false, -- Turn off If Want Focus Level
        FarmItems = true, --Turn off If Want Focus Level And CDK, THis Only get After You Get God Human
        DisableSoulGuitar = false,
        DisableCDK = false,

    }
    getgenv().OneClickFarms = {
        ["Shark Anchor"] = false,
    }
getgenv().Team = "Pirates"
getgenv().AutoLoad = false --Will Load Script On Server Hop
 loadstring(game:HttpGet("https://api.luarmor.net/files/v3/loaders/3b2169cf53bc6104dabe8e19562e5cc2.lua"))()
