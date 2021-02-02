#pragma once

#include "Fizika.h"

namespace Stocks {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButton20;
	private: System::Windows::Forms::RadioButton^ radioButton19;
	private: System::Windows::Forms::RadioButton^ radioButton18;
	private: System::Windows::Forms::RadioButton^ radioButton17;
	private: System::Windows::Forms::RadioButton^ radioButton16;
	private: System::Windows::Forms::RadioButton^ radioButton15;
	private: System::Windows::Forms::RadioButton^ radioButton14;
	private: System::Windows::Forms::RadioButton^ radioButton13;
	private: System::Windows::Forms::RadioButton^ radioButton12;
	private: System::Windows::Forms::RadioButton^ radioButton11;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->radioButton20 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton19 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton18 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton17 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton16 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton15 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(138, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(307, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Лабораторная работа";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->radioButton10);
			this->groupBox1->Controls->Add(this->radioButton9);
			this->groupBox1->Controls->Add(this->radioButton8);
			this->groupBox1->Controls->Add(this->radioButton7);
			this->groupBox1->Controls->Add(this->radioButton6);
			this->groupBox1->Controls->Add(this->radioButton5);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(18, 152);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(652, 192);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Задание 1";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(349, 153);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 29);
			this->label3->TabIndex = 12;
			this->label3->Text = L"mm";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(223, 151);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 35);
			this->numericUpDown1->TabIndex = 11;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(182, 153);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 29);
			this->label2->TabIndex = 10;
			this->label2->Text = L"d =";
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton10->Location = System::Drawing::Point(510, 82);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(130, 26);
			this->radioButton10->TabIndex = 9;
			this->radioButton10->Text = L"Вариант 10";
			this->radioButton10->UseVisualStyleBackColor = true;
			this->radioButton10->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton10_CheckedChanged);
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton9->Location = System::Drawing::Point(384, 82);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(120, 26);
			this->radioButton9->TabIndex = 8;
			this->radioButton9->Text = L"Вариант 9";
			this->radioButton9->UseVisualStyleBackColor = true;
			this->radioButton9->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton9_CheckedChanged);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton8->Location = System::Drawing::Point(258, 82);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(120, 26);
			this->radioButton8->TabIndex = 7;
			this->radioButton8->Text = L"Вариант 8";
			this->radioButton8->UseVisualStyleBackColor = true;
			this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton8_CheckedChanged);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton7->Location = System::Drawing::Point(132, 83);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(120, 26);
			this->radioButton7->TabIndex = 6;
			this->radioButton7->Text = L"Вариант 7";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton7_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton6->Location = System::Drawing::Point(6, 82);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(120, 26);
			this->radioButton6->TabIndex = 5;
			this->radioButton6->Text = L"Вариант 6";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton6_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton5->Location = System::Drawing::Point(510, 35);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(120, 26);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->Text = L"Вариант 5";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton5_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton4->Location = System::Drawing::Point(384, 35);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(120, 26);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->Text = L"Вариант 4";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->Location = System::Drawing::Point(258, 35);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(120, 26);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->Text = L"Вариант 3";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(132, 35);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(120, 26);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"Вариант 2";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(6, 35);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(120, 26);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Вариант 1";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(724, 68);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(529, 455);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->numericUpDown3);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->numericUpDown2);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->radioButton20);
			this->groupBox2->Controls->Add(this->radioButton19);
			this->groupBox2->Controls->Add(this->radioButton18);
			this->groupBox2->Controls->Add(this->radioButton17);
			this->groupBox2->Controls->Add(this->radioButton16);
			this->groupBox2->Controls->Add(this->radioButton15);
			this->groupBox2->Controls->Add(this->radioButton14);
			this->groupBox2->Controls->Add(this->radioButton13);
			this->groupBox2->Controls->Add(this->radioButton12);
			this->groupBox2->Controls->Add(this->radioButton11);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(12, 360);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(652, 225);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Задание 2";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(452, 156);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 29);
			this->label7->TabIndex = 16;
			this->label7->Text = L"mm";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(333, 154);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(120, 35);
			this->numericUpDown3->TabIndex = 15;
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown3_ValueChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(292, 156);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(50, 29);
			this->label6->TabIndex = 14;
			this->label6->Text = L"D =";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(210, 156);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 29);
			this->label5->TabIndex = 13;
			this->label5->Text = L"mm";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(84, 154);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 35);
			this->numericUpDown2->TabIndex = 12;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown2_ValueChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(46, 156);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 29);
			this->label4->TabIndex = 11;
			this->label4->Text = L"d =";
			// 
			// radioButton20
			// 
			this->radioButton20->AutoSize = true;
			this->radioButton20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton20->Location = System::Drawing::Point(510, 87);
			this->radioButton20->Name = L"radioButton20";
			this->radioButton20->Size = System::Drawing::Size(130, 26);
			this->radioButton20->TabIndex = 9;
			this->radioButton20->TabStop = true;
			this->radioButton20->Text = L"Вариант 10";
			this->radioButton20->UseVisualStyleBackColor = true;
			this->radioButton20->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton20_CheckedChanged);
			// 
			// radioButton19
			// 
			this->radioButton19->AutoSize = true;
			this->radioButton19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton19->Location = System::Drawing::Point(384, 87);
			this->radioButton19->Name = L"radioButton19";
			this->radioButton19->Size = System::Drawing::Size(120, 26);
			this->radioButton19->TabIndex = 8;
			this->radioButton19->TabStop = true;
			this->radioButton19->Text = L"Вариант 9";
			this->radioButton19->UseVisualStyleBackColor = true;
			this->radioButton19->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton19_CheckedChanged);
			// 
			// radioButton18
			// 
			this->radioButton18->AutoSize = true;
			this->radioButton18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton18->Location = System::Drawing::Point(258, 87);
			this->radioButton18->Name = L"radioButton18";
			this->radioButton18->Size = System::Drawing::Size(120, 26);
			this->radioButton18->TabIndex = 7;
			this->radioButton18->TabStop = true;
			this->radioButton18->Text = L"Вариант 8";
			this->radioButton18->UseVisualStyleBackColor = true;
			this->radioButton18->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton18_CheckedChanged);
			// 
			// radioButton17
			// 
			this->radioButton17->AutoSize = true;
			this->radioButton17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton17->Location = System::Drawing::Point(132, 87);
			this->radioButton17->Name = L"radioButton17";
			this->radioButton17->Size = System::Drawing::Size(120, 26);
			this->radioButton17->TabIndex = 6;
			this->radioButton17->Text = L"Вариант 7";
			this->radioButton17->UseVisualStyleBackColor = true;
			this->radioButton17->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton17_CheckedChanged);
			// 
			// radioButton16
			// 
			this->radioButton16->AutoSize = true;
			this->radioButton16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton16->Location = System::Drawing::Point(6, 87);
			this->radioButton16->Name = L"radioButton16";
			this->radioButton16->Size = System::Drawing::Size(120, 26);
			this->radioButton16->TabIndex = 5;
			this->radioButton16->Text = L"Вариант 6";
			this->radioButton16->UseVisualStyleBackColor = true;
			this->radioButton16->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton16_CheckedChanged);
			// 
			// radioButton15
			// 
			this->radioButton15->AutoSize = true;
			this->radioButton15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton15->Location = System::Drawing::Point(510, 34);
			this->radioButton15->Name = L"radioButton15";
			this->radioButton15->Size = System::Drawing::Size(120, 26);
			this->radioButton15->TabIndex = 4;
			this->radioButton15->Text = L"Вариант 5";
			this->radioButton15->UseVisualStyleBackColor = true;
			this->radioButton15->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton15_CheckedChanged);
			// 
			// radioButton14
			// 
			this->radioButton14->AutoSize = true;
			this->radioButton14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton14->Location = System::Drawing::Point(384, 34);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(120, 26);
			this->radioButton14->TabIndex = 3;
			this->radioButton14->Text = L"Вариант 4";
			this->radioButton14->UseVisualStyleBackColor = true;
			this->radioButton14->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton14_CheckedChanged);
			// 
			// radioButton13
			// 
			this->radioButton13->AutoSize = true;
			this->radioButton13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton13->Location = System::Drawing::Point(258, 34);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(120, 26);
			this->radioButton13->TabIndex = 2;
			this->radioButton13->Text = L"Вариант 3";
			this->radioButton13->UseVisualStyleBackColor = true;
			this->radioButton13->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton13_CheckedChanged);
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton12->Location = System::Drawing::Point(132, 34);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(120, 26);
			this->radioButton12->TabIndex = 1;
			this->radioButton12->Text = L"Вариант 2";
			this->radioButton12->UseVisualStyleBackColor = true;
			this->radioButton12->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton12_CheckedChanged);
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Checked = true;
			this->radioButton11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton11->Location = System::Drawing::Point(6, 34);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(120, 26);
			this->radioButton11->TabIndex = 0;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"Вариант 1";
			this->radioButton11->UseVisualStyleBackColor = true;
			this->radioButton11->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton11_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(862, 529);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(211, 56);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Рассчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripButton2,
					this->toolStripButton1
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1282, 33);
			this->toolStrip1->TabIndex = 5;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(34, 28);
			this->toolStripButton2->Text = L"go to GitHub";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton2_Click);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(34, 52);
			this->toolStripButton1->Text = L"Exit";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1282, 611);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
		short task_1 = 1, task_2 = 1;
		double N_1{}, N_2{}, Ro_p_1{}, Ro_p_2{}, Ro_m_1{}, Ro_m_2{};
		short d_1{}, d_2{}, D{};
