if (player getVariable ["IP_Camo_On", true]) then {
	// Saves loadout of player into var loadout
	loadout = [player] call IP_fnc_getLoadout;

	// Sets player's loadout from var loadout
	[player, loadout] call IP_fnc_setLoadout;
	
	player setVariable ["IP_Camo_On", false];
	((findDisplay 40000) displayCtrl 1602) ctrlSetText "Active camo On";
} else {
	pipCam = "camera" camCreate getPos player;
	pipCam camSetTarget player; 
	pipCam camSetFov 0.25;
	pipCam cameraEffect ["INTERNAL", "BACK", "rendertarget0"];
	pipCam attachTo [player, [0,0,15]];
	pipCam camCommit 0;
	player setObjectTextureGlobal [0, "#(argb,512,512,1)r2t(rendertarget0,1.0)­"];
	
	player setVariable ["IP_Camo_On", true];
	((findDisplay 40000) displayCtrl 1602) ctrlSetText "Active camo Off";
}