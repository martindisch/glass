class IP_DLG_TACPAD
{
    idd = 40000;
    movingenable = true;   
    
    class Controls
    {
		class IP_BOX_MAIN: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 29.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 9.5 * GUI_GRID_W;
			h = 13 * GUI_GRID_H;
		};
		
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by Bender, v1.063, #Hetowu)
		////////////////////////////////////////////////////////

		class IP_FRM_CONTROL: RscFrame
		{
			idc = 1802;
			text = "Equipment Control"; //--- ToDo: Localize;
			x = 29.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 9.5 * GUI_GRID_W;
			h = 13 * GUI_GRID_H;
		};
		class IP_BTN_GLASSONOFF: RscButton
		{
			idc = 1603;
			text = "Glass On"; //--- ToDo: Localize;
			x = 30 * GUI_GRID_W + GUI_GRID_X;
			y = 5.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 8.5 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
			action = "nul = [] spawn IP_fnc_glassBoot";
		};
		class IP_BTN_GLASSSTATUSONOFF: RscButton
		{
			idc = 1604;
			text = "Glass Status On"; //--- ToDo: Localize;
			x = 30 * GUI_GRID_W + GUI_GRID_X;
			y = 10.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 8.5 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
			action = "nul = ['IP_Glass_Status'] spawn IP_fnc_glassDeActivate";
		};
		class IP_BTN_GLASSDETAILSONOFF: RscButton
		{
			idc = 1605;
			text = "Glass Details On"; //--- ToDo: Localize;
			x = 30 * GUI_GRID_W + GUI_GRID_X;
			y = 13 * GUI_GRID_H + GUI_GRID_Y;
			w = 8.5 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
			action = "nul = ['IP_Glass_Details'] spawn IP_fnc_glassDeActivate";
		};
		class IP_BTN_GLASSCOREONOFF: RscButton
		{
			idc = 1606;
			text = "Glass Core On"; //--- ToDo: Localize;
			x = 30 * GUI_GRID_W + GUI_GRID_X;
			y = 8 * GUI_GRID_H + GUI_GRID_Y;
			w = 8.5 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
			action = "nul = ['IP_Glass_Core'] spawn IP_fnc_glassDeActivate";
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////
	};
};