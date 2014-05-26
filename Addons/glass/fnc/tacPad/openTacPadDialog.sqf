createDialog "IP_DLG_TACPAD";

if (player getVariable ["IP_Camo_On", true]) then {((findDisplay 40000) displayCtrl 1602) ctrlSetText "Active camo Off"};
if (player getVariable ["IP_Glass_Boot", false]) then {((findDisplay 40000) displayCtrl 1603) ctrlSetText "Glass Off"};
if (player getVariable ["IP_Glass_Core", false]) then {((findDisplay 40000) displayCtrl 1606) ctrlSetText "Glass Core Off"};
if (player getVariable ["IP_Glass_Status", false]) then {((findDisplay 40000) displayCtrl 1604) ctrlSetText "Glass Status Off"};
if (player getVariable ["IP_Glass_Details", false]) then {((findDisplay 40000) displayCtrl 1605) ctrlSetText "Glass Details Off"};