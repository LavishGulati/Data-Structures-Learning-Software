#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace AandLink {

	/// <summary>
	/// Summary for Array_Insertion
	/// </summary>
	public ref class Array_Insertion : public System::Windows::Forms::UserControl
	{
	public:
		Array_Insertion(void)
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
		~Array_Insertion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  insert_lab_ar;
	protected: 
	private: System::Windows::Forms::Button^  insertarray;
	private: System::Windows::Forms::TextBox^  insertindex;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  insertvalue;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  insert_animation;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  l1;
	private: System::Windows::Forms::Label^  l2;
	private: System::Windows::Forms::Label^  l3;
	private: System::Windows::Forms::Label^  l4;
	private: System::Windows::Forms::Label^  l5;
	private: System::Windows::Forms::Label^  l6;
	private: System::Windows::Forms::Label^  l7;
	private: System::Windows::Forms::Label^  l8;
	private: System::Windows::Forms::Timer^  insertimer;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->insert_lab_ar = (gcnew System::Windows::Forms::Label());
			this->insertarray = (gcnew System::Windows::Forms::Button());
			this->insertindex = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->insertvalue = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->insert_animation = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->l1 = (gcnew System::Windows::Forms::Label());
			this->l2 = (gcnew System::Windows::Forms::Label());
			this->l3 = (gcnew System::Windows::Forms::Label());
			this->l4 = (gcnew System::Windows::Forms::Label());
			this->l5 = (gcnew System::Windows::Forms::Label());
			this->l6 = (gcnew System::Windows::Forms::Label());
			this->l7 = (gcnew System::Windows::Forms::Label());
			this->l8 = (gcnew System::Windows::Forms::Label());
			this->insertimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->insert_animation->SuspendLayout();
			this->SuspendLayout();
			// 
			// insert_lab_ar
			// 
			this->insert_lab_ar->AutoSize = true;
			this->insert_lab_ar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->insert_lab_ar->Location = System::Drawing::Point(25, 13);
			this->insert_lab_ar->Name = L"insert_lab_ar";
			this->insert_lab_ar->Size = System::Drawing::Size(74, 28);
			this->insert_lab_ar->TabIndex = 1;
			this->insert_lab_ar->Text = L"Insert";
			// 
			// insertarray
			// 
			this->insertarray->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->insertarray->Location = System::Drawing::Point(693, 300);
			this->insertarray->Name = L"insertarray";
			this->insertarray->Size = System::Drawing::Size(95, 33);
			this->insertarray->TabIndex = 12;
			this->insertarray->Text = L"INSERT";
			this->insertarray->UseVisualStyleBackColor = true;
			this->insertarray->Click += gcnew System::EventHandler(this, &Array_Insertion::insertarray_Click);
			// 
			// insertindex
			// 
			this->insertindex->Location = System::Drawing::Point(459, 306);
			this->insertindex->Name = L"insertindex";
			this->insertindex->Size = System::Drawing::Size(118, 22);
			this->insertindex->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(322, 305);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 21);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Insert At Index";
			// 
			// insertvalue
			// 
			this->insertvalue->Location = System::Drawing::Point(133, 311);
			this->insertvalue->Name = L"insertvalue";
			this->insertvalue->Size = System::Drawing::Size(119, 22);
			this->insertvalue->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(18, 310);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 21);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Insert Value";
			// 
			// insert_animation
			// 
			this->insert_animation->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->insert_animation->Controls->Add(this->label19);
			this->insert_animation->Controls->Add(this->label18);
			this->insert_animation->Controls->Add(this->label17);
			this->insert_animation->Controls->Add(this->label16);
			this->insert_animation->Controls->Add(this->label15);
			this->insert_animation->Controls->Add(this->label14);
			this->insert_animation->Controls->Add(this->label13);
			this->insert_animation->Controls->Add(this->label12);
			this->insert_animation->Controls->Add(this->label11);
			this->insert_animation->Controls->Add(this->l1);
			this->insert_animation->Controls->Add(this->l2);
			this->insert_animation->Controls->Add(this->l3);
			this->insert_animation->Controls->Add(this->l4);
			this->insert_animation->Controls->Add(this->l5);
			this->insert_animation->Controls->Add(this->l6);
			this->insert_animation->Controls->Add(this->l7);
			this->insert_animation->Controls->Add(this->l8);
			this->insert_animation->Location = System::Drawing::Point(0, 339);
			this->insert_animation->Name = L"insert_animation";
			this->insert_animation->Size = System::Drawing::Size(1059, 254);
			this->insert_animation->TabIndex = 7;
			// 
			// label19
			// 
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(9, 145);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(100, 100);
			this->label19->TabIndex = 16;
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(952, 8);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(16, 17);
			this->label18->TabIndex = 15;
			this->label18->Text = L"8";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(833, 8);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(16, 17);
			this->label17->TabIndex = 14;
			this->label17->Text = L"7";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(714, 8);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(16, 17);
			this->label16->TabIndex = 13;
			this->label16->Text = L"6";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(597, 8);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(16, 17);
			this->label15->TabIndex = 12;
			this->label15->Text = L"5";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(480, 8);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(16, 17);
			this->label14->TabIndex = 11;
			this->label14->Text = L"4";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(362, 8);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(16, 17);
			this->label13->TabIndex = 10;
			this->label13->Text = L"3";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(247, 8);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(16, 17);
			this->label12->TabIndex = 9;
			this->label12->Text = L"2";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(143, 8);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(16, 17);
			this->label11->TabIndex = 8;
			this->label11->Text = L"1";
			// 
			// l1
			// 
			this->l1->BackColor = System::Drawing::SystemColors::Desktop;
			this->l1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->l1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->l1->Location = System::Drawing::Point(146, 36);
			this->l1->Name = L"l1";
			this->l1->Size = System::Drawing::Size(83, 79);
			this->l1->TabIndex = 7;
			this->l1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l2
			// 
			this->l2->BackColor = System::Drawing::SystemColors::Desktop;
			this->l2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->l2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->l2->Location = System::Drawing::Point(250, 36);
			this->l2->Name = L"l2";
			this->l2->Size = System::Drawing::Size(96, 79);
			this->l2->TabIndex = 6;
			this->l2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l3
			// 
			this->l3->BackColor = System::Drawing::SystemColors::Desktop;
			this->l3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->l3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->l3->Location = System::Drawing::Point(365, 36);
			this->l3->Name = L"l3";
			this->l3->Size = System::Drawing::Size(100, 79);
			this->l3->TabIndex = 5;
			this->l3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l4
			// 
			this->l4->BackColor = System::Drawing::SystemColors::Desktop;
			this->l4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->l4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->l4->Location = System::Drawing::Point(483, 36);
			this->l4->Name = L"l4";
			this->l4->Size = System::Drawing::Size(100, 79);
			this->l4->TabIndex = 4;
			this->l4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l5
			// 
			this->l5->BackColor = System::Drawing::SystemColors::Desktop;
			this->l5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->l5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->l5->Location = System::Drawing::Point(600, 36);
			this->l5->Name = L"l5";
			this->l5->Size = System::Drawing::Size(100, 79);
			this->l5->TabIndex = 3;
			this->l5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l6
			// 
			this->l6->BackColor = System::Drawing::SystemColors::Desktop;
			this->l6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->l6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->l6->Location = System::Drawing::Point(717, 36);
			this->l6->Name = L"l6";
			this->l6->Size = System::Drawing::Size(100, 79);
			this->l6->TabIndex = 2;
			this->l6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l7
			// 
			this->l7->BackColor = System::Drawing::SystemColors::Desktop;
			this->l7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->l7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->l7->Location = System::Drawing::Point(836, 36);
			this->l7->Name = L"l7";
			this->l7->Size = System::Drawing::Size(100, 79);
			this->l7->TabIndex = 1;
			this->l7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l8
			// 
			this->l8->BackColor = System::Drawing::SystemColors::Desktop;
			this->l8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->l8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->l8->Location = System::Drawing::Point(972, 36);
			this->l8->Name = L"l8";
			this->l8->Size = System::Drawing::Size(83, 79);
			this->l8->TabIndex = 0;
			this->l8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// insertimer
			// 
			this->insertimer->Interval = 1;
			this->insertimer->Tick += gcnew System::EventHandler(this, &Array_Insertion::insertimer_Tick);
			// 
			// Array_Insertion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->insertarray);
			this->Controls->Add(this->insertindex);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->insertvalue);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->insert_animation);
			this->Controls->Add(this->insert_lab_ar);
			this->Name = L"Array_Insertion";
			this->Size = System::Drawing::Size(1059, 610);
			this->insert_animation->ResumeLayout(false);
			this->insert_animation->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void insertarray_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(this->insertvalue->Text=="" || this->insertindex->Text==""){
					 this->insertindex->Text = "";
					 this->insertvalue->Text = "";
					 MessageBox::Show("Please Enter Values In The Text Boxes");
				 }
				 else{
					 if(int::Parse(this->insertvalue->Text)<= 1000 && int::Parse(this->insertvalue->Text)>= -1000 && int::Parse(this->insertindex->Text)>= 1 && int::Parse(this->insertindex->Text)<= 8){
						 this->label19->Text = this->insertvalue->Text;
						 insertimer->Enabled = true;
					 }
					 else{
						 this->insertindex->Text = "";
						 this->insertvalue->Text = "";
						 MessageBox::Show("Please Enter Value Between -1000 to 1000 And Index Between 1 To 8");
					 }
				 }
			 }
	private: System::Void insertimer_Tick(System::Object^  sender, System::EventArgs^  e) {
				 if(int::Parse(this->insertindex->Text)==1 && this->label19->Location.X == this->l1->Location.X){
					 this->l1->Text = this->insertvalue->Text;
					 this->label19->Location = System::Drawing::Point(9,120);
					 this->label19->Text = "";
					 this->insertindex->Text = "";
					 this->insertvalue->Text = "";
					 insertimer->Enabled = false;
				 }
				 else if(int::Parse(this->insertindex->Text)==2 && this->label19->Location.X == this->l2->Location.X){
					 this->l2->Text = this->insertvalue->Text;
					 this->label19->Location = System::Drawing::Point(9,120);
					 this->label19->Text = "";
					 this->insertindex->Text = "";
					 this->insertvalue->Text = "";
					 insertimer->Enabled = false;
				 }
				 else if(int::Parse(this->insertindex->Text)==3 && this->label19->Location.X == this->l3->Location.X){
					 this->l3->Text = this->insertvalue->Text;
					 this->label19->Location = System::Drawing::Point(9,120);
					 this->label19->Text = "";
					 this->insertindex->Text = "";
					 this->insertvalue->Text = "";
					 insertimer->Enabled = false;
				 }
				 else if(int::Parse(this->insertindex->Text)==4 && this->label19->Location.X == this->l4->Location.X){
					 this->l4->Text = this->insertvalue->Text;
					 this->label19->Location = System::Drawing::Point(9,120);
					 this->label19->Text = "";
					 this->insertindex->Text = "";
					 this->insertvalue->Text = "";
					 insertimer->Enabled = false;
				 }
				 else if(int::Parse(this->insertindex->Text)==5 && this->label19->Location.X == this->l5->Location.X){
					 this->l5->Text = this->insertvalue->Text;
					 this->label19->Location = System::Drawing::Point(9,120);
					 this->label19->Text = "";
					 this->insertindex->Text = "";
					 this->insertvalue->Text = "";
					 insertimer->Enabled = false;
				 }
				 else if(int::Parse(this->insertindex->Text)==6 && this->label19->Location.X == this->l6->Location.X){
					 this->l6->Text = this->insertvalue->Text;
					 this->label19->Location = System::Drawing::Point(9,120);
					 this->label19->Text = "";
					 this->insertindex->Text = "";
					 this->insertvalue->Text = "";
					 insertimer->Enabled = false;
				 }
				 else if(int::Parse(this->insertindex->Text)==7 && this->label19->Location.X == this->l7->Location.X){
					 this->l7->Text = this->insertvalue->Text;
					 this->label19->Location = System::Drawing::Point(9,120);
					 this->label19->Text = "";
					 this->insertindex->Text = "";
					 this->insertvalue->Text = "";
					 insertimer->Enabled = false;
				 }
				 else if(int::Parse(this->insertindex->Text)==8 && this->label19->Location.X == this->l8->Location.X){
					 this->l8->Text = this->insertvalue->Text;
					 this->label19->Location = System::Drawing::Point(9,120);
					 this->label19->Text = "";
					 this->insertindex->Text = "";
					 this->insertvalue->Text = "";
					 insertimer->Enabled = false;
				 }
				 else{
					 int x = this->label19->Location.X + 1;
					 this->label19->Location = System::Drawing::Point(x,this->label19->Location.Y);
				 }
			 }
	};
}