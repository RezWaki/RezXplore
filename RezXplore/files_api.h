#include <Windows.h>
#include <fstream>
#include <msclr\marshal.h>

using namespace msclr::interop;
using namespace System::Runtime::InteropServices;
using namespace System;
using namespace System::Windows::Forms;
using namespace std;

class CFile{
public:
	BOOL isFile( String^ path );
	array<String^, 1>^ FmtFileList( String^ path );
	array<String^, 1>^ DatelessFileList( String^ path );
};