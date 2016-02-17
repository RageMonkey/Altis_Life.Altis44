/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 6500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1 },
            { "hgun_ACPC2_F", "", 11500, -1 },
            { "hgun_PDW2000_F", "", 20000, -1 },
            { "optic_ACO_grn_smg", "", 2500, 250 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_TRG20_F", "", 25000, 2500 },
            { "arifle_Katiba_F", "", 30000, 5000 },
            { "srifle_DMR_01_F", "", 50000, -1 },
            { "arifle_SDAR_F", "", 20000, 7500 },
            { "optic_ACO_grn", "", 3500, 350 },
            { "optic_Holosight", "", 3600, 275 },
            { "optic_Hamr", "", 7500, -1 },
            { "acc_flashlight", "", 1000, 100 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300 },
            { "30Rnd_65x39_caseless_green", "", 275 },
            { "10Rnd_762x54_Mag", "", 500 },
            { "20Rnd_556x45_UW_mag", "", 125 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1 },
            { "hgun_ACPC2_F", "", 4500, -1 },
            { "hgun_PDW2000_F", "", 9500, -1 },
            { "optic_ACO_grn_smg", "", 950, 250 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "ToolKit", "", 1250, 75 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_sdar_F", "Taser Rifle", 20000, 7500 },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650 },
            { "hgun_P07_F", "", 7500, 1500 },
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
            { "muzzle_snds_L", "", 650, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 }
        };
    };

    class cop_patrol {
        name = "Altis Patrol Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Patrol Officer Rank!" };
        items[] = {
            { "SMG_01_F","Vermin", "", 35000, 500 },
            { "SMG_02_ACO_F", "", 30000, 500 },
            { "arifle_MXC_Black_F", "", 50000, 500 },
            { "arifle_MX_Black_F", "", 60000, 500 },
			{ "arifle_MX_GL_Black_F", "", 60000, 500 },
            { "arifle_MXM_Black_F", "", 70000, 500 },
            { "optic_Aco", "", 2500, -50 },
			{ "optic_Holosight", "", 2500, 50 },
			{ "optic_Arco", "", 2500, 50 },
			{ "acc_flashlight", "", 1200, 50 },
			{ "muzzle_snds_acp", "", 3700, 50 },
			{ "muzzle_snds_H", "", 2009, 50 },
            { "bipod_01_F_blk", "", 10000, 50 },
			{ "HandGrenade_Stone", "Flashbang", 1700, 50 },
			{ "B_UavTerminal", "", 5000, 50 },
			{ "FirstAidKit", "", 150, 5 },
			{ "ToolKit", "", 250, 50 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 50},
            { "30Rnd_9x21_Mag", "", 100 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 200 },
			{ "30Rnd_65x39_caseless_mag", "", 250 }
        };
    };

    class cop_sergeant {
        name = "Altis Sergeant Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
			{ "hgun_ACPC2_F","", "", 17500, 500 },
            { "SMG_01_F","Vermin", "", 35000, 500 },
            { "SMG_02_ACO_F", "", 30000, 500 },
			{ "arifle_Mk20C_plain_F", "", 35000, 500 },
            { "arifle_MXC_Black_F", "", 50000, 500 },
            { "arifle_MX_Black_F", "", 60000, 500 },
			{ "arifle_MX_GL_Black_F", "", 60000, 500 },
            { "arifle_MXM_Black_F", "", 70000, 500 },
			{ "arifle_MX_SW_Black_F", "", 80000, 500 },
			{ "srifle_DMR_03_F", "", 60000, 500 },
			{ "srifle_EBR_F", "", 60000, 500 },
			{ "srifle_GM6_F", "", 150000, 500 },
			{ "launch_Titan_F", "", 200000, 500 },
            { "optic_Aco", "", 2500, -50 },
			{ "optic_Holosight", "", 2500, 50 },
			{ "optic_Arco", "", 2500, 50 },
			{ "optic_MRCO", "", 5000, 50 },
			{ "optic_DMS", "", 7500, 50 },
			{ "optic_AMS", "", 7500, 50 },
			{ "optic_SOS", "", 10000, 50 },
			{ "acc_flashlight", "", 1200, 50 },
			{ "muzzle_snds_acp", "", 3700, 50 },
			{ "muzzle_snds_H", "", 2009, 50 },
            { "bipod_01_F_blk", "", 10000, 50 },
			{ "HandGrenade_Stone", "Flashbang", 1700, 50 },
			{ "B_UavTerminal", "", 5000, 50 },
			{ "FirstAidKit", "", 150, 5 },
			{ "ToolKit", "", 250, 50 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 50},
            { "30Rnd_9x21_Mag", "", 100 },
			{ "9Rnd_45ACP_Mag", "", 100 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 200 },
			{ "30Rnd_556x45_Stanag", "", 250 },
			{ "30Rnd_65x39_caseless_mag", "", 250 },
			{ "100Rnd_65x39_caseless_mag", "", 500 },
			{ "20Rnd_762x51_Mag", "", 300 },
			{ "5Rnd_127x108_Mag", "", 500 },
			{ "Titan_AA", "", 20000 }
        };
    };
	
	class cop_captain {
        name = "Altis Captain Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "You must be a Captain Rank!" };
        items[] = {
            { "hgun_ACPC2_F","", "", 17500, 500 },
            { "SMG_01_F","Vermin", "", 35000, 500 },
            { "SMG_02_ACO_F", "", 30000, 500 },
			{ "arifle_Mk20C_plain_F", "", 35000, 500 },
            { "arifle_MXC_Black_F", "", 50000, 500 },
            { "arifle_MX_Black_F", "", 60000, 500 },
			{ "arifle_MX_GL_Black_F", "", 60000, 500 },
            { "arifle_MXM_Black_F", "", 70000, 500 },
			{ "arifle_MX_SW_Black_F", "", 80000, 500 },
			{ "srifle_DMR_03_F", "", 60000, 500 },
			{ "srifle_EBR_F", "", 60000, 500 },
			{ "srifle_GM6_F", "", 150000, 500 },
			{ "srifle_LRR_F", "", 100000, 500 },
			{ "launch_Titan_F", "", 200000, 500 },
            { "optic_Aco", "", 2500, -50 },
			{ "optic_Holosight", "", 2500, 50 },
			{ "optic_Arco", "", 2500, 50 },
			{ "optic_MRCO", "", 5000, 50 },
			{ "optic_DMS", "", 7500, 50 },
			{ "optic_AMS", "", 7500, 50 },
			{ "optic_SOS", "", 10000, 50 },
			{ "optic_LRPS", "", 10000, 50 },
			{ "acc_flashlight", "", 1200, 50 },
			{ "muzzle_snds_acp", "", 3700, 50 },
			{ "muzzle_snds_H", "", 2009, 50 },
            { "bipod_01_F_blk", "", 10000, 50 },
			{ "HandGrenade_Stone", "Flashbang", 1700, 50 },
			{ "B_UavTerminal", "", 5000, 50 },
			{ "FirstAidKit", "", 150, 5 },
			{ "ToolKit", "", 250, 50 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 50},
            { "30Rnd_9x21_Mag", "", 100 },
			{ "9Rnd_45ACP_Mag", "", 100 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 200 },
			{ "30Rnd_556x45_Stanag", "", 250 },
			{ "30Rnd_65x39_caseless_mag", "", 250 },
			{ "100Rnd_65x39_caseless_mag", "", 500 },
			{ "20Rnd_762x51_Mag", "", 300 },
			{ "5Rnd_127x108_Mag", "", 500 },
			{ "7Rnd_408_Mag", "", 1000 },
			{ "Titan_AA", "", 20000 }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 500, 450 },
            { "NVGoggles", "", 1200, 980 }
        };
        mags[] = {};
    };
};
