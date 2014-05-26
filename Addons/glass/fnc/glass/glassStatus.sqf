#define CHECK ((alive player) && (goggles player in _goggles) && (player getVariable ["IP_Glass_Boot", false]) && (player getVariable ["IP_Glass_Status", false]))

private "_bearing";
_goggles = _this select 0;
65 cutRsc ["IP_DLG_GLASSSTATUS", "PLAIN"];

while {CHECK} do {
	_pos = getPos player;
	_bearing = getDir player;
	_fatigue = getFatigue player;
	_damage = damage player;
	
	_grid = mapGridPosition _pos;
	
	if (_bearing < 0) then {_bearing = _bearing + 360};	
	_heading = switch (true) do  
	{ 
		case (_bearing <= 22.5 || _bearing > 337.5): {"N"};  
		case (_bearing > 22.5 && _bearing <= 67.5): {"NE"};  
		case (_bearing > 67.5 && _bearing <= 112.5 ): {"E"};  
		case (_bearing > 112.5 && _bearing <= 157.5): {"SE"};  
		case (_bearing > 157.5 && _bearing <= 202.5): {"S"};  
		case (_bearing > 202.5 && _bearing <= 247.5): {"SW"};  
		case (_bearing > 247.5 && _bearing <= 292.5): {"W"};  
		case (_bearing > 292.5 && _bearing <= 337.5): {"NW"};     
		default {"N"};
	};
	
	_add = if (_fatigue > 0) then {40 * (_fatigue * 2)} else {0};
	_pulse = str(80 + (round _add));
	_add = if (_fatigue > 0) then {25 * (_fatigue * 2)} else {0};
	_breathing = str(15 + (round _add));
	
	((uiNamespace getVariable "DLG_GlassStatus") displayCtrl 1100) ctrlSetStructuredText (parseText ("Grid: " + _grid));
	((uiNamespace getVariable "DLG_GlassStatus") displayCtrl 1102) ctrlSetStructuredText (parseText ("Heading: " + _heading));
	((uiNamespace getVariable "DLG_GlassStatus") displayCtrl 1103) ctrlSetStructuredText (parseText ("Pulse: " + _pulse + "/min"));
	((uiNamespace getVariable "DLG_GlassStatus") displayCtrl 1104) ctrlSetStructuredText (parseText ("Breathing: " + _breathing + "/min"));
	
	_condition = if (_damage > 0) then {
		if (_damage > 0.7) then {
			((uiNamespace getVariable "DLG_GlassStatus") displayCtrl 1101) ctrlSetStructuredText (parseText ("Condition: " + "<t color='#FFFF00'>CRITICAL</t>"));
			sleep 0.5;
			"<t color='#FF0000'>CRITICAL</t>"
		} else {
			"<t color='#FFFF00'>Wounded</t>"
		}
	} else {
		"Healthy"
	};
	
	((uiNamespace getVariable "DLG_GlassStatus") displayCtrl 1101) ctrlSetStructuredText (parseText ("Condition: " + _condition));
	
	sleep 0.5;
};

65 cutText ["", "PLAIN"];