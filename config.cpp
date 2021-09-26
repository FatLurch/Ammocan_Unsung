class CfgPatches
 {
 	class Fat_Lurch_Ammocan_Unsung	//If you're using this file as a template, make this classname unique. I'd recommend "yourName_ammocan"
 	{
 		units[] = {};	
 		weapons[] = {};
 		requiredVersion = 0.1;
 		requiredAddons[] = {"A3_Weapons_F_Mark","Fat_Lurch_Ammocan"};	//You don't have to list any additional addons here in order for the system to work
		version="0.1";
		author="Fat_Lurch";
 	};
 };
 
//required for Zeus to see the item?
class CfgAddons 
{
	class PreloadAddons 
	{
		class Fat_Lurch_Ammocan_Unsung	//If you're using this file as a template, make this classname unique. I'd recommend "yourName_ammocan"
		{
			list[] = 
			{
				"Fat_Lurch_Ammocan_Unsung"	//This needs to match the classname in line 3
			};
		};
	};
};



// ##############################################################################################
// ######  IMPORTANT! In order for an ammocan type to show up in rifle magazines it must be listed in the array below
// ##############################################################################################
class cfgWeapons
{
	class Rifle_Base_F;
	class ammocan_fake_gun:Rifle_Base_F
	{
		magazines[] +=
		{
			//This array must contain a list of newly defined ammocans below in order for them to show up in inventory
			"Ammocan_vn_m60_v_100_mag", 
			"Ammocan_vn_m2_v_100_mag",
			"Ammocan_vn_m134_v_2000_mag"
		};
	};
};

class CfgMagazines
 {
 	// Base Config Setup #############################################################################################
 	
 	class ammocan_base;		//required for inheritence 	

 	 // 100x 7.62x51mm =====================================================================================================	
 	//This example shows how to add an entire new class to ammocan
 	class Ammocan_vn_m60_v_100_mag:ammocan_base	//this name should be unique and must inherit ammocan_base
 	{
 		//Unsung
		displayName = "Ammocan (Unsung) - 100x 7.62x51mm belt";
		descriptionShort = "Ammocan<br>Caliber: 7.62x51mm<br>100 Rounds (Belt)";
		magazines[] = {"vn_m60_v_100_mag"};		//This is an array of magazines in game that this ammocan should be compatible with
	};
	
	// 100x 12.7x99mm (aka 50 BMG) =====================================================================================================
 	class Ammocan_vn_m2_v_100_mag:ammocan_base	
 	{
 		//Unsung
		displayName = "Ammocan (Unsung) - 100x 12.7x99mm belt";
		descriptionShort = "Ammocan<br>Caliber: 12.7x99<br>100 Rounds (Belt)";
		magazines[] = {"vn_m2_v_100_mag"};		
	};
 	
 	// 2000x 7.62x54mm  =====================================================================================================
 	class Ammocan_vn_m134_v_2000_mag:ammocan_base	
 	{
 		//Unsung
		displayName = "Ammocan (Unsung) - 2000x 7.62x54mm";
		descriptionShort = "Ammocan<br>Caliber: 7.62x54<br>2000 Rounds";
		magazines[] = {"vn_m134_v_2000_mag"};		
	};
	
	
	
	/*	EXAMPLE - this shows how to update an existing class within ammocan to include another supported ammo type (e.g. from another addon)
	
	// class Ammocan_100Rnd_127x99_mag_Tracer_Red	//this is a class that already exists in the base ammocan addon (in config.cpp)
 	{
		magazines[] += {"myNewTypeofAmmo","vn_m2_v_100_mag"};	//In this case, the existing definition for Ammocan_100Rnd_127x99_mag_Tracer_Red would be updated so that it supports the two new types of ammo defined in the magazines array
	};
	
	*/
 };



