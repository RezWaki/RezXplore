#pragma once
#include "files_api.h"

CFile xFileAPI;

namespace RezXplore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ xplore
	/// </summary>
	public ref class xplore : public System::Windows::Forms::Form
	{
	public:
		xplore(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~xplore()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  copyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pasteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;


	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->fileToolStripMenuItem, 
				this->aboutToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(784, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->copyToolStripMenuItem, 
				this->pasteToolStripMenuItem, this->deleteToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// copyToolStripMenuItem
			// 
			this->copyToolStripMenuItem->Name = L"copyToolStripMenuItem";
			this->copyToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->copyToolStripMenuItem->Text = L"Copy...";
			this->copyToolStripMenuItem->Click += gcnew System::EventHandler(this, &xplore::copyToolStripMenuItem_Click);
			// 
			// pasteToolStripMenuItem
			// 
			this->pasteToolStripMenuItem->Name = L"pasteToolStripMenuItem";
			this->pasteToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->pasteToolStripMenuItem->Text = L"Paste...";
			this->pasteToolStripMenuItem->Click += gcnew System::EventHandler(this, &xplore::pasteToolStripMenuItem_Click);
			// 
			// deleteToolStripMenuItem
			// 
			this->deleteToolStripMenuItem->Name = L"deleteToolStripMenuItem";
			this->deleteToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->deleteToolStripMenuItem->Text = L"Delete...";
			this->deleteToolStripMenuItem->Click += gcnew System::EventHandler(this, &xplore::deleteToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &xplore::aboutToolStripMenuItem_Click);
			// 
			// listBox1
			// 
			this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(0, 59);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(784, 500);
			this->listBox1->TabIndex = 1;
			this->listBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &xplore::listBox1_MouseClick);
			this->listBox1->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &xplore::listBox1_MouseDoubleClick);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(45, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(687, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"C:\\";
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &xplore::textBox1_KeyDown);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(738, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(34, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Go";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &xplore::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Path:";
			// 
			// xplore
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 562);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"xplore";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RezXplore - C:\\";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &xplore::xplore_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		String^ prev_path, ^copyfile, ^copyfilename;
		array<String^, 1>^ dateless_files;
		INT sel_index;
		Media::SoundPlayer^ openfolder;

	private: System::Void xplore_Load(System::Object^  sender, System::EventArgs^  e) {
				 listBox1->Items->AddRange( xFileAPI.FmtFileList("C:\\") );
				 dateless_files = xFileAPI.DatelessFileList("C:\\");
				 prev_path = "C:\\";
				 openfolder = gcnew System::Media::SoundPlayer("openfolder.wav");
			 }
	private: System::Void copyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 copyfile = prev_path+"\\"+dateless_files[sel_index];
				 copyfilename = dateless_files[sel_index];
			 }
private: System::Void pasteToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 IO::File::Copy( copyfile, prev_path + "\\" + copyfilename );
				 MessageBox::Show( "File " + copyfilename + " successfully copied!", "RezXplore" );
		 }
private: System::Void listBox1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
					sel_index = listBox1->SelectedIndex;
					//prev_path = prev_path+"\\"+dateless_files[sel_index];
					dateless_files = xFileAPI.DatelessFileList( prev_path );
		 }
private: System::Void listBox1_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 sel_index = listBox1->SelectedIndex;
				 //if( !xFileAPI.isFile(prev_path+"\\"+dateless_files[sel_index]) ) {
				 //ugly check, filestream (fstream) can't work with paths
				 //like "C:\\Fraps\\", theres only can be "C:\Fraps\"
				 listBox1->Items->Clear();
				 dateless_files = xFileAPI.DatelessFileList( prev_path );
				 listBox1->Items->AddRange( xFileAPI.FmtFileList( prev_path+"\\"+dateless_files[sel_index] ) );
				 prev_path = prev_path+"\\"+dateless_files[sel_index];
				 textBox1->Text = prev_path;
				 this->Text = "RezXplore - " + prev_path;
				 openfolder->Play();
				 //}
				 //so be careful when select file by doubleclick :P
		 }
private: System::Void deleteToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 IO::File::Delete(prev_path+"\\"+dateless_files[sel_index]);
				 MessageBox::Show( "File " + dateless_files[sel_index] + " successfully deleted!", "RezXplore" );
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 listBox1->Items->Clear();
				 dateless_files = xFileAPI.DatelessFileList( textBox1->Text );
				 listBox1->Items->AddRange( xFileAPI.FmtFileList( textBox1->Text ) );
				 prev_path = textBox1->Text;
				 this->Text = "RezXplore - " + prev_path;
				 openfolder->Play();
		 }
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBoxA(NULL, "RezXplore v1.0\n\tSimple exploring program created just for fun\n\tGitHub: github.com/RezWaki", "Info", MB_ICONINFORMATION );
		 }
private: System::Void textBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				if( e->KeyData == Keys::Enter ) {	 
					 listBox1->Items->Clear();
					 dateless_files = xFileAPI.DatelessFileList( textBox1->Text );
					 listBox1->Items->AddRange( xFileAPI.FmtFileList( textBox1->Text ) );
					 prev_path = textBox1->Text;
					 this->Text = "RezXplore - " + prev_path;
					 openfolder->Play();
				}
		 }
};
}
