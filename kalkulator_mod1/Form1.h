#pragma once
#include <iostream>
#include <cmath>
#include <fstream>
namespace CppCLR_WinformsProjekt {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}
	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button0;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  buttonCE;
	private: System::Windows::Forms::Button^  buttonSqrt;
	private: System::Windows::Forms::Button^  buttonPower;
	private: System::Windows::Forms::Button^  buttonSub;
	private: System::Windows::Forms::Button^  buttonAdd;
	private: System::Windows::Forms::Button^  buttonMul;
	private: System::Windows::Forms::Button^  buttonDiv;
	private: System::Windows::Forms::Button^  buttonFloat;
	private: System::Windows::Forms::Button^  buttonEqual;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  buttonAbs;
	private: System::Windows::Forms::Button^  buttonWriteToFile;
	private: System::Windows::Forms::Label^  labelHistory;
	private: System::Windows::Forms::Label^  labelDateTime;
	private: System::ComponentModel::IContainer^  components;
	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->buttonCE = (gcnew System::Windows::Forms::Button());
			this->buttonSqrt = (gcnew System::Windows::Forms::Button());
			this->buttonPower = (gcnew System::Windows::Forms::Button());
			this->buttonSub = (gcnew System::Windows::Forms::Button());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonMul = (gcnew System::Windows::Forms::Button());
			this->buttonDiv = (gcnew System::Windows::Forms::Button());
			this->buttonFloat = (gcnew System::Windows::Forms::Button());
			this->buttonEqual = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonAbs = (gcnew System::Windows::Forms::Button());
			this->buttonWriteToFile = (gcnew System::Windows::Forms::Button());
			this->labelHistory = (gcnew System::Windows::Forms::Label());
			this->labelDateTime = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button0
			// 
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button0->Location = System::Drawing::Point(67, 294);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(60, 40);
			this->button0->TabIndex = 1;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &Form1::buttonNums_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(67, 174);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(60, 40);
			this->button8->TabIndex = 9;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::buttonNums_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(128, 214);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 40);
			this->button6->TabIndex = 7;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::buttonNums_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(67, 214);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(60, 40);
			this->button5->TabIndex = 6;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::buttonNums_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(6, 214);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 40);
			this->button4->TabIndex = 5;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::buttonNums_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(128, 254);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(60, 40);
			this->button3->TabIndex = 4;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::buttonNums_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(67, 254);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 40);
			this->button2->TabIndex = 3;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::buttonNums_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(6, 254);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 40);
			this->button1->TabIndex = 2;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::buttonNums_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(128, 174);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(60, 40);
			this->button9->TabIndex = 10;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::buttonNums_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(6, 174);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(60, 40);
			this->button7->TabIndex = 8;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::buttonNums_Click);
			// 
			// buttonCE
			// 
			this->buttonCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCE->Location = System::Drawing::Point(6, 134);
			this->buttonCE->Name = L"buttonCE";
			this->buttonCE->Size = System::Drawing::Size(60, 40);
			this->buttonCE->TabIndex = 13;
			this->buttonCE->Text = L"CE";
			this->buttonCE->UseVisualStyleBackColor = true;
			this->buttonCE->Click += gcnew System::EventHandler(this, &Form1::buttonCE_Click);
			// 
			// buttonSqrt
			// 
			this->buttonSqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSqrt->Location = System::Drawing::Point(67, 134);
			this->buttonSqrt->Name = L"buttonSqrt";
			this->buttonSqrt->Size = System::Drawing::Size(60, 40);
			this->buttonSqrt->TabIndex = 14;
			this->buttonSqrt->Text = L"√";
			this->buttonSqrt->UseVisualStyleBackColor = true;
			this->buttonSqrt->Click += gcnew System::EventHandler(this, &Form1::buttonSqrt_Click);
			// 
			// buttonPower
			// 
			this->buttonPower->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonPower->Location = System::Drawing::Point(128, 134);
			this->buttonPower->Name = L"buttonPower";
			this->buttonPower->Size = System::Drawing::Size(60, 40);
			this->buttonPower->TabIndex = 15;
			this->buttonPower->Text = L"x²";
			this->buttonPower->UseVisualStyleBackColor = true;
			this->buttonPower->Click += gcnew System::EventHandler(this, &Form1::buttonPower_Click);
			// 
			// buttonSub
			// 
			this->buttonSub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSub->Location = System::Drawing::Point(189, 214);
			this->buttonSub->Name = L"buttonSub";
			this->buttonSub->Size = System::Drawing::Size(60, 40);
			this->buttonSub->TabIndex = 18;
			this->buttonSub->Text = L"-";
			this->buttonSub->UseVisualStyleBackColor = true;
			this->buttonSub->Click += gcnew System::EventHandler(this, &Form1::buttonOperation_Click);
			// 
			// buttonAdd
			// 
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAdd->Location = System::Drawing::Point(189, 254);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(60, 40);
			this->buttonAdd->TabIndex = 19;
			this->buttonAdd->Text = L"+";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &Form1::buttonOperation_Click);
			// 
			// buttonMul
			// 
			this->buttonMul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMul->Location = System::Drawing::Point(189, 174);
			this->buttonMul->Name = L"buttonMul";
			this->buttonMul->Size = System::Drawing::Size(60, 40);
			this->buttonMul->TabIndex = 17;
			this->buttonMul->Text = L"*";
			this->buttonMul->UseVisualStyleBackColor = true;
			this->buttonMul->Click += gcnew System::EventHandler(this, &Form1::buttonOperation_Click);
			// 
			// buttonDiv
			// 
			this->buttonDiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDiv->Location = System::Drawing::Point(189, 134);
			this->buttonDiv->Name = L"buttonDiv";
			this->buttonDiv->Size = System::Drawing::Size(60, 40);
			this->buttonDiv->TabIndex = 16;
			this->buttonDiv->Text = L"/";
			this->buttonDiv->UseVisualStyleBackColor = true;
			this->buttonDiv->Click += gcnew System::EventHandler(this, &Form1::buttonOperation_Click);
			// 
			// buttonFloat
			// 
			this->buttonFloat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonFloat->Location = System::Drawing::Point(128, 294);
			this->buttonFloat->Name = L"buttonFloat";
			this->buttonFloat->Size = System::Drawing::Size(60, 40);
			this->buttonFloat->TabIndex = 12;
			this->buttonFloat->Text = L",";
			this->buttonFloat->UseVisualStyleBackColor = true;
			this->buttonFloat->Click += gcnew System::EventHandler(this, &Form1::buttonFloat_Click);
			// 
			// buttonEqual
			// 
			this->buttonEqual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonEqual->Location = System::Drawing::Point(189, 294);
			this->buttonEqual->Name = L"buttonEqual";
			this->buttonEqual->Size = System::Drawing::Size(60, 40);
			this->buttonEqual->TabIndex = 0;
			this->buttonEqual->Text = L"=";
			this->buttonEqual->UseVisualStyleBackColor = true;
			this->buttonEqual->Click += gcnew System::EventHandler(this, &Form1::buttonEqual_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox1->ShortcutsEnabled = false;
			this->textBox1->Size = System::Drawing::Size(230, 83);
			this->textBox1->TabIndex = 13;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// buttonAbs
			// 
			this->buttonAbs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAbs->Location = System::Drawing::Point(6, 294);
			this->buttonAbs->Name = L"buttonAbs";
			this->buttonAbs->Size = System::Drawing::Size(60, 40);
			this->buttonAbs->TabIndex = 11;
			this->buttonAbs->Text = L"±";
			this->buttonAbs->UseVisualStyleBackColor = true;
			this->buttonAbs->Click += gcnew System::EventHandler(this, &Form1::buttonAbs_Click);
			// 
			// buttonWriteToFile
			// 
			this->buttonWriteToFile->Location = System::Drawing::Point(6, 335);
			this->buttonWriteToFile->Name = L"buttonWriteToFile";
			this->buttonWriteToFile->Size = System::Drawing::Size(243, 23);
			this->buttonWriteToFile->TabIndex = 20;
			this->buttonWriteToFile->Text = L"Save history to the file";
			this->buttonWriteToFile->UseVisualStyleBackColor = true;
			this->buttonWriteToFile->Click += gcnew System::EventHandler(this, &Form1::buttonWriteToFile_Click);
			// 
			// labelHistory
			// 
			this->labelHistory->Font = (gcnew System::Drawing::Font(L"Mistral", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelHistory->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->labelHistory->Location = System::Drawing::Point(12, 9);
			this->labelHistory->Name = L"labelHistory";
			this->labelHistory->Size = System::Drawing::Size(230, 19);
			this->labelHistory->TabIndex = 15;
			this->labelHistory->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// labelDateTime
			// 
			this->labelDateTime->AutoSize = true;
			this->labelDateTime->Location = System::Drawing::Point(186, 361);
			this->labelDateTime->Name = L"labelDateTime";
			this->labelDateTime->Size = System::Drawing::Size(0, 13);
			this->labelDateTime->TabIndex = 21;
			this->labelDateTime->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(254, 380);
			this->Controls->Add(this->labelDateTime);
			this->Controls->Add(this->labelHistory);
			this->Controls->Add(this->buttonWriteToFile);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->buttonDiv);
			this->Controls->Add(this->buttonPower);
			this->Controls->Add(this->buttonSqrt);
			this->Controls->Add(this->buttonCE);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->buttonMul);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->buttonEqual);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->buttonFloat);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->buttonSub);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->buttonAbs);
			this->Controls->Add(this->button0);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calc";
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Form1_KeyPress);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: double operand1 = 0;
			 String^ operation = "";
			 String^ history = "";
			 bool isSimpleOperation = false;
			 bool isFirstCalculate = true;
			 bool isComplexOperation = false;
			 bool isEnteredNewOperand = false;
	private: System::Void buttonNums_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0" || isSimpleOperation)
			textBox1->Clear();

		isSimpleOperation = false;
		Button^ b = (Button^)sender;
		textBox1->Text += b->Text;
		isEnteredNewOperand = true;
	}
	private: System::Void buttonCE_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text = "0";
		textBox1->ReadOnly = false;
		labelHistory->Text = "";
		labelDateTime->Text = "";
		operand1 = 0;
	}
	private: System::Void buttonFloat_Click(System::Object^  sender, System::EventArgs^  e) {
		Button^ b = (Button^)sender;
		if (isComplexOperation)
		{
			textBox1->Clear();
			labelHistory->Text = "";
		}
		if (b->Text == "0" && !textBox1->Text->Contains(","))
			textBox1->Text += b->Text;
		else if (b->Text != "0" && !textBox1->Text->Contains(","))
			textBox1->Text += b->Text;
		isSimpleOperation = false;
	}
	private: System::Void buttonOperation_Click(System::Object^  sender, System::EventArgs^  e) {
		Button^ b = (Button^)sender;
		if (operand1 != 0) {
			ChooseOperation(operation);
			isSimpleOperation = true;
			operation = b->Text;
			labelHistory->Text += " " + operation + " ";
			operand1 = Convert::ToDouble(textBox1->Text);
		}
		else {
			operation = b->Text;
			operand1 = Convert::ToDouble(textBox1->Text);
			isSimpleOperation = true;
			if (isComplexOperation)
			{
				labelHistory->Text += " " + operation + " ";
				isComplexOperation = false;
			}
			else
				labelHistory->Text += operand1 + " " + operation + " ";
		}
	}
	private: System::Void buttonEqual_Click(System::Object^  sender, System::EventArgs^  e) {
		history += labelHistory->Text + " " + textBox1->Text + " = ";
		labelDateTime->Text = "";
		if (isFirstCalculate)
		{
			labelDateTime->Text = DateTime::Now.ToString("dd.MM.yyyy");
			isFirstCalculate = false;
		}
		ChooseOperation(operation);
		operand1 = Convert::ToDouble(textBox1->Text);
		operation = "";
		isSimpleOperation = true;
		labelHistory->Text = "";
		history += operand1 + "\n";
	}
	private: System::Void Form1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		switch (Convert::ToChar(e->KeyChar))
		{
		case '0': textBox1->ReadOnly = false; button0->PerformClick(); isSimpleOperation = false; break;
		case '1': textBox1->ReadOnly = false; button1->PerformClick(); isSimpleOperation = false; break;
		case '2': textBox1->ReadOnly = false; button2->PerformClick(); isSimpleOperation = false; break;
		case '3': textBox1->ReadOnly = false; button3->PerformClick(); isSimpleOperation = false; break;
		case '4':textBox1->ReadOnly = false; button4->PerformClick(); isSimpleOperation = false; break;
		case '5': textBox1->ReadOnly = false; button5->PerformClick(); isSimpleOperation = false; break;
		case '6':textBox1->ReadOnly = false; button6->PerformClick(); isSimpleOperation = false; break;
		case '7':textBox1->ReadOnly = false; button7->PerformClick(); isSimpleOperation = false; break;
		case '8':textBox1->ReadOnly = false; button8->PerformClick(); isSimpleOperation = false; break;
		case '9':textBox1->ReadOnly = false; button9->PerformClick();  isSimpleOperation = false; break;
		case ',': textBox1->ReadOnly = false; buttonFloat->PerformClick(); isSimpleOperation = false; break;
		case '+':textBox1->ReadOnly = false; buttonAdd->PerformClick(); isSimpleOperation = true; break;
		case '-': textBox1->ReadOnly = false; buttonSub->PerformClick(); isSimpleOperation = true; break;
		case '*':textBox1->ReadOnly = false; buttonMul->PerformClick(); isSimpleOperation = true; break;
		case '/':textBox1->ReadOnly = false; buttonDiv->PerformClick();  isSimpleOperation = true; break;
		case '=': textBox1->ReadOnly = false; buttonEqual->PerformClick(); isSimpleOperation = true; break;
		default: textBox1->ReadOnly = true; break;
		}
	}
	private: System::Void buttonSqrt_Click(System::Object^  sender, System::EventArgs^  e) {
		labelHistory->Text += " sqrt(" + Convert::ToDouble(textBox1->Text) + ") ";
		textBox1->Text = sqrt(Convert::ToDouble(textBox1->Text)).ToString();
		isSimpleOperation = true;
		isComplexOperation = true;
	}
	private: System::Void buttonPower_Click(System::Object^  sender, System::EventArgs^  e) {
		labelHistory->Text += " sqr(" + Convert::ToDouble(textBox1->Text) + ") ";
		textBox1->Text = pow(Convert::ToDouble(textBox1->Text), 2).ToString();
		isSimpleOperation = true;
		isComplexOperation = true;
	}
	private: System::Void buttonAbs_Click(System::Object^  sender, System::EventArgs^  e) {
		labelHistory->Text += "-" + Convert::ToDouble(textBox1->Text);
		textBox1->Text = (-1 * Convert::ToDouble(textBox1->Text)).ToString();
		isSimpleOperation = true;
		isComplexOperation = true;
	}
	private: void ChooseOperation(String^ operation)
	{
		if (!isComplexOperation)
			labelHistory->Text += Convert::ToDouble(textBox1->Text);
		char operationSymbol;
		if (operation == "")
			return;
		else
			operationSymbol = Convert::ToChar(operation);
		switch (operationSymbol)
		{
		case '+': textBox1->Text = (operand1 + Convert::ToDouble(textBox1->Text)).ToString(); break;
		case '-': textBox1->Text = (operand1 - Convert::ToDouble(textBox1->Text)).ToString(); break;
		case '*': textBox1->Text = (operand1 * Convert::ToDouble(textBox1->Text)).ToString(); break;
		case '/': textBox1->Text = (operand1 / Convert::ToDouble(textBox1->Text)).ToString(); break;
		default: textBox1->Text = "Nothing to calculate"; break;
		}
	}
	private: System::Void buttonWriteToFile_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ date = DateTime::Now.ToString("dd-MM-yy_HH_mm");
		std::string fileName = "";
		MarshalString(date, fileName);
		fileName += ".txt";
		std::ofstream out(fileName);
		std::string h = "";
		MarshalString(history, h);
		out << h.c_str();
		out.close();
	}
	private: void MarshalString(String ^ s, std::string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}
	};
}
