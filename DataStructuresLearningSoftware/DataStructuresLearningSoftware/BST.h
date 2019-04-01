#pragma once

#include "BST_intro.h"
#include "BST_introduction.h"
#include "BST_insertion.h"
#include "BST_deletion.h"
#include "BST_search.h"
#include "DiscussionForum.h"

namespace DataStructuresLearningSoftware {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BST_mainpage
	/// </summary>
	public ref class BST_mainpage : public System::Windows::Forms::Form
	{
	public:
		BST_mainpage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BST_mainpage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  MainPanel;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	protected: 

	protected: 

	protected: 

	protected: 

	protected: 

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(BST_mainpage::typeid));
			this->MainPanel = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// MainPanel
			// 
			this->MainPanel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->MainPanel->Location = System::Drawing::Point(0, 50);
			this->MainPanel->Name = L"MainPanel";
			this->MainPanel->Size = System::Drawing::Size(1280, 670);
			this->MainPanel->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(331, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(391, 49);
			this->label1->TabIndex = 1;
			this->label1->Text = L"BINARY SEARCH TREES";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSalmon;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1053, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 30);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Discussion Forum";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &BST_mainpage::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Bisque;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(1218, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 50);
			this->button2->TabIndex = 7;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &BST_mainpage::button2_Click_1);
			// 
			// BST_mainpage
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::Bisque;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->MainPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"BST_mainpage";
			this->Text = L"uttb";
			this->Load += gcnew System::EventHandler(this, &BST_mainpage::BST_mainpage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		String ^ username;
	private: System::Void BST_mainpage_Load(System::Object^  sender, System::EventArgs^  e) {
				 BST_intro ^BST = gcnew BST_intro();
				 MainPanel->Controls->Clear();
				 MainPanel->Controls->Add(BST);
			 }
	private: System::Void btnHome_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(this->Owner != nullptr){
					 this->Hide();
					 this->Owner->Show();
				 }
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 MainPanel->Controls->Clear();
			 DiscussionForum ^ discuss = gcnew DiscussionForum;
			 discuss->username=username;
			 MainPanel->Controls->Add(discuss);
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 MainPanel->Controls->Clear();
			 DiscussionForum ^ discuss = gcnew DiscussionForum;
			 discuss->username=username;
			 MainPanel->Controls->Add(discuss);
		 }
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
};
}

