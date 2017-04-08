#pragma once   //_____________________________________________ FabiDlg.h  
#include "resource.h"

class FabiDlg : public Win::Dialog
{
public:
	FabiDlg()
	{
	}
	~FabiDlg()
	{
	}
private:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbxMsj;
	Win::Label lb1;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::CentimetersToDlgUnitX(10.16000);
		dlgTemplate.cy = Sys::Convert::CentimetersToDlgUnitY(2.54000);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		tbxMsj.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 4.04812, 1.74625, 5.92667, 0.60854, hWnd, 1000);
		lb1.CreateX(NULL, L"Mensaje", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 1.42875, 1.66688, 2.19604, 0.60854, hWnd, 1001);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		tbxMsj.Font = fontArial009A;
		lb1.Font = fontArial009A;
	}
	//_________________________________________________
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		return false;
	}
};
