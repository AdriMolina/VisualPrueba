#pragma once   //_____________________________________________ AdiiDlg.h  
#include "resource.h"

class AdiiDlg : public Win::Dialog
{
public:
	AdiiDlg()
	{
	}
	~AdiiDlg()
	{
	}
private:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Button btBoton;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::CentimetersToDlgUnitX(10.71563);
		dlgTemplate.cy = Sys::Convert::CentimetersToDlgUnitY(5.82083);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		btBoton.CreateX(NULL, L"Si hay cambios", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 5.42396, 4.94771, 5.10646, 0.68792, hWnd, 1000);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		btBoton.Font = fontArial009A;
	}
	//_________________________________________________
	void btBoton_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btBoton.IsEvent(e, BN_CLICKED)) { btBoton_Click(e); return true; }
		return false;
	}
};
