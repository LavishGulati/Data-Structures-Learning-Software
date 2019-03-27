#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace DataStructuresLearningSoftware {

	/// <summary>
	/// Summary for quicksort
	/// </summary>
	public ref class quicksort : public System::Windows::Forms::UserControl
	{
	public:
		quicksort(void)
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
		~quicksort()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected: 
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button5;

	private: System::Windows::Forms::Button^  button7;



	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  txtInput;
	private: System::Windows::Forms::Button^  buttonresume;





	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Panel^  quizPanel;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::ComponentModel::IContainer^  components;

	protected: 


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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->buttonresume = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->quizPanel = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(194, 284);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(679, 347);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(110, 115);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(924, 88);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Always pick first element as pivot.\r\nAlways pick last element as pivot (implement" 
				L"ed below)\r\nPick a random element as pivot.\r\nPick median as pivot.";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(20, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1038, 49);
			this->label2->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(427, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 39);
			this->label1->TabIndex = 14;
			this->label1->Text = L"QUICK SORT";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(20, 214);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(1038, 49);
			this->label3->TabIndex = 18;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(19, 669);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(184, 26);
			this->label6->TabIndex = 28;
			this->label6->Text = L"LEARN WITH FUN";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Bisque;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(852, 934);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 30);
			this->button5->TabIndex = 27;
			this->button5->Text = L"Pause";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &quicksort::btnPause_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Bisque;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(958, 934);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 30);
			this->button7->TabIndex = 26;
			this->button7->Text = L"Reset";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &quicksort::button7_Click_1);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Bisque;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(126, 937);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 30);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Enter input";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &quicksort::button3_Click_1);
			// 
			// txtInput
			// 
			this->txtInput->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtInput->Location = System::Drawing::Point(20, 937);
			this->txtInput->Name = L"txtInput";
			this->txtInput->Size = System::Drawing::Size(100, 28);
			this->txtInput->TabIndex = 21;
			// 
			// buttonresume
			// 
			this->buttonresume->BackColor = System::Drawing::Color::Bisque;
			this->buttonresume->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonresume->FlatAppearance->BorderSize = 0;
			this->buttonresume->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonresume->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->buttonresume->Location = System::Drawing::Point(746, 936);
			this->buttonresume->Name = L"buttonresume";
			this->buttonresume->Size = System::Drawing::Size(100, 30);
			this->buttonresume->TabIndex = 20;
			this->buttonresume->Text = L"Resume";
			this->buttonresume->UseVisualStyleBackColor = false;
			this->buttonresume->Click += gcnew System::EventHandler(this, &quicksort::button6_Click_1);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(20, 698);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1038, 178);
			this->panel1->TabIndex = 19;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &quicksort::panel1_Paint);
			// 
			// label24
			// 
			this->label24->BackColor = System::Drawing::SystemColors::Control;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label24->Location = System::Drawing::Point(916, 892);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(59, 29);
			this->label24->TabIndex = 30;
			// 
			// label22
			// 
			this->label22->BackColor = System::Drawing::SystemColors::Control;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label22->Location = System::Drawing::Point(489, 892);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(59, 29);
			this->label22->TabIndex = 29;
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::SystemColors::Control;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label12->Location = System::Drawing::Point(866, 896);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(46, 25);
			this->label12->TabIndex = 28;
			this->label12->Text = L"and";
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::SystemColors::Control;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label10->Location = System::Drawing::Point(802, 892);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(59, 29);
			this->label10->TabIndex = 27;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::SystemColors::Control;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label9->Location = System::Drawing::Point(691, 892);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(106, 29);
			this->label9->TabIndex = 26;
			this->label9->Text = L"Swap:";
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::SystemColors::Control;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label11->Location = System::Drawing::Point(132, 892);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(59, 29);
			this->label11->TabIndex = 25;
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::SystemColors::Control;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label18->Location = System::Drawing::Point(21, 892);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(106, 29);
			this->label18->TabIndex = 24;
			this->label18->Text = L"Pivot:";
			// 
			// label19
			// 
			this->label19->BackColor = System::Drawing::SystemColors::Control;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label19->Location = System::Drawing::Point(438, 896);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(46, 25);
			this->label19->TabIndex = 23;
			this->label19->Text = L"and";
			// 
			// label20
			// 
			this->label20->BackColor = System::Drawing::SystemColors::Control;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label20->Location = System::Drawing::Point(375, 892);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(59, 29);
			this->label20->TabIndex = 22;
			// 
			// label21
			// 
			this->label21->BackColor = System::Drawing::SystemColors::Control;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label21->Location = System::Drawing::Point(264, 892);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(106, 29);
			this->label21->TabIndex = 21;
			this->label21->Text = L"Comparing:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(389, 1003);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(300, 21);
			this->label8->TabIndex = 30;
			this->label8->Text = L"Recursive implementation of Quick Sort\r\n";
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Bisque;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(18, 1026);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(1038, 1556);
			this->label7->TabIndex = 29;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Bisque;
			this->label17->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(160, 2662);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(210, 20);
			this->label17->TabIndex = 36;
			this->label17->Text = L"T(n) = T(k) + T(n-k-1) + O(n) ";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(160, 2633);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(374, 20);
			this->label16->TabIndex = 35;
			this->label16->Text = L"The time complexity of Quick Sort can be written as";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(20, 2632);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(135, 21);
			this->label15->TabIndex = 34;
			this->label15->Text = L"Time Complexity:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Bisque;
			this->label14->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(92, 2598);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(103, 20);
			this->label14->TabIndex = 33;
			this->label14->Text = L"Sorted Array";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(20, 2597);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(67, 21);
			this->label13->TabIndex = 32;
			this->label13->Text = L"Output:";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Bisque;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(20, 2716);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(1038, 780);
			this->label5->TabIndex = 37;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(18, 3509);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(382, 21);
			this->label23->TabIndex = 39;
			this->label23->Text = L"Answer the question correctly to pass the module.";
			// 
			// quizPanel
			// 
			this->quizPanel->Location = System::Drawing::Point(16, 3534);
			this->quizPanel->Name = L"quizPanel";
			this->quizPanel->Size = System::Drawing::Size(1030, 450);
			this->quizPanel->TabIndex = 38;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Bisque;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(261, 937);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 30);
			this->button1->TabIndex = 31;
			this->button1->Text = L"Sort";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &quicksort::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			// 
			// timer2
			// 
			this->timer2->Interval = 1000;
			// 
			// timer3
			// 
			this->timer3->Interval = 1000;
			// 
			// quicksort
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label24);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->quizPanel);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->txtInput);
			this->Controls->Add(this->buttonresume);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"quicksort";
			this->Size = System::Drawing::Size(1068, 4062);
			this->Load += gcnew System::EventHandler(this, &quicksort::quicksort_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//------------------------------------------------------------------------------------------------------------------------------------------------//
	public:	
		String ^username;
		int num_elements;
		int box_length;
		int box_width;
		int start_x;
		float curr_size;
		int left_start;
		int start_y;
		int number_size;
		int sort_selected;

		int timer2_set;
		int* quicksort_stack;
		int quicksort_top;

		int partition_l;
		int partition_h;
		int partition_var;
		int partition_no;

		System::Collections::Generic::List<int> input_array;
		System::Collections::Generic::List<int> input_array_completed;
		System::Collections::Generic::List<Label ^> LabelList;

		//----------------------------------------------------TAKING INPUT CODE -----------------------------------------------------------------//
		void show_array(int start,int length){
			//To Show The Array

			for(int i=start;i<=length;i++){

				Label ^newLabel = gcnew Label();
				newLabel->Location = Drawing::Point(start_x+(i)*box_length, start_y);
				newLabel->Size = Drawing::Size(box_length, box_width);
				newLabel->Text = System::Convert::ToString(input_array[i]);

				if(input_array_completed[i]==0){
					newLabel->BackColor = Color::LightSkyBlue;
				}
				else if(input_array_completed[i]==-1){
					newLabel->BackColor = Color::PaleGreen;
				}
				else if(input_array_completed[i]==-3){
					newLabel->BackColor = Color::Red;
				}
				else{
					newLabel->BackColor = Color::Orange;
				}

				newLabel->BorderStyle = Windows::Forms::BorderStyle::FixedSingle;
				newLabel->TextAlign = ContentAlignment::MiddleCenter;
				newLabel->Font = gcnew Drawing::Font("Comic Sans MS", 11, FontStyle::Regular);
				panel1->Controls->Add(newLabel);
			}	
		}

		void calculate_size(){
			//start position is: 315,85
			//size of panel is : 1100,700
			//For initialising input array
			int i;
			for(i=60;i>=35;i=i-5){
				if(num_elements*i<700)break;
			}

			box_length=i;
			box_width= 50;

			start_x=50;
			start_y=50;
		}

		bool inputValidate(System::String ^input){
			try{
				int input_ele = int::Parse(input);
				calculate_size();
				return true;
			}
			catch(...){
				MessageBox::Show("Input Entered is not correct");

			}
			return false;
		}

		//-------------------------------------------------------QUICK SORT CODE --------------------------------------------------------------------//
		void swap ( int a, int b ){ 
			int t = input_array[a]; 
			input_array[a] = input_array[b]; 
			input_array[b] = t;
			label10->Text=System::Convert::ToString(input_array[a]);
			label24->Text=System::Convert::ToString(input_array[b]);

		}	
		int partition ( int l, int h){ 
			int x = input_array[h]; 
			int i = (l - 1); 

			for (int j = l; j <= h- 1; j++) 
			{ 
				if(input_array[j] <= x){ 
					i++; 
					swap (i, j); 
				} 
			} 
			swap (i+1,h); 
			return (i + 1); 
		} 

		//------------------------------------------------------WINDOWS FORM CODE --------------------------------------------------------------------//
	private: System::Void quicksort_Load(System::Object^  sender, System::EventArgs^  e) {
				 quicksort_stack=new int[100];
				 sort_selected=1;
			 }

	private: System::Void btnPause_Click(System::Object^  sender, System::EventArgs^  e) {
				 //pause
				 timer1->Enabled = false;
				 if(timer2->Enabled == true){
					 timer2_set=1;
					 timer2->Enabled=false;
				 }
			 }
	private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 //enter input
				 String ^s=txtInput->Text;
				 bool check=inputValidate(s);
				 txtInput->Text="";
				 if(check){
					 int input = int::Parse(s);
					 num_elements++;
					 input_array.Add(input);
					 input_array_completed.Add(0);
					 panel1->Controls->Clear();
					 show_array(0,input_array.Count-1);
				 }	
			 }
	private: System::Void button7_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 //reset
				 timer1->Enabled = false;
				 timer2->Enabled= false;
				 panel1->Controls->Clear();
				 num_elements = 0;
				 input_array.Clear();
				 label4->Text="";
				 label6->Text="";
				 label8->Text="";
				 label10->Text="";
				 label11->Text="";
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //quicksort
				 if(input_array.Count==0){MessageBox::Show("The input array is null,add something");}
				 quicksort_top=-1;
				 quicksort_stack[++quicksort_top]=0;
				 quicksort_stack[++quicksort_top]=input_array.Count-1;
				 timer1->Enabled=true;
			 }

	private: System::Void button6_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 //resume
				 timer1->Enabled = true;
				 if(timer2_set==1){timer2->Enabled=true;}
			 }



			 //------------------------------------------TIMER CODE-----------------------------------------------------------//

	public: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				//timer
				int n=input_array.Count;
				if(sort_selected==0){
					//mergesort
				}
				else{
					//quicksort
					if(quicksort_top<0){
						for(int i=0;i<input_array.Count-1;i++){input_array_completed[i]=-2;}
						panel1->Controls->Clear();
						show_array(0,input_array.Count-1);
						timer1->Enabled=false;
						timer3->Enabled=false;
						input_array.Clear();
						return;
					}
					panel1->Controls->Clear();
					show_array(0,input_array.Count-1);			
					partition_h = quicksort_stack[ quicksort_top-- ]; 
					partition_l = quicksort_stack[ quicksort_top-- ]; 
					partition_var=partition_l;
					partition_no=partition_l-1;
					label8->Text=System::Convert::ToString(input_array[partition_h]);
					input_array_completed[partition_h]=-1;
					timer1->Enabled=false;
					timer3->Enabled=true;
					// p is obtained from the timer3 which does partition 


				}
			}


	private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
				 //quicksort Partition

				 for(int i=0;i<input_array.Count-1;i++){if(input_array_completed[i]==-3)input_array_completed[i]=0;}

				 int l=partition_l;
				 int h=partition_h;
				 int x = input_array[h]; 
				 label4->Text=System::Convert::ToString(input_array[partition_var]);
				 label6->Text=System::Convert::ToString(x);
				 input_array_completed[partition_var]=-3;
				 if(input_array[partition_var]<=x){
					 partition_no++;
					 swap(partition_no,partition_var);

				 }
				 panel1->Controls->Clear();
				 show_array(0,input_array.Count-1);
				 partition_var+=1;

				 if(partition_var > h-1){
					 timer3->Enabled=false;

					 swap(partition_no+1,partition_h);
					 input_array_completed[partition_h]=0;
					 input_array_completed[partition_no+1]=-2;
					 panel1->Controls->Clear();
					 show_array(0,input_array.Count-1);

					 int p=partition_no+1;
					 if ( p-1 > partition_l ) 
					 { 
						 quicksort_stack[ ++quicksort_top ] = partition_l; 
						 quicksort_stack[ ++quicksort_top ] = p - 1; 

					 } 
					 if ( p+1 < partition_h ) 
					 {	 
						 quicksort_stack[ ++quicksort_top ] = p + 1; 
						 quicksort_stack[ ++quicksort_top ] = partition_h; 

					 }

					 timer1->Enabled=true;
					 for(int i=0;i<input_array.Count-1;i++){if(input_array_completed[i]==-3)input_array_completed[i]=0;}

				 }

			 }

	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
};
}
