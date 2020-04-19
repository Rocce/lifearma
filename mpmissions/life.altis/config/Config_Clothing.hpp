/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Poloshirt_blue", "", 120, "" },
            { "U_C_Poloshirt_burgundy", "", 120, "" },
            { "U_C_Poloshirt_stripped", "", 120, "" },
            { "U_C_Poloshirt_tricolour", "", 120, "" },
            { "U_C_Poloshirt_salmon", "", 120, "" },
            { "U_C_Poloshirt_redwhite", "", 120, "" },
            { "U_OrestesBody", "", 120, "" },
            { "U_Competitor", "", 120, "" },
            { "U_BG_Guerilla2_1", "", 120, "" },
            { "U_BG_Guerilla2_2", "", 120, "" },
            { "U_BG_Guerilla2_3", "", 120, "" },
            { "U_BG_Guerilla3_1", "", 120, "" },
            { "U_C_Poor_1", "", 120, "" },
            { "U_C_HunterBody_grn", "", 120, "" },
            { "U_I_G_Story_Protagonist_F", "", 120, "" },
            { "U_C_Journalist", "", 120, "" },
            { "U_Marshal", "", 120, "" },
            { "U_I_C_Soldier_Bandit_1_F", "", 120, "" },
            { "U_I_C_Soldier_Bandit_2_F", "", 120, "" },
            { "U_I_C_Soldier_Bandit_3_F", "", 120, "" },
            { "U_I_C_Soldier_Bandit_4_F", "", 120, "" },
            { "U_I_C_Soldier_Bandit_5_F", "", 120, "" },
            { "U_C_man_sport_1_F", "", 120, "" },
            { "U_C_man_sport_2_F", "", 120, "" },
            { "U_C_man_sport_3_F", "", 120, "" },
            { "U_C_Man_casual_1_F", "", 120, "" },
            { "U_C_Man_casual_2_F", "", 120, "" },
            { "U_C_Man_casual_3_F", "", 120, "" },
            { "U_C_Man_casual_4_F", "", 120, "" },
            { "U_C_Man_casual_5_F", "", 120, "" },
            { "U_C_Man_casual_6_F", "", 120, "" },
            { "U_C_IDAP_Man_shorts_F", "", 120, "" },
            { "U_C_IDAP_Man_casual_F", "", 120, "" },
            { "U_C_IDAP_Man_cargo_F", "", 120, "" },
            { "U_C_IDAP_Man_Tee_F", "", 120, "" },
            { "U_C_IDAP_Man_Jeans_F", "", 120, "" },
            { "U_C_IDAP_Man_TeeShorts_F", "", 120, "" },
            { "U_C_Mechanic_01_F", "", 120, "" },
            { "U_C_ConstructionCoverall_Red_F", "", 120, "" },
            { "U_C_ConstructionCoverall_Vrana_F", "", 120, "" },
            { "U_C_ConstructionCoverall_Black_F", "", 120, "" },
            { "U_C_ConstructionCoverall_Blue_F", "", 120, "" },
            { "U_C_Uniform_Farmer_01_F", "", 120, "" },
            { "U_C_E_LooterJacket_01_F", "", 120, "" },
            { "U_C_Uniform_Scientist_01_F", "", 120, "" },
            { "U_C_Uniform_Scientist_01_formal_F", "", 120, "" },
            { "U_C_Uniform_Scientist_02_F", "", 120, "" },
            { "U_C_Uniform_Scientist_02_formal_F", "", 120, "" },
            { "U_I_L_Uniform_01_tshirt_skull_F", "", 120, "" },
            { "U_I_L_Uniform_01_tshirt_black_F", "", 120, "" },
            { "U_I_L_Uniform_01_tshirt_sport_F", "", 120, "" },
            { "U_I_L_Uniform_01_tshirt_olive_F", "", 120, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Booniehat_khk", "", 120, "" },
            { "H_Booniehat_oli", "", 120, "" },
            { "H_Booniehat_mcamo", "", 120, "" },
            { "H_Booniehat_tan", "", 120, "" },
            { "H_Booniehat_dgtl", "", 120, "" },
            { "H_Booniehat_khk_hs", "", 120, "" },
            { "H_Cap_red", "", 120, "" },
            { "H_Cap_blu", "", 120, "" },
            { "H_Cap_oli", "", 120, "" },
            { "H_Cap_headphones", "", 120, "" },
            { "H_Cap_tan", "", 120, "" },
            { "H_Cap_blk", "", 120, "" },
            { "H_Cap_blk_CMMG", "", 120, "" },
            { "H_Cap_brn_SPECOPS", "", 120, "" },
            { "H_Cap_tan_specops_US", "", 120, "" },
            { "H_Cap_khaki_specops_UK", "", 120, "" },
            { "H_Cap_grn", "", 120, "" },
            { "H_Cap_grn_BI", "", 120, "" },
            { "H_Cap_blk_Raven", "", 120, "" },
            { "H_Cap_blk_ION", "", 120, "" },
            { "H_Cap_oli_hs", "", 120, "" },
            { "H_Cap_press", "", 120, "" },
            { "H_Cap_usblack", "", 120, "" },
            { "H_Cap_surfer", "", 120, "" },
            { "H_Cap_police", "", 120, "" },
            { "H_MilCap_ocamo", "", 120, "" },
            { "H_MilCap_mcamo", "", 120, "" },
            { "H_MilCap_gry", "", 120, "" },
            { "H_MilCap_dgtl", "", 120, "" },
            { "H_MilCap_blue", "", 120, "" },
            { "H_Bandanna_surfer", "", 120, "" },
            { "H_Bandanna_khk", "", 120, "" },
            { "H_Bandanna_khk_hs", "", 120, "" },
            { "H_Bandanna_cbr", "", 120, "" },
            { "H_Bandanna_sgg", "", 120, "" },
            { "H_Bandanna_sand", "", 120, "" },
            { "H_Bandanna_surfer_blk", "", 120, "" },
            { "H_Bandanna_surfer_grn", "", 120, "" },
            { "H_Bandanna_gry", "", 120, "" },
            { "H_Bandanna_blu", "", 120, "" },
            { "H_Bandanna_camo", "", 120, "" },
            { "H_Bandanna_mcamo", "", 120, "" },
            { "H_Watchcap_blk", "", 120, "" },
            { "H_Watchcap_cbr", "", 120, "" },
            { "H_Watchcap_khk", "", 120, "" },
            { "H_Watchcap_camo", "", 120, "" },
            { "H_StrawHat", "", 120, "" },
            { "H_StrawHat_dark", "", 120, "" },
            { "H_Hat_blue", "", 120, "" },
            { "H_Hat_brown", "", 120, "" },
            { "H_Hat_camo", "", 120, "" },
            { "H_Hat_grey", "", 120, "" },
            { "H_Hat_checker", "", 120, "" },
            { "H_Hat_tan", "", 120, "" },
            { "H_Cap_marshal", "", 120, "" },
            { "H_Helmet_Skate", "", 120, "" },
            { "H_MilCap_tna_F", "", 120, "" },
            { "H_MilCap_ghex_F", "", 120, "" },
            { "H_Booniehat_tna_F", "", 120, "" },
            { "H_MilCap_gen_F", "", 120, "" },
            { "H_Hat_Safari_sand_F", "", 120, "" },
            { "H_Hat_Safari_olive_F", "", 120, "" },
            { "H_Construction_basic_yellow_F", "", 120, "" },
            { "H_Construction_basic_white_F", "", 120, "" },
            { "H_Construction_basic_orange_F", "", 120, "" },
            { "H_Construction_basic_red_F", "", 120, "" },
            { "H_Construction_basic_vrana_F", "", 120, "" },
            { "H_Construction_basic_black_F", "", 120, "" },
            { "H_Construction_earprot_yellow_F", "", 120, "" },
            { "H_Construction_earprot_white_F", "", 120, "" },
            { "H_Construction_earprot_orange_F", "", 120, "" },
            { "H_Construction_earprot_red_F", "", 120, "" },
            { "H_Construction_earprot_vrana_F", "", 120, "" },
            { "H_Construction_earprot_black_F", "", 120, "" },
            { "H_Construction_headset_yellow_F", "", 120, "" },
            { "H_Construction_headset_white_F", "", 120, "" },
            { "H_Construction_headset_orange_F", "", 120, "" },
            { "H_Construction_headset_red_F", "", 120, "" },
            { "H_Construction_headset_vrana_F", "", 120, "" },
            { "H_Construction_headset_black_F", "", 120, "" },
            { "H_EarProtectors_yellow_F", "", 120, "" },
            { "H_EarProtectors_white_F", "", 120, "" },
            { "H_EarProtectors_orange_F", "", 120, "" },
            { "H_EarProtectors_red_F", "", 120, "" },
            { "H_EarProtectors_black_F", "", 120, "" },
            { "H_HeadSet_yellow_F", "", 120, "" },
            { "H_HeadSet_white_F", "", 120, "" },
            { "H_HeadSet_orange_F", "", 120, "" },
            { "H_HeadSet_red_F", "", 120, "" },
            { "H_HeadSet_black_F", "", 120, "" },
            { "H_HeadBandage_stained_F", "", 120, "" },
            { "H_HeadBandage_clean_F", "", 120, "" },
            { "H_HeadBandage_bloody_F", "", 120, "" },
            { "H_Cap_White_IDAP_F", "", 120, "" },
            { "H_Cap_Orange_IDAP_F", "", 120, "" },
            { "H_Cap_Black_IDAP_F", "", 120, "" },
            { "H_WirelessEarpiece_F", "", 120, "" },
            { "H_Hat_Tinfoil_F", "", 120, "" },
            { "H_Booniehat_mgrn", "", 120, "" },
            { "H_Booniehat_taiga", "", 120, "" },
            { "H_Booniehat_eaf", "", 120, "" },
            { "H_Booniehat_wdl", "", 120, "" },
            { "H_MilCap_grn", "", 120, "" },
            { "H_MilCap_taiga", "", 120, "" },
            { "H_MilCap_wdl", "", 120, "" },
            { "H_MilCap_eaf", "", 120, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Spectacles", "", 120, "" },
            { "G_Spectacles_Tinted", "", 120, "" },
            { "G_Combat", "", 120, "" },
            { "G_Lowprofile", "", 120, "" },
            { "G_Shades_Black", "", 120, "" },
            { "G_Shades_Green", "", 120, "" },
            { "G_Shades_Red", "", 120, "" },
            { "G_Squares", "", 120, "" },
            { "G_Squares_Tinted", "", 120, "" },
            { "G_Sport_BlackWhite", "", 120, "" },
            { "G_Sport_Blackyellow", "", 120, "" },
            { "G_Sport_Greenblack", "", 120, "" },
            { "G_Sport_Checkered", "", 120, "" },
            { "G_Sport_Red", "", 120, "" },
            { "G_Tactical_Black", "", 120, "" },
            { "G_Aviator", "", 120, "" },
            { "G_Lady_Blue", "", 120, "" },
            { "G_Goggles_VR", "", 120, "" },
            { "G_Shades_Blue", "", 120, "" },
            { "G_Sport_Blackred", "", 120, "" },
            { "G_Tactical_Clear", "", 120, "" },
            { "G_Combat_Goggles_tna_F", "", 120, "" },
            { "G_Respirator_white_F", "", 120, "" },
            { "G_Respirator_yellow_F", "", 120, "" },
            { "G_Respirator_blue_F", "", 120, "" },
            { "G_EyeProtectors_F", "", 120, "" },
            { "G_EyeProtectors_Earpiece_F", "", 120, "" },
            { "G_WirelessEarpiece_F", "", 120, "" },
            { "G_Blindfold_01_white_F", "", 120, "" },
            { "G_Blindfold_01_black_F", "", 120, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Plain_medical_F", "", 120, "" },
            { "V_Plain_crystal_F", "", 120, "" },
            { "V_Safety_yellow_F", "", 120, "" },
            { "V_Safety_orange_F", "", 120, "" },
            { "V_Safety_blue_F", "", 120, "" },
            { "V_LegStrapBag_black_F", "", 120, "" },
            { "V_LegStrapBag_coyote_F", "", 120, "" },
            { "V_LegStrapBag_olive_F", "", 120, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_LegStrapBag_black_F", "", 11000, "" }, // spazio 44
            { "B_LegStrapBag_coyote_F", "", 11000, "" },
            { "B_LegStrapBag_olive_F", "", 11000, "" },
            { "B_Messenger_Coyote_F", "", 14000, "" }, // spazio 59
            { "B_Messenger_Olive_F", "", 14000, "" },
            { "B_Messenger_Black_F", "", 14000, "" },
            { "B_Messenger_Gray_F", "", 14000, "" },
            { "B_Messenger_IDAP_F", "", 14000, "" },
            { "B_AssaultPack_khk", "", 16000, "" }, // spazio 64
            { "B_AssaultPack_dgtl", "", 16000, "" },
            { "B_AssaultPack_rgr", "", 16000, "" },
            { "B_AssaultPack_sgg", "", 16000, "" },
            { "B_AssaultPack_blk", "", 16000, "" },
            { "B_AssaultPack_cbr", "", 16000, "" },
            { "B_AssaultPack_mcamo", "", 16000, "" },
            { "B_AssaultPack_ocamo", "", 16000, "" },
            { "B_AssaultPack_tna_F", "", 16000, "" },
            { "B_AssaultPack_wdl_F", "", 16000, "" },
            { "B_AssaultPack_eaf_F", "", 16000, "" },
            { "B_FieldPack_oli", "", 18000, "" }, // spazio 74
            { "B_FieldPack_khk", "", 18000, "" },
            { "B_FieldPack_ocamo", "", 18000, "" },
            { "B_FieldPack_oucamo", "", 18000, "" },
            { "B_FieldPack_cbr", "", 18000, "" },
            { "B_FieldPack_blk", "", 18000, "" },
            { "B_FieldPack_ghex_F", "", 18000, "" },
            { "B_FieldPack_green_F", "", 18000, "" }, 
            { "B_FieldPack_taiga_F", "", 18000, "" },
            { "B_TacticalPack_rgr", "", 210000, "" }, // spazio 84
            { "B_TacticalPack_mcamo", "", 210000, "" },
            { "B_TacticalPack_ocamo", "", 210000, "" },
            { "B_TacticalPack_blk", "", 210000, "" },
            { "B_TacticalPack_oli", "", 210000, "" },
            { "B_ViperLightHarness_blk_F", "", 22000, "" }, // spazio 89
            { "B_ViperLightHarness_ghex_F", "", 22000, "" },
            { "B_ViperLightHarness_hex_F", "", 22000, "" },
            { "B_ViperLightHarness_khk_F", "", 22000, "" },
            { "B_ViperLightHarness_oli_F", "", 22000, "" },
            { "B_Kitbag_rgr", "", 23000, "" }, // spazio 94
            { "B_Kitbag_mcamo", "", 23000, "" },
            { "B_Kitbag_sgg", "", 23000, "" },
            { "B_Kitbag_cbr", "", 23000, "" },
            { "B_Kitbag_tan", "", 23000, "" },
            { "B_ViperHarness_blk_F", "", 24000, "" }, // spazio 99
            { "B_ViperHarness_ghex_F", "", 24000, "" },
            { "B_ViperHarness_hex_F", "", 24000, "" },
            { "B_ViperHarness_khk_F", "", 24000, "" },
            { "B_ViperHarness_oli_F", "", 24000, "" },
            { "B_Carryall_green_F", "", 26000, "" }, // spazio 104
            { "B_Carryall_ocamo", "", 26000, "" },
            { "B_Carryall_oucamo", "", 26000, "" },
            { "B_Carryall_mcamo", "", 26000, "" },
            { "B_Carryall_khk", "", 26000, "" },
            { "B_Carryall_cbr", "", 26000, "" },
            { "B_Carryall_oli", "", 26000, "" },
            { "B_Carryall_ghex_F", "", 26000, "" },
            { "B_Carryall_taiga_F", "", 26000, "" },
            { "B_Carryall_wdl_F", "", 26000, "" },
            { "B_Carryall_eaf_F", "", 26000, "" },
            { "B_Bergen_mcamo_F", "", 36000, "" }, // spazio 144
            { "B_Bergen_dgtl_F", "", 36000, "" },
            { "B_Bergen_hex_F", "", 36000, "" },
            { "B_Bergen_tna_F", "", 36000, "" },
            { "B_Parachute", "", 120, "" },
            { "B_Respawn_TentDome_F", "", 120, "" },
            { "B_Respawn_TentA_F", "", 120, "" },
            { "B_Respawn_Sleeping_bag_F", "", 120, "" },
            { "B_Respawn_Sleeping_bag_blue_F", "", 120, "" },
            { "B_Respawn_Sleeping_bag_brown_F", "", 120, "" },
            { "B_Patrol_Respawn_bag_F", "", 120, "" }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_BG_Guerrilla_6_1", "", 350, "call life_coplevel >= 1" },
            { "U_B_Wetsuit", "", 120, "call life_coplevel >= 1" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Booniehat_khk", "", 350, "call life_coplevel >= 1" },
            { "H_Booniehat_oli", "", 350, "call life_coplevel >= 1" },
            { "H_Booniehat_mcamo", "", 350, "call life_coplevel >= 1" },
            { "H_Booniehat_tan", "", 350, "call life_coplevel >= 1" },
            { "H_Booniehat_dgtl", "", 350, "call life_coplevel >= 1" },
            { "H_Booniehat_khk_hs", "", 350, "call life_coplevel >= 1" },
            { "H_Cap_red", "", 350, "call life_coplevel >= 1" },
            { "H_Cap_blu", "", 350, "call life_coplevel >= 1" },
            { "H_Cap_oli", "", 350, "call life_coplevel >= 1" },
            { "H_Cap_headphones", "", 350, "call life_coplevel >= 1" },
            { "H_Cap_tan", "", 350, "call life_coplevel >= 1" },
            { "H_Cap_blk", "", 350, "call life_coplevel >= 1" },
            { "H_Cap_blk_CMMG", "", 350, "call life_coplevel >= 1" },
            { "H_Cap_brn_SPECOPS", "", 350, "call life_coplevel >= 1" },
            { "H_Cap_tan_specops_US", "", 350, "call life_coplevel >= 1" },
            { "H_Cap_khaki_specops_UK", "", 350, "call life_coplevel >= 1" },
            { "H_Cap_grn_BI", "", 350, "call life_coplevel >= 1" },
            { "H_Cap_blk_Raven", "", 350, "call life_coplevel >= 1" },
            { "H_Cap_blk_ION", "", 350, "call life_coplevel >= 1" },
            { "H_Cap_oli_hs", "", 350, "call life_coplevel >= 1" },
            { "H_Cap_press", "", 350, "call life_coplevel >= 1" },
            { "H_Cap_usblack", "", 350, "call life_coplevel >= 1" },
            { "H_Cap_surfer", "", 350, "call life_coplevel >= 1" },
            { "H_Cap_police", "", 350, "call life_coplevel >= 1" },
            { "H_MilCap_ocamo", "", 350, "call life_coplevel >= 1" },
            { "H_MilCap_mcamo", "", 350, "call life_coplevel >= 1" },
            { "H_MilCap_gry", "", 350, "call life_coplevel >= 1" },
            { "H_MilCap_dgtl", "", 350, "call life_coplevel >= 1" },
            { "H_MilCap_blue", "", 350, "call life_coplevel >= 1" },
            { "H_Bandanna_surfer", "", 350, "call life_coplevel >= 1" },
            { "H_Bandanna_khk", "", 350, "call life_coplevel >= 1" },
            { "H_Bandanna_khk_hs", "", 350, "call life_coplevel >= 1" },
            { "H_Bandanna_cbr", "", 350, "call life_coplevel >= 1" },
            { "H_Bandanna_sgg", "", 350, "call life_coplevel >= 1" },
            { "H_Bandanna_sand", "", 350, "call life_coplevel >= 1" },
            { "H_Bandanna_surfer_blk", "", 350, "call life_coplevel >= 1" },
            { "H_Bandanna_surfer_grn", "", 350, "call life_coplevel >= 1" },
            { "H_Bandanna_gry", "", 350, "call life_coplevel >= 1" },
            { "H_Bandanna_blu", "", 350, "call life_coplevel >= 1" },
            { "H_Bandanna_camo", "", 350, "call life_coplevel >= 1" },
            { "H_Bandanna_mcamo", "", 350, "call life_coplevel >= 1" },
            { "H_Watchcap_blk", "", 350, "call life_coplevel >= 1" },
            { "H_Watchcap_cbr", "", 350, "call life_coplevel >= 1" },
            { "H_Watchcap_khk", "", 350, "call life_coplevel >= 1" },
            { "H_Watchcap_camo", "", 350, "call life_coplevel >= 1" },
            { "H_StrawHat", "", 350, "call life_coplevel >= 1" },
            { "H_StrawHat_dark", "", 350, "call life_coplevel >= 1" },
            { "H_Hat_blue", "", 350, "call life_coplevel >= 1" },
            { "H_Hat_brown", "", 350, "call life_coplevel >= 1" },
            { "H_Hat_camo", "", 350, "call life_coplevel >= 1" },
            { "H_Hat_grey", "", 350, "call life_coplevel >= 1" },
            { "H_Hat_checker", "", 350, "call life_coplevel >= 1" },
            { "H_Hat_tan", "", 350, "call life_coplevel >= 1" },
            { "H_Cap_marshal", "", 350, "call life_coplevel >= 1" },
            { "H_MilCap_tna_F", "", 350, "call life_coplevel >= 1" },
            { "H_MilCap_ghex_F", "", 350, "call life_coplevel >= 1" },
            { "H_Booniehat_tna_F", "", 350, "call life_coplevel >= 1" },
            { "H_MilCap_gen_F", "", 350, "call life_coplevel >= 1" },
            { "H_Hat_Safari_sand_F", "", 350, "call life_coplevel >= 1" },
            { "H_Hat_Safari_olive_F", "", 350, "call life_coplevel >= 1" },
            { "H_EarProtectors_yellow_F", "", 350, "call life_coplevel >= 1" },
            { "H_EarProtectors_white_F", "", 350, "call life_coplevel >= 1" },
            { "H_EarProtectors_orange_F", "", 350, "call life_coplevel >= 1" },
            { "H_EarProtectors_red_F", "", 350, "call life_coplevel >= 1" },
            { "H_EarProtectors_black_F", "", 350, "call life_coplevel >= 1" },
            { "H_HeadSet_yellow_F", "", 350, "call life_coplevel >= 1" },
            { "H_HeadSet_white_F", "", 350, "call life_coplevel >= 1" },
            { "H_HeadSet_orange_F", "", 350, "call life_coplevel >= 1" },
            { "H_HeadSet_red_F", "", 350, "call life_coplevel >= 1" },
            { "H_HeadSet_black_F", "", 350, "call life_coplevel >= 1" },
            { "H_HeadBandage_stained_F", "", 350, "call life_coplevel >= 1" },
            { "H_HeadBandage_clean_F", "", 350, "call life_coplevel >= 1" },
            { "H_HeadBandage_bloody_F", "", 350, "call life_coplevel >= 1" },
            { "H_Cap_White_IDAP_F", "", 350, "call life_coplevel >= 1" },
            { "H_Cap_Orange_IDAP_F", "", 350, "call life_coplevel >= 1" },
            { "H_Cap_Black_IDAP_F", "", 350, "call life_coplevel >= 1" },
            { "H_WirelessEarpiece_F", "", 350, "call life_coplevel >= 1" },
            { "H_Hat_Tinfoil_F", "", 350, "call life_coplevel >= 1" },
            { "H_Booniehat_mgrn", "", 350, "call life_coplevel >= 1" },
            { "H_Booniehat_taiga", "", 350, "call life_coplevel >= 1" },
            { "H_Booniehat_eaf", "", 350, "call life_coplevel >= 1" },
            { "H_Booniehat_wdl", "", 350, "call life_coplevel >= 1" },
            { "H_MilCap_grn", "", 350, "call life_coplevel >= 1" },
            { "H_MilCap_taiga", "", 350, "call life_coplevel >= 1" },
            { "H_MilCap_wdl", "", 350, "call life_coplevel >= 1" },
            { "H_MilCap_eaf", "", 350, "call life_coplevel >= 1" },
            { "H_Beret_blk", "", 350, "call life_coplevel >= 1" },
            { "H_Beret_gen_F", "", 350, "call life_coplevel >= 1" },
            { "H_PASGT_basic_black_F", "", 350, "call life_coplevel >= 1" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Spectacles", "", 350, "call life_coplevel >= 1" },
            { "G_Spectacles_Tinted", "", 350, "call life_coplevel >= 1" },
            { "G_Combat", "", 350, "call life_coplevel >= 1" },
            { "G_Lowprofile", "", 350, "call life_coplevel >= 1" },
            { "G_Shades_Black", "", 350, "call life_coplevel >= 1" },
            { "G_Shades_Green", "", 350, "call life_coplevel >= 1" },
            { "G_Shades_Red", "", 350, "call life_coplevel >= 1" },
            { "G_Squares", "", 350, "call life_coplevel >= 1" },
            { "G_Squares_Tinted", "", 350, "call life_coplevel >= 1" },
            { "G_Sport_BlackWhite", "", 350, "call life_coplevel >= 1" },
            { "G_Sport_Blackyellow", "", 350, "call life_coplevel >= 1" },
            { "G_Sport_Greenblack", "", 350, "call life_coplevel >= 1" },
            { "G_Sport_Checkered", "", 350, "call life_coplevel >= 1" },
            { "G_Sport_Red", "", 350, "call life_coplevel >= 1" },
            { "G_Tactical_Black", "", 350, "call life_coplevel >= 1" },
            { "G_Lady_Blue", "", 350, "call life_coplevel >= 1" },
            { "G_Goggles_VR", "", 350, "call life_coplevel >= 1" },
            { "G_Shades_Blue", "", 350, "call life_coplevel >= 1" },
            { "G_Sport_Blackred", "", 350, "call life_coplevel >= 1" },
            { "G_Tactical_Clear", "", 350, "call life_coplevel >= 1" },
            { "G_Combat_Goggles_tna_F", "", 350, "call life_coplevel >= 1" },
            { "G_Respirator_white_F", "", 350, "call life_coplevel >= 1" },
            { "G_Respirator_yellow_F", "", 350, "call life_coplevel >= 1" },
            { "G_Respirator_blue_F", "", 350, "call life_coplevel >= 1" },
            { "G_EyeProtectors_F", "", 350, "call life_coplevel >= 1" },
            { "G_EyeProtectors_Earpiece_F", "", 350, "call life_coplevel >= 1" },
            { "G_WirelessEarpiece_F", "", 350, "call life_coplevel >= 1" },
            { "G_Blindfold_01_white_F", "", 350, "call life_coplevel >= 1" },
            { "G_Blindfold_01_black_F", "", 350, "call life_coplevel >= 1" },
            { "G_B_Diving", "", 350, "call life_coplevel >= 1" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 350, "call life_coplevel >= 1" },
            { "V_TacVestIR_blk", "", 350, "call life_coplevel >= 1" },
            { "V_LegStrapBag_black_F", "", 350, "call life_coplevel >= 1" },
            { "V_TacVest_blk", "", 350, "call life_coplevel >= 1" },
            { "V_TacVest_blk_POLICE", "", 350, "call life_coplevel >= 1" },
            { "V_RebreatherB", "", 350, "call life_coplevel >= 1" },
            { "V_TacVest_gen_F", "", 350, "call life_coplevel >= 1" },
            { "V_Rangemaster_belt", "", 350, "call life_coplevel >= 1" },
            { "V_TacVestIR_blk", "", 350, "call life_coplevel >= 1" },
            { "V_LegStrapBag_black_F", "", 350, "call life_coplevel >= 1" },
            { "V_TacVest_blk", "", 350, "call life_coplevel >= 1" },
            { "V_TacVest_blk_POLICE", "", 350, "call life_coplevel >= 1" },
            { "V_RebreatherB", "", 350, "call life_coplevel >= 1" },
            { "V_TacVest_gen_F", "", 350, "call life_coplevel >= 1" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_AssaultPack_khk", "", 350, "call life_coplevel >= 1" },
            { "B_AssaultPack_dgtl", "", 350, "call life_coplevel >= 1" },
            { "B_AssaultPack_rgr", "", 350, "call life_coplevel >= 1" },
            { "B_AssaultPack_sgg", "", 350, "call life_coplevel >= 1" },
            { "B_AssaultPack_blk", "", 350, "call life_coplevel >= 1" },
            { "B_AssaultPack_cbr", "", 350, "call life_coplevel >= 1" },
            { "B_AssaultPack_mcamo", "", 350, "call life_coplevel >= 1" },
            { "B_AssaultPack_ocamo", "", 350, "call life_coplevel >= 1" },
            { "B_AssaultPack_Kerry", "", 350, "call life_coplevel >= 1" },
            { "B_AssaultPack_tna_F", "", 350, "call life_coplevel >= 1" },
            { "B_AssaultPack_wdl_F", "", 350, "call life_coplevel >= 1" },
            { "B_AssaultPack_eaf_F", "", 350, "call life_coplevel >= 1" },
            { "B_Kitbag_rgr", "", 350, "call life_coplevel >= 1" },
            { "B_Kitbag_mcamo", "", 350, "call life_coplevel >= 1" },
            { "B_Kitbag_sgg", "", 350, "call life_coplevel >= 1" },
            { "B_Kitbag_cbr", "", 350, "call life_coplevel >= 1" },
            { "B_Kitbag_tan", "", 350, "call life_coplevel >= 1" },
            { "B_FieldPack_khk", "", 350, "call life_coplevel >= 1" },
            { "B_FieldPack_ocamo", "", 350, "call life_coplevel >= 1" },
            { "B_FieldPack_oucamo", "", 350, "call life_coplevel >= 1" },
            { "B_FieldPack_cbr", "", 350, "call life_coplevel >= 1" },
            { "B_FieldPack_blk", "", 350, "call life_coplevel >= 1" },
            { "B_FieldPack_oli", "", 350, "call life_coplevel >= 1" },
            { "B_FieldPack_ghex_F", "", 350, "call life_coplevel >= 1" },
            { "B_FieldPack_green_F", "", 350, "call life_coplevel >= 1" },
            { "B_FieldPack_taiga_F", "", 350, "call life_coplevel >= 1" },
            { "B_TacticalPack_rgr", "", 350, "call life_coplevel >= 1" },
            { "B_TacticalPack_mcamo", "", 350, "call life_coplevel >= 1" },
            { "B_TacticalPack_ocamo", "", 350, "call life_coplevel >= 1" },
            { "B_TacticalPack_blk", "", 350, "call life_coplevel >= 1" },
            { "B_TacticalPack_oli", "", 350, "call life_coplevel >= 1" },
            { "B_Carryall_ocamo", "", 350, "call life_coplevel >= 1" },
            { "B_Carryall_oucamo", "", 350, "call life_coplevel >= 1" },
            { "B_Carryall_mcamo", "", 350, "call life_coplevel >= 1" },
            { "B_Carryall_khk", "", 350, "call life_coplevel >= 1" },
            { "B_Carryall_cbr", "", 350, "call life_coplevel >= 1" },
            { "B_Carryall_oli", "", 350, "call life_coplevel >= 1" },
            { "B_Carryall_ghex_F", "", 350, "call life_coplevel >= 1" },
            { "B_Carryall_green_F", "", 350, "call life_coplevel >= 1" },
            { "B_Carryall_taiga_F", "", 350, "call life_coplevel >= 1" },
            { "B_Carryall_wdl_F", "", 350, "call life_coplevel >= 1" },
            { "B_Carryall_eaf_F", "", 350, "call life_coplevel >= 1" },
            { "B_Parachute", "", 350, "call life_coplevel >= 1" },
            { "B_Respawn_TentDome_F", "", 350, "call life_coplevel >= 1" },
            { "B_Respawn_TentA_F", "", 350, "call life_coplevel >= 1" },
            { "B_Respawn_Sleeping_bag_F", "", 350, "call life_coplevel >= 1" },
            { "B_Respawn_Sleeping_bag_blue_F", "", 350, "call life_coplevel >= 1" },
            { "B_Respawn_Sleeping_bag_brown_F", "", 350, "call life_coplevel >= 1" },
            { "B_Static_Designator_01_weapon_F", "", 350, "call life_coplevel >= 1" },
            { "B_Bergen_mcamo_F", "", 350, "call life_coplevel >= 1" },
            { "B_Bergen_dgtl_F", "", 350, "call life_coplevel >= 1" },
            { "B_Bergen_hex_F", "", 350, "call life_coplevel >= 1" },
            { "B_Bergen_tna_F", "", 350, "call life_coplevel >= 1" },
            { "B_ViperHarness_blk_F", "", 350, "call life_coplevel >= 1" },
            { "B_ViperHarness_ghex_F", "", 350, "call life_coplevel >= 1" },
            { "B_ViperHarness_hex_F", "", 350, "call life_coplevel >= 1" },
            { "B_ViperHarness_khk_F", "", 350, "call life_coplevel >= 1" },
            { "B_ViperHarness_oli_F", "", 350, "call life_coplevel >= 1" },
            { "B_ViperLightHarness_blk_F", "", 350, "call life_coplevel >= 1" },
            { "B_ViperLightHarness_ghex_F", "", 350, "call life_coplevel >= 1" },
            { "B_ViperLightHarness_hex_F", "", 350, "call life_coplevel >= 1" },
            { "B_ViperLightHarness_khk_F", "", 350, "call life_coplevel >= 1" },
            { "B_ViperLightHarness_oli_F", "", 350, "call life_coplevel >= 1" },
            { "B_Patrol_Respawn_bag_F", "", 350, "call life_coplevel >= 1" },
            { "B_Messenger_Coyote_F", "", 350, "call life_coplevel >= 1" },
            { "B_Messenger_Olive_F", "", 350, "call life_coplevel >= 1" },
            { "B_Messenger_Black_F", "", 350, "call life_coplevel >= 1" },
            { "B_Messenger_Gray_F", "", 350, "call life_coplevel >= 1" },
            { "B_Messenger_IDAP_F", "", 350, "call life_coplevel >= 1" },
            { "B_LegStrapBag_black_F", "", 350, "call life_coplevel >= 1" },
            { "B_LegStrapBag_coyote_F", "", 350, "call life_coplevel >= 1" },
            { "B_LegStrapBag_olive_F", "", 350, "call life_coplevel >= 1" },
            { "B_W_Static_Designator_01_weapon_F", "", 350, "call life_coplevel >= 1" }
        };
    };

    class ctrg {
        title = "CTRG";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 120, "" },
            { "U_B_CTRG_1", "", 120, "" },
            { "U_B_CTRG_2", "", 120, "" },
            { "U_B_CTRG_3", "", 120, "" },
            { "U_B_CTRG_Soldier_F", "", 120, "" },
            { "U_B_CTRG_Soldier_2_F", "", 120, "" },
            { "U_B_CTRG_Soldier_3_F", "", 120, "" },
            { "U_B_CTRG_Soldier_urb_1_F", "", 120, "" },
            { "U_B_CTRG_Soldier_urb_2_F", "", 120, "" },
            { "U_B_CTRG_Soldier_urb_3_F", "", 120, "" },
            { "U_O_R_Gorka_01_black_F", "", 120, "" },
            { "U_B_CBRN_Suit_01_MTP_F", "", 120, "" },
            { "U_B_CBRN_Suit_01_Tropic_F", "", 120, "" },
            { "U_B_CBRN_Suit_01_Wdl_F", "", 120, "" },
            { "U_C_CBRN_Suit_01_Blue_F", "", 120, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Booniehat_khk", "", 120, "" },
            { "H_Booniehat_oli", "", 120, "" },
            { "H_Booniehat_mcamo", "", 120, "" },
            { "H_Booniehat_tan", "", 120, "" },
            { "H_Booniehat_dgtl", "", 120, "" },
            { "H_Booniehat_khk_hs", "", 120, "" },
            { "H_Cap_red", "", 120, "" },
            { "H_Cap_blu", "", 120, "" },
            { "H_Cap_oli", "", 120, "" },
            { "H_Cap_headphones", "", 120, "" },
            { "H_Cap_tan", "", 120, "" },
            { "H_Cap_blk", "", 120, "" },
            { "H_Cap_blk_CMMG", "", 120, "" },
            { "H_Cap_brn_SPECOPS", "", 120, "" },
            { "H_Cap_tan_specops_US", "", 120, "" },
            { "H_Cap_khaki_specops_UK", "", 120, "" },
            { "H_Cap_grn_BI", "", 120, "" },
            { "H_Cap_blk_Raven", "", 120, "" },
            { "H_Cap_blk_ION", "", 120, "" },
            { "H_Cap_oli_hs", "", 120, "" },
            { "H_Cap_press", "", 120, "" },
            { "H_Cap_usblack", "", 120, "" },
            { "H_Cap_surfer", "", 120, "" },
            { "H_Cap_police", "", 120, "" },
            { "H_MilCap_ocamo", "", 120, "" },
            { "H_MilCap_mcamo", "", 120, "" },
            { "H_MilCap_gry", "", 120, "" },
            { "H_MilCap_dgtl", "", 120, "" },
            { "H_MilCap_blue", "", 120, "" },
            { "H_Bandanna_surfer", "", 120, "" },
            { "H_Bandanna_khk", "", 120, "" },
            { "H_Bandanna_khk_hs", "", 120, "" },
            { "H_Bandanna_cbr", "", 120, "" },
            { "H_Bandanna_sgg", "", 120, "" },
            { "H_Bandanna_sand", "", 120, "" },
            { "H_Bandanna_surfer_blk", "", 120, "" },
            { "H_Bandanna_surfer_grn", "", 120, "" },
            { "H_Bandanna_gry", "", 120, "" },
            { "H_Bandanna_blu", "", 120, "" },
            { "H_Bandanna_camo", "", 120, "" },
            { "H_Bandanna_mcamo", "", 120, "" },
            { "H_Watchcap_blk", "", 120, "" },
            { "H_Watchcap_cbr", "", 120, "" },
            { "H_Watchcap_khk", "", 120, "" },
            { "H_Watchcap_camo", "", 120, "" },
            { "H_StrawHat", "", 120, "" },
            { "H_StrawHat_dark", "", 120, "" },
            { "H_Hat_blue", "", 120, "" },
            { "H_Hat_brown", "", 120, "" },
            { "H_Hat_camo", "", 120, "" },
            { "H_Hat_grey", "", 120, "" },
            { "H_Hat_checker", "", 120, "" },
            { "H_Hat_tan", "", 120, "" },
            { "H_Cap_marshal", "", 120, "" },
            { "H_MilCap_tna_F", "", 120, "" },
            { "H_MilCap_ghex_F", "", 120, "" },
            { "H_Booniehat_tna_F", "", 120, "" },
            { "H_MilCap_gen_F", "", 120, "" },
            { "H_Hat_Safari_sand_F", "", 120, "" },
            { "H_Hat_Safari_olive_F", "", 120, "" },
            { "H_EarProtectors_yellow_F", "", 120, "" },
            { "H_EarProtectors_white_F", "", 120, "" },
            { "H_EarProtectors_orange_F", "", 120, "" },
            { "H_EarProtectors_red_F", "", 120, "" },
            { "H_EarProtectors_black_F", "", 120, "" },
            { "H_HeadSet_yellow_F", "", 120, "" },
            { "H_HeadSet_white_F", "", 120, "" },
            { "H_HeadSet_orange_F", "", 120, "" },
            { "H_HeadSet_red_F", "", 120, "" },
            { "H_HeadSet_black_F", "", 120, "" },
            { "H_HeadBandage_stained_F", "", 120, "" },
            { "H_HeadBandage_clean_F", "", 120, "" },
            { "H_HeadBandage_bloody_F", "", 120, "" },
            { "H_Cap_White_IDAP_F", "", 120, "" },
            { "H_Cap_Orange_IDAP_F", "", 120, "" },
            { "H_Cap_Black_IDAP_F", "", 120, "" },
            { "H_WirelessEarpiece_F", "", 120, "" },
            { "H_Hat_Tinfoil_F", "", 120, "" },
            { "H_Booniehat_mgrn", "", 120, "" },
            { "H_Booniehat_taiga", "", 120, "" },
            { "H_Booniehat_eaf", "", 120, "" },
            { "H_Booniehat_wdl", "", 120, "" },
            { "H_MilCap_grn", "", 120, "" },
            { "H_MilCap_taiga", "", 120, "" },
            { "H_MilCap_wdl", "", 120, "" },
            { "H_MilCap_eaf", "", 120, "" },
            { "H_Beret_blk", "", 120, "" },
            { "H_Beret_gen_F", "", 120, "" },
            { "H_PASGT_basic_black_F", "", 120, "" },
            { "H_Shemag_olive", "", 120, "" },
            { "H_Shemag_olive_hs", "", 120, "" },
            { "H_ShemagOpen_khk", "", 120, "" },
            { "H_ShemagOpen_tan", "", 120, "" },
            { "H_Beret_02", "", 120, "" },
            { "H_Beret_Colonel", "", 120, "" },
            { "H_HelmetB_TI_tna_F", "", 120, "" },
            { "H_PASGT_basic_blue_F", "", 120, "" },
            { "H_HelmetB", "", 120, "" },
            { "H_HelmetB_black", "", 120, "" },
            { "H_Cap_grn", "", 120, "" },
            { "H_HelmetB_tna_F", "", 120, "" },
            { "H_HelmetB_plain_wdl", "", 120, "" },
            { "H_HelmetSpecB", "", 120, "" },
            { "H_HelmetSpecB_blk", "", 120, "" },
            { "H_HelmetB_Enh_tna_F", "", 120, "" },
            { "H_HelmetSpecB_wdl", "", 120, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Spectacles", "", 120, "" },
            { "G_Spectacles_Tinted", "", 120, "" },
            { "G_Combat", "", 120, "" },
            { "G_Lowprofile", "", 120, "" },
            { "G_Shades_Black", "", 120, "" },
            { "G_Shades_Green", "", 120, "" },
            { "G_Shades_Red", "", 120, "" },
            { "G_Squares", "", 120, "" },
            { "G_Squares_Tinted", "", 120, "" },
            { "G_Sport_BlackWhite", "", 120, "" },
            { "G_Sport_Blackyellow", "", 120, "" },
            { "G_Sport_Greenblack", "", 120, "" },
            { "G_Sport_Checkered", "", 120, "" },
            { "G_Sport_Red", "", 120, "" },
            { "G_Tactical_Black", "", 120, "" },
            { "G_Lady_Blue", "", 120, "" },
            { "G_Goggles_VR", "", 120, "" },
            { "G_Shades_Blue", "", 120, "" },
            { "G_Sport_Blackred", "", 120, "" },
            { "G_Tactical_Clear", "", 120, "" },
            { "G_Combat_Goggles_tna_F", "", 120, "" },
            { "G_Respirator_white_F", "", 120, "" },
            { "G_Respirator_yellow_F", "", 120, "" },
            { "G_Respirator_blue_F", "", 120, "" },
            { "G_EyeProtectors_F", "", 120, "" },
            { "G_EyeProtectors_Earpiece_F", "", 120, "" },
            { "G_WirelessEarpiece_F", "", 120, "" },
            { "G_Blindfold_01_white_F", "", 120, "" },
            { "G_Blindfold_01_black_F", "", 120, "" },
            { "G_B_Diving", "", 120, "" },
            { "G_Balaclava_blk", "", 120, "" },
            { "G_Balaclava_oli", "", 120, "" },
            { "G_Balaclava_combat", "", 120, "" },
            { "G_Balaclava_lowprofile", "", 120, "" },
            { "G_Bandanna_blk", "", 120, "" },
            { "G_Bandanna_oli", "", 120, "" },
            { "G_Bandanna_khk", "", 120, "" },
            { "G_Bandanna_tan", "", 120, "" },
            { "G_Bandanna_beast", "", 120, "" },
            { "G_Bandanna_shades", "", 120, "" },
            { "G_Bandanna_sport", "", 120, "" },
            { "G_Bandanna_aviator", "", 120, "" },
            { "G_Balaclava_TI_blk_F", "", 120, "" },
            { "G_Balaclava_TI_tna_F", "", 120, "" },
            { "G_Balaclava_TI_G_blk_F", "", 120, "" },
            { "G_Balaclava_TI_G_tna_F", "", 120, "" },
            { "G_AirPurifyingRespirator_01_F", "", 120, "" },
            { "G_AirPurifyingRespirator_02_black_F", "", 120, "" },
            { "G_AirPurifyingRespirator_02_olive_F", "", 120, "" },
            { "G_AirPurifyingRespirator_02_sand_F", "", 120, "" },
            { "G_RegulatorMask_F", "", 120, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 120, "" },
            { "V_TacVestIR_blk", "", 120, "" },
            { "V_LegStrapBag_black_F", "", 120, "" },
            { "V_TacVest_blk", "", 120, "" },
            { "V_TacVest_blk_POLICE", "", 120, "" },
            { "V_RebreatherB", "", 120, "" },
            { "V_TacVest_gen_F", "", 120, "" },
            { "V_PlateCarrier1_rgr", "", 120, "" },
            { "V_PlateCarrier1_blk", "", 120, "" },
            { "V_PlateCarrier_Kerry", "", 120, "" },
            { "V_PlateCarrierL_CTRG", "", 120, "" },
            { "V_PlateCarrier1_tna_F", "", 120, "" },
            { "V_PlateCarrier1_rgr_noflag_F", "", 120, "" },
            { "V_PlateCarrier1_wdl", "", 120, "" },
            { "V_Rangemaster_belt", "", 120, "" },
            { "V_TacVestIR_blk", "", 120, "" },
            { "V_LegStrapBag_black_F", "", 120, "" },
            { "V_TacVest_blk", "", 120, "" },
            { "V_TacVest_blk_POLICE", "", 120, "" },
            { "V_RebreatherB", "", 120, "" },
            { "V_TacVest_gen_F", "", 120, "" },
            { "V_PlateCarrier1_rgr", "", 120, "" },
            { "V_PlateCarrier1_blk", "", 120, "" },
            { "V_PlateCarrier_Kerry", "", 120, "" },
            { "V_PlateCarrierL_CTRG", "", 120, "" },
            { "V_PlateCarrier1_tna_F", "", 120, "" },
            { "V_PlateCarrier1_rgr_noflag_F", "", 120, "" },
            { "V_PlateCarrier1_wdl", "", 120, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_AssaultPack_khk", "", 120, "" },
            { "B_AssaultPack_dgtl", "", 120, "" },
            { "B_AssaultPack_rgr", "", 120, "" },
            { "B_AssaultPack_sgg", "", 120, "" },
            { "B_AssaultPack_blk", "", 120, "" },
            { "B_AssaultPack_cbr", "", 120, "" },
            { "B_AssaultPack_mcamo", "", 120, "" },
            { "B_AssaultPack_ocamo", "", 120, "" },
            { "B_AssaultPack_Kerry", "", 120, "" },
            { "B_AssaultPack_tna_F", "", 120, "" },
            { "B_AssaultPack_wdl_F", "", 120, "" },
            { "B_Kitbag_rgr", "", 120, "" },
            { "B_Kitbag_mcamo", "", 120, "" },
            { "B_Kitbag_sgg", "", 120, "" },
            { "B_Kitbag_cbr", "", 120, "" },
            { "B_Kitbag_tan", "", 120, "" },
            { "B_FieldPack_khk", "", 120, "" },
            { "B_FieldPack_ocamo", "", 120, "" },
            { "B_FieldPack_oucamo", "", 120, "" },
            { "B_FieldPack_cbr", "", 120, "" },
            { "B_FieldPack_blk", "", 120, "" },
            { "B_FieldPack_oli", "", 120, "" },
            { "B_FieldPack_ghex_F", "", 120, "" },
            { "B_FieldPack_green_F", "", 120, "" },
            { "B_FieldPack_taiga_F", "", 120, "" },
            { "B_TacticalPack_rgr", "", 120, "" },
            { "B_TacticalPack_mcamo", "", 120, "" },
            { "B_TacticalPack_ocamo", "", 120, "" },
            { "B_TacticalPack_blk", "", 120, "" },
            { "B_TacticalPack_oli", "", 120, "" },
            { "B_Carryall_ocamo", "", 120, "" },
            { "B_Carryall_oucamo", "", 120, "" },
            { "B_Carryall_mcamo", "", 120, "" },
            { "B_Carryall_khk", "", 120, "" },
            { "B_Carryall_cbr", "", 120, "" },
            { "B_Carryall_oli", "", 120, "" },
            { "B_Carryall_ghex_F", "", 120, "" },
            { "B_Carryall_green_F", "", 120, "" },
            { "B_Carryall_taiga_F", "", 120, "" },
            { "B_Carryall_wdl_F", "", 120, "" },
            { "B_Carryall_eaf_F", "", 120, "" },
            { "B_Respawn_TentDome_F", "", 120, "" },
            { "B_Respawn_TentA_F", "", 120, "" },
            { "B_Respawn_Sleeping_bag_F", "", 120, "" },
            { "B_Respawn_Sleeping_bag_blue_F", "", 120, "" },
            { "B_Respawn_Sleeping_bag_brown_F", "", 120, "" },
            { "B_Static_Designator_01_weapon_F", "", 120, "" },
            { "B_Bergen_mcamo_F", "", 120, "" },
            { "B_Bergen_dgtl_F", "", 120, "" },
            { "B_Bergen_hex_F", "", 120, "" },
            { "B_Bergen_tna_F", "", 120, "" },
            { "B_ViperHarness_blk_F", "", 120, "" },
            { "B_ViperHarness_ghex_F", "", 120, "" },
            { "B_ViperHarness_hex_F", "", 120, "" },
            { "B_ViperHarness_khk_F", "", 120, "" },
            { "B_ViperHarness_oli_F", "", 120, "" },
            { "B_ViperLightHarness_blk_F", "", 120, "" },
            { "B_ViperLightHarness_ghex_F", "", 120, "" },
            { "B_ViperLightHarness_hex_F", "", 120, "" },
            { "B_ViperLightHarness_khk_F", "", 120, "" },
            { "B_ViperLightHarness_oli_F", "", 120, "" },
            { "B_Patrol_Respawn_bag_F", "", 120, "" },
            { "B_Messenger_Coyote_F", "", 120, "" },
            { "B_Messenger_Olive_F", "", 120, "" },
            { "B_Messenger_Black_F", "", 120, "" },
            { "B_Messenger_Gray_F", "", 120, "" },
            { "B_Messenger_IDAP_F", "", 120, "" },
            { "B_LegStrapBag_black_F", "", 120, "" },
            { "B_LegStrapBag_coyote_F", "", 120, "" },
            { "B_LegStrapBag_olive_F", "", 120, "" },
            { "B_W_Static_Designator_01_weapon_F", "", 120, "" },
            { "B_Parachute", "", 120, "" }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 4900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_BandollierB_khk", "", 120, "" },
            { "V_BandollierB_cbr", "", 120, "" },
            { "V_BandollierB_rgr", "", 120, "" },
            { "V_BandollierB_blk", "", 120, "" },
            { "V_BandollierB_oli", "", 120, "" },
            { "V_Chestrig_khk", "", 120, "" },
            { "V_Chestrig_rgr", "", 120, "" },
            { "V_Chestrig_blk", "", 120, "" },
            { "V_Chestrig_oli", "", 120, "" },
            { "V_TacVestIR_blk", "", 120, "" },
            { "V_HarnessO_brn", "", 120, "" },
            { "V_HarnessOGL_brn", "", 120, "" },
            { "V_HarnessO_gry", "", 120, "" },
            { "V_HarnessOGL_gry", "", 120, "" },
            { "V_TacChestrig_grn_F", "", 120, "" },
            { "V_TacChestrig_oli_F", "", 120, "" },
            { "V_TacChestrig_cbr_F", "", 120, "" },
            { "V_HarnessO_ghex_F", "", 120, "" },
            { "V_HarnessOGL_ghex_F", "", 120, "" },
            { "V_BandollierB_ghex_F", "", 120, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_Rangemaster", $STR_C_EMS_uniforms, 50, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_blu", "", 10, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Blue", "", 10, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_FieldPack_oli", $STR_C_EMS_backpacks, 3000, "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_IG_Guerilla1_1", "", 5000, "" },
            { "U_I_G_Story_Protagonist_F", "", 7500, "" },
            { "U_I_G_resistanceLeader_F", "", 11500, "" },
            { "U_IG_leader", "", 15340, "" },
            { "U_O_PilotCoveralls", "", 15610, "" },
            { "U_O_SpecopsUniform_ocamo", "", 17500, "" },
            { "U_O_GhillieSuit", "", 50000, "" },
            { "U_B_T_Soldier_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_1_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_2_F", "", 51000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_3_F", "", 50032, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_4_F", "", 50020, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_5_F", "", 50020, "" }, //Apex DLC
            { "U_I_C_Soldier_Camo_F", "", 52000, "" } //Apex DLC
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 650, "" },
            { "H_ShemagOpen_khk", "", 800, "" },
            { "H_ShemagOpen_tan", "", 850, "" },
            { "H_Shemag_olive", "", 850, "" },
            { "H_HelmetO_ocamo", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_BandollierB_cbr", "", 4500, "" },
            { "V_HarnessO_brn", "", 7500, "" },
            { "V_TacVest_khk", "", 12500, "" },
            { "V_TacChestrig_grn_F", "", 17500, "" } //Apex DLC
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_2", "", 3500, "" },
            { "U_C_Driver_1", "", 3600, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
};
