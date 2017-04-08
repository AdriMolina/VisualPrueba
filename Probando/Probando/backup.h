#pragma once  //______________________________________ Probando.h  
#include "Resource.h"
#include "FabiDlg.h"
#include "AdiiDlg.h"
class Probando: public Win::Window
{
public:
	Probando()
	{
	}
	~Probando()
	{
	}
	const wchar_t * GetClassName(){return L"Probando";}
	Win::Menu menu;
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
protected:
	void GetWindowInformation(CREATESTRUCT& createStruct)
	{
		createStruct.style = WS_CLIPCHILDREN | WS_OVERLAPPEDWINDOW;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Probando";
	}
	//_________________________________________________
	void Window_Open(Win::Event& e);
	void Cmd_About(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (this->IsEvent(e, IDM_ABOUT)) {Cmd_About(e); return true;}
		return false;
	}
};
