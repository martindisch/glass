waitUntil { !isNull player }; // Wait for player to initialize

player setVariable ["IP_Camo_On", false];
player addGoggles "G_Tactical_Black";
player addAction ["Open TacPad", "\glass\fnc\tacPad\openTacPadDialog.sqf"];