#pragma endregion
		//Задание 1
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		task_1 = 1;
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		task_1 = 2;
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		task_1 = 3;
	}
	private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		task_1 = 4;
	}
	private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		task_1 = 5;
	}
	private: System::Void radioButton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		task_1 = 6;
	}
	private: System::Void radioButton7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		task_1 = 7;
	}
	private: System::Void radioButton8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		task_1 = 8;
	}
	private: System::Void radioButton9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		task_1 = 9;
	}
	private: System::Void radioButton10_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		task_1 = 10;
	}
		   void calc_task_1() {
			   switch (task_1)
			   {
			   case 1:
				   N_1 = 1480;
				   Ro_p_1 = 1260;
				   Ro_m_1 = 7800;
				   break;
			   case 2:
				   N_1 = 390;
				   Ro_p_1 = 900;
				   Ro_m_1 = 2500;
				   break;
			   case 3:
				   N_1 = 1.002;
				   Ro_p_1 = 1000;
				   Ro_m_1 = 1850;
				   break;
			   case 4:
				   N_1 = 10000;
				   Ro_p_1 = 1350;
				   Ro_m_1 = 8900;
				   break;
			   case 5:
				   N_1 = 865;
				   Ro_p_1 = 864;
				   Ro_m_1 = 2700;
				   break;
			   case 6:
				   N_1 = 1480;
				   Ro_p_1 = 1260;
				   Ro_m_1 = 11300;
				   break;
			   case 7:
				   N_1 = 987;
				   Ro_p_1 = 950;
				   Ro_m_1 = 2000;
				   break;
			   case 8:
				   N_1 = 1.54;
				   Ro_p_1 = 13600;
				   Ro_m_1 = 19300;
				   break;
			   case 9:
				   N_1 = 10000;
				   Ro_p_1 = 1350;
				   Ro_m_1 = 10500;
				   break;
			   case 10:
				   N_1 = 865;
				   Ro_p_1 = 864;
				   Ro_m_1 = 1650;
				   break;
			   }
		   }
		   //Задание 2
	private: System::Void radioButton11_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		task_2 = 1;
	}
