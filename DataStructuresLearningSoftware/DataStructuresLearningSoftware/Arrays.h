#pragma once

#include "Array_Insertion.h"
#include "Array_Traversal.h"
#include "Array_Introduction.h"
#include "Array_Search.h"
#include "Quiz.h"

namespace DataStructuresLearningSoftware {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Arrays
	/// </summary>
	public ref class Arrays : public System::Windows::Forms::Form
	{
	public:
		Arrays(void)
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
		~Arrays()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  MainPanel;

	private: System::Windows::Forms::Button^  btnTraversal;

	private: System::Windows::Forms::Button^  btnInsertion;

	private: System::Windows::Forms::Button^  btnIntroduction;
	private: System::Windows::Forms::Button^  btnSearch;
	private: System::Windows::Forms::Button^  btnLogouts;

	private: System::Windows::Forms::Button^  btnHome;

	private: System::Windows::Forms::Button^  btnNext;

	private: System::Windows::Forms::Button^  btnBack;

	private: System::Windows::Forms::Button^  btnQuiz;
	private: System::Windows::Forms::Label^  lblWelcome;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Arrays::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnQuiz = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnTraversal = (gcnew System::Windows::Forms::Button());
			this->btnInsertion = (gcnew System::Windows::Forms::Button());
			this->btnIntroduction = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lblWelcome = (gcnew System::Windows::Forms::Label());
			this->btnLogouts = (gcnew System::Windows::Forms::Button());
			this->btnHome = (gcnew System::Windows::Forms::Button());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->MainPanel = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Honeydew;
			this->panel1->Controls->Add(this->btnQuiz);
			this->panel1->Controls->Add(this->btnSearch);
			this->panel1->Controls->Add(this->btnTraversal);
			this->panel1->Controls->Add(this->btnInsertion);
			this->panel1->Controls->Add(this->btnIntroduction);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(175, 720);
			this->panel1->TabIndex = 0;
			// 
			// btnQuiz
			// 
			this->btnQuiz->FlatAppearance->BorderSize = 0;
			this->btnQuiz->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnQuiz->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnQuiz->Location = System::Drawing::Point(0, 210);
			this->btnQuiz->Name = L"btnQuiz";
			this->btnQuiz->Size = System::Drawing::Size(175, 40);
			this->btnQuiz->TabIndex = 4;
			this->btnQuiz->Text = L"Quiz Time";
			this->btnQuiz->UseVisualStyleBackColor = true;
			this->btnQuiz->Click += gcnew System::EventHandler(this, &Arrays::btnQuiz_Click);
			// 
			// btnSearch
			// 
			this->btnSearch->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSearch->FlatAppearance->BorderSize = 0;
			this->btnSearch->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSearch->Location = System::Drawing::Point(0, 170);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(175, 40);
			this->btnSearch->TabIndex = 3;
			this->btnSearch->Text = L"Search";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &Arrays::btnSearch_Click);
			// 
			// btnTraversal
			// 
			this->btnTraversal->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnTraversal->FlatAppearance->BorderSize = 0;
			this->btnTraversal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTraversal->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnTraversal->Location = System::Drawing::Point(0, 130);
			this->btnTraversal->Name = L"btnTraversal";
			this->btnTraversal->Size = System::Drawing::Size(175, 40);
			this->btnTraversal->TabIndex = 2;
			this->btnTraversal->Text = L"Traversal";
			this->btnTraversal->UseVisualStyleBackColor = true;
			this->btnTraversal->Click += gcnew System::EventHandler(this, &Arrays::btnTraversal_Click);
			// 
			// btnInsertion
			// 
			this->btnInsertion->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnInsertion->FlatAppearance->BorderSize = 0;
			this->btnInsertion->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnInsertion->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnInsertion->Location = System::Drawing::Point(0, 90);
			this->btnInsertion->Name = L"btnInsertion";
			this->btnInsertion->Size = System::Drawing::Size(175, 40);
			this->btnInsertion->TabIndex = 1;
			this->btnInsertion->Text = L"Insertion";
			this->btnInsertion->UseVisualStyleBackColor = true;
			this->btnInsertion->Click += gcnew System::EventHandler(this, &Arrays::btnInsertion_Click);
			// 
			// btnIntroduction
			// 
			this->btnIntroduction->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnIntroduction->FlatAppearance->BorderSize = 0;
			this->btnIntroduction->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnIntroduction->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnIntroduction->Location = System::Drawing::Point(0, 50);
			this->btnIntroduction->Name = L"btnIntroduction";
			this->btnIntroduction->Size = System::Drawing::Size(175, 40);
			this->btnIntroduction->TabIndex = 0;
			this->btnIntroduction->Text = L"Introduction";
			this->btnIntroduction->UseVisualStyleBackColor = true;
			this->btnIntroduction->Click += gcnew System::EventHandler(this, &Arrays::btnIntroduction_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Honeydew;
			this->panel2->Controls->Add(this->lblWelcome);
			this->panel2->Controls->Add(this->btnLogouts);
			this->panel2->Controls->Add(this->btnHome);
			this->panel2->Controls->Add(this->btnNext);
			this->panel2->Controls->Add(this->btnBack);
			this->panel2->Location = System::Drawing::Point(175, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1105, 50);
			this->panel2->TabIndex = 1;
			// 
			// lblWelcome
			// 
			this->lblWelcome->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblWelcome->ForeColor = System::Drawing::Color::Firebrick;
			this->lblWelcome->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWelcome->Location = System::Drawing::Point(50, 15);
			this->lblWelcome->Name = L"lblWelcome";
			this->lblWelcome->Size = System::Drawing::Size(905, 20);
			this->lblWelcome->TabIndex = 4;
			this->lblWelcome->Text = L"label1";
			this->lblWelcome->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btnLogouts
			// 
			this->btnLogouts->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLogouts->FlatAppearance->BorderSize = 0;
			this->btnLogouts->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnLogouts->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnLogouts.Image")));
			this->btnLogouts->Location = System::Drawing::Point(1055, 0);
			this->btnLogouts->Name = L"btnLogouts";
			this->btnLogouts->Size = System::Drawing::Size(50, 50);
			this->btnLogouts->TabIndex = 3;
			this->btnLogouts->UseVisualStyleBackColor = true;
			// 
			// btnHome
			// 
			this->btnHome->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnHome->FlatAppearance->BorderSize = 0;
			this->btnHome->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnHome->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnHome.Image")));
			this->btnHome->Location = System::Drawing::Point(1005, 0);
			this->btnHome->Name = L"btnHome";
			this->btnHome->Size = System::Drawing::Size(50, 50);
			this->btnHome->TabIndex = 2;
			this->btnHome->UseVisualStyleBackColor = true;
			// 
			// btnNext
			// 
			this->btnNext->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnNext->FlatAppearance->BorderSize = 0;
			this->btnNext->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnNext->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnNext.Image")));
			this->btnNext->Location = System::Drawing::Point(955, 0);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(50, 50);
			this->btnNext->TabIndex = 1;
			this->btnNext->UseVisualStyleBackColor = true;
			this->btnNext->Click += gcnew System::EventHandler(this, &Arrays::btnNext_Click);
			// 
			// btnBack
			// 
			this->btnBack->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnBack->FlatAppearance->BorderSize = 0;
			this->btnBack->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnBack->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnBack.Image")));
			this->btnBack->Location = System::Drawing::Point(0, 0);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(50, 50);
			this->btnBack->TabIndex = 0;
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &Arrays::btnBack_Click);
			// 
			// MainPanel
			// 
			this->MainPanel->AutoScroll = true;
			this->MainPanel->Location = System::Drawing::Point(175, 50);
			this->MainPanel->Name = L"MainPanel";
			this->MainPanel->Size = System::Drawing::Size(1105, 670);
			this->MainPanel->TabIndex = 2;
			// 
			// Arrays
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->MainPanel);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Arrays";
			this->Text = L"Arrays";
			this->Load += gcnew System::EventHandler(this, &Arrays::Arrays_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	public: String ^username;
			int moduleId;
			String ^fullname;
			int modulesCompleted;


	private: System::Void btnIntroduction_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(modulesCompleted < 0){	// 0 is module ID of Introduction
					 MessageBox::Show("Complete the previous module to unlock this module");
				 }
				 else{
					 moduleId = 0;
					 display();
				 }
			 }

	private: System::Void btnInsertion_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(modulesCompleted < 1){	// 1 is module ID of Insertion
					 MessageBox::Show("Complete the previous module to unlock this module");
				 }
				 else{
					 moduleId = 1;
					 display();
				 }
			 }

	private: System::Void btnTraversal_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(modulesCompleted < 2){	// 2 is module ID of Traversal
					 MessageBox::Show("Complete the previous module to unlock this module");
				 }
				 else{
					 moduleId = 2;
					 display();
				 }
			}


	private: System::Void btnSearch_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(modulesCompleted < 3){	// 3 is module ID of Search
					 MessageBox::Show("Complete the previous module to unlock this module");
				 }
				 else{
					 moduleId = 3;
					 display();
				 }		 
			}
	
	private: System::Void btnQuiz_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(modulesCompleted < 4){	// 4 is module ID of Quiz
					 MessageBox::Show("Complete the previous module to unlock this module");
				 }
				 else{
					 moduleId = 4;
					 display();
				 }		 
			}
	
	private: System::Void Arrays_Load(System::Object^  sender, System::EventArgs^  e) {
				 username = "lavish";

				 moduleId = 0;

				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

				 DB_Connection->Open();
				 String ^readString = "SELECT * FROM Users WHERE UserName='"+username+"'";
				 OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();
				 if(reader->Read()){
					 fullname = reader->GetString(2);
					 modulesCompleted = reader->GetInt32(9);
				 }

				 lblWelcome->Text = "Welcome, "+fullname;

				 display();		 
			}

	public: void display(){
				if(modulesCompleted == 0){
					btnIntroduction->BackColor = Color::IndianRed;
					btnInsertion->BackColor = Color::IndianRed;
					btnTraversal->BackColor = Color::IndianRed;
					btnSearch->BackColor = Color::IndianRed;
					btnQuiz->BackColor = Color::IndianRed;
				}
				else if(modulesCompleted == 1){
					btnIntroduction->BackColor = Color::MediumSeaGreen;
					btnInsertion->BackColor = Color::IndianRed;
					btnTraversal->BackColor = Color::IndianRed;
					btnSearch->BackColor = Color::IndianRed;
					btnQuiz->BackColor = Color::IndianRed;
				}
				else if(modulesCompleted == 2){
					btnIntroduction->BackColor = Color::MediumSeaGreen;
					btnInsertion->BackColor = Color::MediumSeaGreen;
					btnTraversal->BackColor = Color::IndianRed;
					btnSearch->BackColor = Color::IndianRed;
					btnQuiz->BackColor = Color::IndianRed;
				}
				else if(modulesCompleted == 3){
					btnIntroduction->BackColor = Color::MediumSeaGreen;
					btnInsertion->BackColor = Color::MediumSeaGreen;
					btnTraversal->BackColor = Color::MediumSeaGreen;
					btnSearch->BackColor = Color::IndianRed;
					btnQuiz->BackColor = Color::IndianRed;
				}
				else if(modulesCompleted == 4){
					btnIntroduction->BackColor = Color::MediumSeaGreen;
					btnInsertion->BackColor = Color::MediumSeaGreen;
					btnTraversal->BackColor = Color::MediumSeaGreen;
					btnSearch->BackColor = Color::MediumSeaGreen;
					btnQuiz->BackColor = Color::IndianRed;
				}
				else if(modulesCompleted == 5){
					btnIntroduction->BackColor = Color::MediumSeaGreen;
					btnInsertion->BackColor = Color::MediumSeaGreen;
					btnTraversal->BackColor = Color::MediumSeaGreen;
					btnSearch->BackColor = Color::MediumSeaGreen;
					btnQuiz->BackColor = Color::MediumSeaGreen;
				}

				if(moduleId == 0){
					btnIntroduction->BackColor = Color::CornflowerBlue;
					btnBack->Hide();
					btnNext->Show();
					MainPanel->Controls->Clear();
					Array_Introduction ^newUserControl = gcnew Array_Introduction();
					newUserControl->username = username;
					MainPanel->Controls->Add(newUserControl);
				}
				else if(moduleId == 1){
					btnInsertion->BackColor = Color::CornflowerBlue;
					btnBack->Show();
					btnNext->Show();
					MainPanel->Controls->Clear();
					Array_Insertion ^newUserControl = gcnew Array_Insertion();
					newUserControl->username = username;
					MainPanel->Controls->Add(newUserControl);
				}
				else if(moduleId == 2){
					btnTraversal->BackColor = Color::CornflowerBlue;
					btnBack->Show();
					btnNext->Show();
					MainPanel->Controls->Clear();
					Array_Traversal ^newUserControl = gcnew Array_Traversal();
					newUserControl->username = username;
					MainPanel->Controls->Add(newUserControl);
				}
				else if(moduleId == 3){
					btnSearch->BackColor = Color::CornflowerBlue;
					btnBack->Show();
					btnNext->Show();
					MainPanel->Controls->Clear();
					Array_Search ^newUserControl = gcnew Array_Search();
					newUserControl->username = username;
					MainPanel->Controls->Add(newUserControl);
				}
				else if(moduleId == 4){
					btnQuiz->BackColor = Color::CornflowerBlue;
					btnNext->Hide();
					btnBack->Show();
					MainPanel->Controls->Clear();
					Quiz ^newUserControl = gcnew Quiz();
					newUserControl->username = username;
					newUserControl->ds_id = 1;
					MainPanel->Controls->Add(newUserControl);
				}
			}
	
	private: System::Void btnBack_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(moduleId-1 > modulesCompleted){
					 MessageBox::Show("Complete the previous module to unlock this module");
				 }
				 else{
					 moduleId--;
					 display();
				 }
			}


	private: System::Void btnNext_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(moduleId+1 > modulesCompleted){
					 MessageBox::Show("Complete the previous module to unlock this module");
				 }
				 else{
					 moduleId++;
					 display();
				 }		 
			}
};
}