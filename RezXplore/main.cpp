#include <Windows.h>
#include "xplore.h"
#pragma comment( lib, "user32.lib" )

using namespace System;
using namespace System::Windows::Forms;
using namespace RezXplore;

INT WINAPI WinMain( HINSTANCE, HINSTANCE, LPSTR, BOOL ) {
	Application::EnableVisualStyles();
	Application::Run( gcnew xplore );
	return TRUE;
}