private: System::Void radioButton12_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	task_2 = 2;
}
private: System::Void radioButton13_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	task_2 = 3;
}
private: System::Void radioButton14_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	task_2 = 4;
}
private: System::Void radioButton15_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	task_2 = 5;
}
private: System::Void radioButton16_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	task_2 = 6;
}
private: System::Void radioButton17_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	task_2 = 7;
}
private: System::Void radioButton18_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	task_2 = 8;
}
private: System::Void radioButton19_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	task_2 = 9;
}
private: System::Void radioButton20_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	task_2 = 10;
}
	   void calc_task_2() {
		   switch (task_2)
		   {
		   case 1:
			   N_2 = 1480;
			   Ro_p_2 = 1260;
			   Ro_m_2 = 7800;
			   
			   break;
		   case 2:
			   N_2 = 390;
			   Ro_p_2 = 900;
			   Ro_m_2 = 2500;
			   break;
		   case 3:
			   N_2 = 1.002;
			   Ro_p_2 = 1000;
			   Ro_m_2 = 1850;
			   break;
		   case 4:
			   N_2 = 10000;
			   Ro_p_2 = 1350;
			   Ro_m_2 = 8900;
			   break;
		   case 5:
			   N_2 = 865;
			   Ro_p_2 = 864;
			   Ro_m_2 = 2700;
			   break;
		   case 6:
			   N_2 = 1480;
			   Ro_p_2 = 1260;
			   Ro_m_2 = 11300;
			   break;
		   case 7:
			   N_2 = 987;
			   Ro_p_2 = 950;
			   Ro_m_2 = 2000;
			   break;
		   case 8:
			   N_2 = 1.54;
			   Ro_p_2 = 13600;
			   Ro_m_2 = 19300;
			   break;
		   case 9:
			   N_2 = 10000;
			   Ro_p_2 = 1350;
			   Ro_m_2 = 10500;
			   break;
		   case 10:
			   N_2 = 865;
			   Ro_p_2 = 864;
			   Ro_m_2 = 1650;
			   break;
		   }
	   }
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) { //task_1 {d}
}
private: System::Void numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e) { //task_2 {d}
}
private: System::Void numericUpDown3_ValueChanged(System::Object^ sender, System::EventArgs^ e) { //task_2 {D}
}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		richTextBox1->Clear();
		richTextBox1->ForeColor = Color::Black;

		calc_task_1();//получаем значения для первого задания
		calc_task_2();//получаем значения для второго задания

		d_1 = Convert::ToInt32(numericUpDown1->Value);
		d_2 = Convert::ToInt32(numericUpDown2->Value);
		D = Convert::ToInt32(numericUpDown3->Value);

		if (!d_1 || !d_2 || !D) {//проверка на наличие заполненных данных
			richTextBox1->ForeColor = Color::Red;
			richTextBox1->Text = ("\n\t\tERROR!!");

			MessageBox::Show("Не все поля заполнены, задайте все значения для расчета результата!", "Fatal Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (d_2 >= D) { //проверка на [D > d]
			richTextBox1->ForeColor = Color::Red;
			richTextBox1->Text = ("\n\t\tERROR!!");

			MessageBox::Show("Неверно указаны значения для d и D(Задании 2) не соблюдено условие:\n [D > d]", "Fatal Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (task_1 != task_2) {//проверка на один вариант для 2х заданий
			richTextBox1->ForeColor = Color::Red;
			richTextBox1->Text = ("\n\t\tERROR!!");

			MessageBox::Show("Варианты 1 и 2 Задания должны совпадать!", "Fatal Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	else {
		Fizika obj_1(TASK_1, N_1, Ro_p_1, Ro_m_1, d_1);
		Fizika obj_2(TASK_2, N_2, Ro_p_2, Ro_m_2, d_2, D);

		//system("cls");

		richTextBox1->AppendText("\t\tЗадание 1\tЗадание 2\n\tl, м\tt, c\t\tt, c\n");
		//std::cout << "Task:\t" << task_1 << "\nN_1:\t" << N_1 << "\nRo_p_1:\t" << Ro_p_1 << "\nRo_m_:\t" << Ro_m_1 << "\nd_1:\t" << d_1<< std::endl;//для отладки
		for (int i = 0; i < SIZE; i++) {
			richTextBox1->AppendText("\t"+obj_1.lenght[i].ToString("0.00") + "\t" + obj_1.RES[i].ToString("0.000")+"\t\t"+obj_2.RES[i].ToString("0.000")+"\n");
			
			//std::cout << "\t"<< obj_1.lenght[i] << "\t" << obj_1.RES[i] << "\t\t\t" << obj_2.RES[i]<< "\n"; //для отладки
		}
		richTextBox1->AppendText(L"\n\t\t\u03C1 m = "+Ro_m_1.ToString()+"кг/м^3"+ L"\n\t\t\u03C1 p = "+ Ro_p_1.ToString() +"кг/м^3");
	}
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::Close(); //кнопка закрытия программы
}
private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	//system("start chrome.exe github.com/maxpe3447/Stocks"); //кнопка перехода на гитхаб
	(gcnew System::Diagnostics::Process())->Start("https://github.com/maxpe3447/Stocks");
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
