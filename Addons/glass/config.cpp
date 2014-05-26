#include "\glass\cfg\defines.hpp"
#include "\glass\cfg\functions.hpp"
#include "\glass\cfg\mainValues.hpp"
#include "\glass\cfg\tacPad\dialogs.hpp"
#include "\glass\cfg\conv\dialogs.hpp"

class CfgPatches
{
	class glass
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"Extended_EventHandlers"};

	};
};

class Extended_PostInit_EventHandlers
{
  glass_Post_Init = "glass_Post_Init_Var = [] execVM '\glass\init.sqf'";
};