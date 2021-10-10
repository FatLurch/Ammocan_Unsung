# Ammocan Unsung
 This addon extends the fuinctionality of my Ammocan addon in order to support the Unsung DLC for ARMA 3
 
 Original Ammocan on GitHub: https://github.com/FatLurch/Ammocan
 
 Ammocan on Steam: https://steamcommunity.com/sharedfiles/filedetails/?id=2162698437
 
 Ammocan Unsung on Steam: https://steamcommunity.com/sharedfiles/filedetails/?id=2611652823
 
 It also serves as an example to illustrate how others can use Ammocan as a framework to support ammo from other addons


**Troubleshooting:**

- Ensure your ammocan is listed in the resultant array when you enter this command into the debug console: `getArray (configFile >> "cfgWeapons" >> "ammocan_fake_gun" >> "magazines")`; 
If your item doens't show up, ensure it's listed in the ammocan_fake_gun magazines array: https://github.com/FatLurch/Ammocan_Unsung/blob/4a84e780ce2ef2ffaa2378f75eafd7e2c877b636/config.cpp#L47

- Ensure you get back the name of an ammocan when you enter `["yourMagazineName"] call fatLurch_fnc_findAmmocanType;` into the debug console. If you get `""` as a result, your ammocan is not correctly defined

- The magazine you define in any new ammocan must actually be compatible with the turret weapon you're trying to use 
