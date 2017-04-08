#include "stdafx.h"  //________________________________________ Probando.cpp
#include "Probando.h"
#include "AboutDlg.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Probando app;
	app.CreateMainWindow(L"Probando", cmdShow, IDI_Probando, IDC_Probando, (HBRUSH)(COLOR_WINDOW+1), hInstance);
	return app.MessageLoop(IDC_Probando);
}

void Probando::Window_Open(Win::Event& e)
{
	// Use Resource View to edit the menu
	menu.Attach(hWnd, false);
}

void Probando::Cmd_About(Win::Event& e)
{
	AboutDlg dlg;
	dlg.BeginDialog(hWnd);
}

