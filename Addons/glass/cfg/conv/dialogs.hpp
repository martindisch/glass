class rscTitles
{
	// Include Dictionary Rsc - idd = 20002
	#include "\glass\cfg\dict\dialogs.hpp"
	
	// Include Glass Details - idds = 20004, 20005, 20006
	#include "\glass\cfg\glass\dialogs.hpp"
	
	class IP_DLG_SIMPLESENTENCE
	{
		idd = 20000;
		movingenable = false;
		duration = 1e+1000;
		onLoad = "UINamespace setVariable ['DLG_SimpleSentence', _this select 0]"; 		
		
		class Controls
		{
			class IP_BOX_MAIN: BOX
			{
				idc = -1;
				text = ""; //--- ToDo: Localize;
				x = 0.5 * GUI_GRID_W + GUI_GRID_X;
				y = 19.5 * GUI_GRID_H + GUI_GRID_Y;
				w = 39 * GUI_GRID_W;
				h = 4 * GUI_GRID_H;
			};
			
			////////////////////////////////////////////////////////
			// GUI EDITOR OUTPUT START (by IndeedPete, v1.063, #Cyvode)
			////////////////////////////////////////////////////////

			class RscFrame_1800: RscFrame
			{
				idc = 1800;
				x = 0.5 * GUI_GRID_W + GUI_GRID_X;
				y = 19.5 * GUI_GRID_H + GUI_GRID_Y;
				w = 39 * GUI_GRID_W;
				h = 4 * GUI_GRID_H;
			};
			class RscPicture_1200: RscPicture
			{
				idc = 1200;
				text = "#(argb,256,256,1)r2t(camrender0,1.0)";
				x = 1 * GUI_GRID_W + GUI_GRID_X;
				y = 20 * GUI_GRID_H + GUI_GRID_Y;
				w = 5 * GUI_GRID_W;
				h = 3 * GUI_GRID_H;
			};
			class RscStructuredText_1100: RscStructuredText
			{
				idc = 1100;
				x = 6.5 * GUI_GRID_W + GUI_GRID_X;
				y = 20 * GUI_GRID_H + GUI_GRID_Y;
				w = 32.5 * GUI_GRID_W;
				h = 3 * GUI_GRID_H;
			};
			////////////////////////////////////////////////////////
			// GUI EDITOR OUTPUT END
			////////////////////////////////////////////////////////
		};
	};
};

class IP_DLG_CONVERSATION
{
    idd = 20001;
    movingenable = true;   
    
    class Controls
    {
		class IP_BOX_MAIN: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 0 * GUI_GRID_H + GUI_GRID_Y;
			w = 40 * GUI_GRID_W;
			h = 25 * GUI_GRID_H;
		};
		
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by IndeedPete, v1.063, #Momuqa)
		////////////////////////////////////////////////////////

		class IP_FRM_CONVERSATION: RscFrame
		{
			idc = 1800;
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 0 * GUI_GRID_H + GUI_GRID_Y;
			w = 40 * GUI_GRID_W;
			h = 25 * GUI_GRID_H;
		};
		class IP_PIC_FIRST: RscPicture
		{
			idc = 1200;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 1 * GUI_GRID_W + GUI_GRID_X;
			y = 1 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 4 * GUI_GRID_H;
		};
		class IP_PIC_SECOND: RscPicture
		{
			idc = 1201;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 33 * GUI_GRID_W + GUI_GRID_X;
			y = 1 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 4 * GUI_GRID_H;
		};
		class IP_STX_CONVERSATION: RscStructuredText
		{
			idc = 1100;
			text = ""; //--- ToDo: Localize;
			x = 9 * GUI_GRID_W + GUI_GRID_X;
			y = 1 * GUI_GRID_H + GUI_GRID_Y;
			w = 22 * GUI_GRID_W;
			h = 18 * GUI_GRID_H;
		};
		class IP_LSB_RESPONSES: RscListbox
		{
			idc = 1500;
			x = 1 * GUI_GRID_W + GUI_GRID_X;
			y = 20 * GUI_GRID_H + GUI_GRID_Y;
			w = 38 * GUI_GRID_W;
			h = 4 * GUI_GRID_H;
			onLBSelChanged = "((_this select 0) lbData (_this select 1)) call IP_fnc_selectResponse";
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////
	};
};