#include "files_api.h"

INT i, date_day, date_month, date_year;

array<String^, 1>^ CFile::FmtFileList( String^ path ) {
	array<String^, 1>^ original_files, ^fmt_files;
	original_files = IO::Directory::GetFileSystemEntries( path );
	fmt_files = gcnew array<String^, 1>(original_files->Length);
	for( i = 0; i < original_files->Length; i++ ) {
		if( !isFile( original_files[i] ) ) {
			fmt_files[i] = "[DIR] " + original_files[i]->Substring(path->Length, original_files[i]->Length-path->Length);
			date_day = IO::Directory::GetCreationTime( original_files[i] ).Day;
			date_month = IO::Directory::GetCreationTime( original_files[i] ).Month;
			date_year = IO::Directory::GetCreationTime( original_files[i] ).Year;
			fmt_files[i] += " [" + date_day + "/" + date_month + "/" + date_year + "]";
		}
		else{
			fmt_files[i] = "[FILE] " + original_files[i]->Substring(path->Length, original_files[i]->Length-path->Length);
			date_day = IO::Directory::GetCreationTime( original_files[i] ).Day;
			date_month = IO::Directory::GetCreationTime( original_files[i] ).Month;
			date_year = IO::Directory::GetCreationTime( original_files[i] ).Year;
			fmt_files[i] += " [" + date_day + "/" + date_month + "/" + date_year + "]";
		}
	}
	return fmt_files;
}

array<String^, 1>^ CFile::DatelessFileList( String^ path ) {
	array<String^, 1>^ original_files, ^fmt_files;
	original_files = IO::Directory::GetFileSystemEntries( path );
	fmt_files = gcnew array<String^, 1>(original_files->Length);
	for( i = 0; i < original_files->Length; i++ ) {
		fmt_files[i] = original_files[i]->Substring(path->Length, original_files[i]->Length-path->Length);
	}
	return fmt_files;
}

BOOL CFile::isFile( String^ path ) {
	if( GetFileAttributesA( (const char*)Marshal::StringToHGlobalAnsi(path).ToPointer() ) ==
		FILE_ATTRIBUTE_DIRECTORY ) {
			return FALSE;
	}
	else{
		return TRUE;
	}
}