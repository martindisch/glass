#define CHECK ((alive player) && (goggles player in _goggles) && (player getVariable ["IP_Glass_Boot", false]) && (player getVariable ["IP_Glass_Core", false]))

_goggles = _this select 0;

while {CHECK} do {
	_glassDistance = player distance (screenToWorld [0.5,0.5]);
	_glassPosition = mapGridPosition player;
	[format ["<t size='0.5'>RNG: %2 M                          HDG: %1                          GRID: %3", direction player, _glassDistance, _glassPosition],-0,-0.4,1,0,0,99999] spawn bis_fnc_dynamictext;
	sleep 0.5;
};