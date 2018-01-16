#pragma once
#include <random>

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

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
	private: System::Windows::Forms::DataGridView^  dataGridViewChessboard;
	protected:

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ColumnA;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ColumnB;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ColumnC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ColumnD;
	private: System::Windows::Forms::RadioButton^  radioButtonNumbers;
	private: System::Windows::Forms::RadioButton^  radioButtonChars;

	private: System::Windows::Forms::GroupBox^  groupBoxChoice;
	private: System::Windows::Forms::Button^  buttonAdd;

	private: System::Windows::Forms::Button^  buttonUp;
	private: System::Windows::Forms::Button^  buttonDown;
	private: System::Windows::Forms::Button^  buttonLeft;
	private: System::Windows::Forms::Button^  buttonRight;

	private: System::Windows::Forms::Button^  buttonRemove;
	private: System::Windows::Forms::Button^  buttonRandom;
	private: System::Windows::Forms::GroupBox^  groupBoxStatistic;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::GroupBox^  groupBoxColor;
	private: System::Windows::Forms::RadioButton^  radioButtonBlueColor;
	private: System::Windows::Forms::RadioButton^  radioButtonGreenColor;
	private: System::Windows::Forms::RadioButton^  radioButtonRedColor;
	private: System::Windows::Forms::Button^  buttonClearAll;











	protected:





	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridViewChessboard = (gcnew System::Windows::Forms::DataGridView());
			this->ColumnA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnB = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnD = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->radioButtonNumbers = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonChars = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxChoice = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxColor = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonBlueColor = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonGreenColor = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonRedColor = (gcnew System::Windows::Forms::RadioButton());
			this->buttonRemove = (gcnew System::Windows::Forms::Button());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonUp = (gcnew System::Windows::Forms::Button());
			this->buttonDown = (gcnew System::Windows::Forms::Button());
			this->buttonLeft = (gcnew System::Windows::Forms::Button());
			this->buttonRight = (gcnew System::Windows::Forms::Button());
			this->buttonRandom = (gcnew System::Windows::Forms::Button());
			this->groupBoxStatistic = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonClearAll = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewChessboard))->BeginInit();
			this->groupBoxChoice->SuspendLayout();
			this->groupBoxColor->SuspendLayout();
			this->groupBoxStatistic->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridViewChessboard
			// 
			this->dataGridViewChessboard->AllowUserToAddRows = false;
			this->dataGridViewChessboard->AllowUserToDeleteRows = false;
			this->dataGridViewChessboard->AllowUserToResizeColumns = false;
			this->dataGridViewChessboard->AllowUserToResizeRows = false;
			this->dataGridViewChessboard->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewChessboard->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridViewChessboard->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewChessboard->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ColumnA,
					this->ColumnB, this->ColumnC, this->ColumnD
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewChessboard->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridViewChessboard->Location = System::Drawing::Point(242, 26);
			this->dataGridViewChessboard->Name = L"dataGridViewChessboard";
			this->dataGridViewChessboard->RightToLeft = System::Windows::Forms::RightToLeft::No;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewChessboard->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridViewChessboard->RowHeadersWidth = 42;
			this->dataGridViewChessboard->Size = System::Drawing::Size(165, 105);
			this->dataGridViewChessboard->TabIndex = 0;
			// 
			// ColumnA
			// 
			this->ColumnA->HeaderText = L"a";
			this->ColumnA->Name = L"ColumnA";
			this->ColumnA->ReadOnly = true;
			this->ColumnA->Width = 30;
			// 
			// ColumnB
			// 
			this->ColumnB->HeaderText = L"b";
			this->ColumnB->Name = L"ColumnB";
			this->ColumnB->ReadOnly = true;
			this->ColumnB->Width = 30;
			// 
			// ColumnC
			// 
			this->ColumnC->HeaderText = L"c";
			this->ColumnC->Name = L"ColumnC";
			this->ColumnC->ReadOnly = true;
			this->ColumnC->Width = 30;
			// 
			// ColumnD
			// 
			this->ColumnD->HeaderText = L"d";
			this->ColumnD->Name = L"ColumnD";
			this->ColumnD->ReadOnly = true;
			this->ColumnD->Width = 30;
			// 
			// radioButtonNumbers
			// 
			this->radioButtonNumbers->AutoSize = true;
			this->radioButtonNumbers->Location = System::Drawing::Point(10, 16);
			this->radioButtonNumbers->Name = L"radioButtonNumbers";
			this->radioButtonNumbers->Size = System::Drawing::Size(65, 17);
			this->radioButtonNumbers->TabIndex = 1;
			this->radioButtonNumbers->TabStop = true;
			this->radioButtonNumbers->Text = L"numbers";
			this->radioButtonNumbers->UseVisualStyleBackColor = true;
			// 
			// radioButtonChars
			// 
			this->radioButtonChars->AutoSize = true;
			this->radioButtonChars->Location = System::Drawing::Point(10, 37);
			this->radioButtonChars->Name = L"radioButtonChars";
			this->radioButtonChars->Size = System::Drawing::Size(51, 17);
			this->radioButtonChars->TabIndex = 2;
			this->radioButtonChars->TabStop = true;
			this->radioButtonChars->Text = L"chars";
			this->radioButtonChars->UseVisualStyleBackColor = true;
			// 
			// groupBoxChoice
			// 
			this->groupBoxChoice->Controls->Add(this->groupBoxColor);
			this->groupBoxChoice->Controls->Add(this->buttonRemove);
			this->groupBoxChoice->Controls->Add(this->buttonAdd);
			this->groupBoxChoice->Controls->Add(this->radioButtonNumbers);
			this->groupBoxChoice->Controls->Add(this->radioButtonChars);
			this->groupBoxChoice->Location = System::Drawing::Point(11, 6);
			this->groupBoxChoice->Name = L"groupBoxChoice";
			this->groupBoxChoice->Size = System::Drawing::Size(157, 90);
			this->groupBoxChoice->TabIndex = 3;
			this->groupBoxChoice->TabStop = false;
			this->groupBoxChoice->Text = L"Choose type:";
			// 
			// groupBoxColor
			// 
			this->groupBoxColor->Controls->Add(this->radioButtonBlueColor);
			this->groupBoxColor->Controls->Add(this->radioButtonGreenColor);
			this->groupBoxColor->Controls->Add(this->radioButtonRedColor);
			this->groupBoxColor->Location = System::Drawing::Point(85, 10);
			this->groupBoxColor->Name = L"groupBoxColor";
			this->groupBoxColor->Size = System::Drawing::Size(66, 74);
			this->groupBoxColor->TabIndex = 10;
			this->groupBoxColor->TabStop = false;
			this->groupBoxColor->Text = L"Colour:";
			// 
			// radioButtonBlueColor
			// 
			this->radioButtonBlueColor->AutoSize = true;
			this->radioButtonBlueColor->Location = System::Drawing::Point(10, 49);
			this->radioButtonBlueColor->Name = L"radioButtonBlueColor";
			this->radioButtonBlueColor->Size = System::Drawing::Size(46, 17);
			this->radioButtonBlueColor->TabIndex = 0;
			this->radioButtonBlueColor->TabStop = true;
			this->radioButtonBlueColor->Text = L"Blue";
			this->radioButtonBlueColor->UseVisualStyleBackColor = true;
			// 
			// radioButtonGreenColor
			// 
			this->radioButtonGreenColor->AutoSize = true;
			this->radioButtonGreenColor->Location = System::Drawing::Point(10, 34);
			this->radioButtonGreenColor->Name = L"radioButtonGreenColor";
			this->radioButtonGreenColor->Size = System::Drawing::Size(54, 17);
			this->radioButtonGreenColor->TabIndex = 0;
			this->radioButtonGreenColor->TabStop = true;
			this->radioButtonGreenColor->Text = L"Green";
			this->radioButtonGreenColor->UseVisualStyleBackColor = true;
			// 
			// radioButtonRedColor
			// 
			this->radioButtonRedColor->AutoSize = true;
			this->radioButtonRedColor->Location = System::Drawing::Point(10, 19);
			this->radioButtonRedColor->Name = L"radioButtonRedColor";
			this->radioButtonRedColor->Size = System::Drawing::Size(45, 17);
			this->radioButtonRedColor->TabIndex = 0;
			this->radioButtonRedColor->TabStop = true;
			this->radioButtonRedColor->Text = L"Red";
			this->radioButtonRedColor->UseVisualStyleBackColor = true;
			// 
			// buttonRemove
			// 
			this->buttonRemove->Location = System::Drawing::Point(41, 56);
			this->buttonRemove->Name = L"buttonRemove";
			this->buttonRemove->Size = System::Drawing::Size(34, 23);
			this->buttonRemove->TabIndex = 4;
			this->buttonRemove->Text = L"Del";
			this->buttonRemove->UseVisualStyleBackColor = true;
			this->buttonRemove->Click += gcnew System::EventHandler(this, &Form1::buttonRemove_Click);
			// 
			// buttonAdd
			// 
			this->buttonAdd->Location = System::Drawing::Point(4, 56);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(34, 23);
			this->buttonAdd->TabIndex = 3;
			this->buttonAdd->Text = L"Add";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &Form1::buttonAdd_Click);
			// 
			// buttonUp
			// 
			this->buttonUp->Location = System::Drawing::Point(159, 102);
			this->buttonUp->Name = L"buttonUp";
			this->buttonUp->Size = System::Drawing::Size(37, 23);
			this->buttonUp->TabIndex = 4;
			this->buttonUp->Text = L"↑";
			this->buttonUp->UseVisualStyleBackColor = true;
			this->buttonUp->Click += gcnew System::EventHandler(this, &Form1::buttonUp_Click);
			// 
			// buttonDown
			// 
			this->buttonDown->Location = System::Drawing::Point(159, 124);
			this->buttonDown->Name = L"buttonDown";
			this->buttonDown->Size = System::Drawing::Size(37, 23);
			this->buttonDown->TabIndex = 5;
			this->buttonDown->Text = L"↓";
			this->buttonDown->UseVisualStyleBackColor = true;
			this->buttonDown->Click += gcnew System::EventHandler(this, &Form1::buttonDown_Click);
			// 
			// buttonLeft
			// 
			this->buttonLeft->Location = System::Drawing::Point(123, 124);
			this->buttonLeft->Name = L"buttonLeft";
			this->buttonLeft->Size = System::Drawing::Size(37, 23);
			this->buttonLeft->TabIndex = 6;
			this->buttonLeft->Text = L"←";
			this->buttonLeft->UseVisualStyleBackColor = true;
			this->buttonLeft->Click += gcnew System::EventHandler(this, &Form1::buttonLeft_Click);
			// 
			// buttonRight
			// 
			this->buttonRight->Location = System::Drawing::Point(195, 124);
			this->buttonRight->Name = L"buttonRight";
			this->buttonRight->Size = System::Drawing::Size(37, 23);
			this->buttonRight->TabIndex = 7;
			this->buttonRight->Text = L"→";
			this->buttonRight->UseVisualStyleBackColor = true;
			this->buttonRight->Click += gcnew System::EventHandler(this, &Form1::buttonRight_Click);
			// 
			// buttonRandom
			// 
			this->buttonRandom->Location = System::Drawing::Point(174, 56);
			this->buttonRandom->Name = L"buttonRandom";
			this->buttonRandom->Size = System::Drawing::Size(62, 40);
			this->buttonRandom->TabIndex = 8;
			this->buttonRandom->Text = L"Random move";
			this->buttonRandom->UseVisualStyleBackColor = true;
			this->buttonRandom->Click += gcnew System::EventHandler(this, &Form1::buttonRandom_Click);
			// 
			// groupBoxStatistic
			// 
			this->groupBoxStatistic->Controls->Add(this->textBox1);
			this->groupBoxStatistic->Location = System::Drawing::Point(11, 102);
			this->groupBoxStatistic->Name = L"groupBoxStatistic";
			this->groupBoxStatistic->Size = System::Drawing::Size(110, 45);
			this->groupBoxStatistic->TabIndex = 9;
			this->groupBoxStatistic->TabStop = false;
			this->groupBoxStatistic->Text = L"Statistics:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(98, 20);
			this->textBox1->TabIndex = 0;
			// 
			// buttonClearAll
			// 
			this->buttonClearAll->Location = System::Drawing::Point(174, 12);
			this->buttonClearAll->Name = L"buttonClearAll";
			this->buttonClearAll->Size = System::Drawing::Size(62, 40);
			this->buttonClearAll->TabIndex = 4;
			this->buttonClearAll->Text = L"Clear All";
			this->buttonClearAll->UseVisualStyleBackColor = true;
			this->buttonClearAll->Click += gcnew System::EventHandler(this, &Form1::buttonClearAll_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(414, 197);
			this->Controls->Add(this->groupBoxStatistic);
			this->Controls->Add(this->buttonClearAll);
			this->Controls->Add(this->buttonRandom);
			this->Controls->Add(this->buttonRight);
			this->Controls->Add(this->buttonLeft);
			this->Controls->Add(this->buttonDown);
			this->Controls->Add(this->buttonUp);
			this->Controls->Add(this->groupBoxChoice);
			this->Controls->Add(this->dataGridViewChessboard);
			this->Name = L"Form1";
			this->Text = L"Pionki na plansze";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewChessboard))->EndInit();
			this->groupBoxChoice->ResumeLayout(false);
			this->groupBoxChoice->PerformLayout();
			this->groupBoxColor->ResumeLayout(false);
			this->groupBoxColor->PerformLayout();
			this->groupBoxStatistic->ResumeLayout(false);
			this->groupBoxStatistic->PerformLayout();
			this->ResumeLayout(false);
		}
#pragma endregion
	private: ref class Pawn
	{
	public:
		Pawn() {}
		~Pawn() {}
		System::Void SetColor(Color c) { _pawnColor = c; }
		Color GetColor() { return _pawnColor; }
		System::Void SetName(int min, int max)
		{
			_name = Convert::ToString(Convert::ToChar(GetRandomValue(min, max)));
		}
		System::String^ GetName() { return _name; }
		static System::Int32 GetRandomValue(System::Int32 minValue, System::Int32 maxValue)
		{
			std::random_device rd;
			std::mt19937 rng(rd());
			std::uniform_int_distribution<int> uni(minValue, maxValue);
			return uni(rng);
		}
	private:
		Color _pawnColor;// = Color::Black;
		System::String^ _name;

	};
	private: List<Pawn^>^ pawns = gcnew List<Pawn^>();
	private: int FindPawn()
	{
		int i = 0;
		for each (auto pawn in pawns)
		{
			if (pawn->GetName() == dataGridViewChessboard[dataGridViewChessboard->CurrentCell->ColumnIndex, dataGridViewChessboard->CurrentRow->Index]->Value->ToString())
				break;
			i++;
		}
		return i;
	}
	private: System::Void MakeStatistic(int column, int row)
	{
		switch (column)
		{
		case 0: textBox1->Text += "a"; break;
		case 1: textBox1->Text += "b"; break;
		case 2: textBox1->Text += "c"; break;
		case 3: textBox1->Text += "d"; break;
		default: break;
		}
		switch (row)
		{
		case 0: textBox1->Text += "1"; break;
		case 1: textBox1->Text += "2"; break;
		case 2: textBox1->Text += "3"; break;
		case 3: textBox1->Text += "4"; break;
		default: break;
		}
	}
	private: System::Void MakeChessboard()
	{
		dataGridViewChessboard->RowCount = 4;
		for (int i = 0; i < dataGridViewChessboard->RowCount; i++)
			dataGridViewChessboard->Rows[i]->HeaderCell->Value = Convert::ToString(dataGridViewChessboard->Rows[i]->Index + 1);

		for (int i = 0; i < dataGridViewChessboard->RowCount; i++)
			for (int j = 0; j < dataGridViewChessboard->ColumnCount; j++)
				dataGridViewChessboard->Rows[i]->Cells[j]->Style->BackColor = (((i % 2 == 0) && (j % 2 != 0)) || ((i % 2 != 0) && (j % 2 == 0))) ? Color::LightGray : Color::White;
	}
	private: System::Void BuildPawn()
	{
		textBox1->Clear();

		Pawn^ p = gcnew Pawn();
		pawns->Add(p);

		if (radioButtonRedColor->Checked)
			p->SetColor(Color::Red);
		else if (radioButtonGreenColor->Checked)
			p->SetColor(Color::Green);
		else if (radioButtonBlueColor->Checked)
			p->SetColor(Color::Blue);

		MakeChessboard();

		if (radioButtonNumbers->Checked)
		{
			if (dataGridViewChessboard->Rows[0]->Cells[0]->Value == nullptr)
			{
				p->SetName(48, 57);
				dataGridViewChessboard->Rows[0]->Cells[0]->Value = p->GetName();
				dataGridViewChessboard->Rows[0]->Cells[0]->Style->ForeColor = p->GetColor();
			}
		}
		else if (radioButtonChars->Checked)
		{
			if (dataGridViewChessboard->Rows[0]->Cells[0]->Value == nullptr)
			{
				p->SetName(97, 122);
				dataGridViewChessboard->Rows[0]->Cells[0]->Value = p->GetName();
				dataGridViewChessboard->Rows[0]->Cells[0]->Style->ForeColor = p->GetColor();
			}
		}
		else if (!radioButtonChars->Checked && !radioButtonNumbers->Checked)
		{
			dataGridViewChessboard->RowCount = 0;
			return;
		}

		MakeStatistic(0, 0);
	}
	private: System::Void buttonAdd_Click(System::Object^  sender, System::EventArgs^  e) {
		BuildPawn();
	}
	private: System::Void buttonClearAll_Click(System::Object^  sender, System::EventArgs^  e) {
		dataGridViewChessboard->Rows->Clear();
		textBox1->Clear();
		radioButtonBlueColor->Checked = false;
		radioButtonGreenColor->Checked = false;
		radioButtonRedColor->Checked = false;
		radioButtonChars->Checked = false;
		radioButtonNumbers->Checked = false;
		pawns->Clear();
	}
	private: System::Void buttonRemove_Click(System::Object^  sender, System::EventArgs^  e) {
		int t = FindPawn();
		pawns->RemoveAt(t);
		dataGridViewChessboard[dataGridViewChessboard->CurrentCell->ColumnIndex, dataGridViewChessboard->CurrentRow->Index]->Value = nullptr;
		textBox1->Clear();
	}
	private: System::Void buttonUp_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Clear();
		if (dataGridViewChessboard[dataGridViewChessboard->CurrentCell->ColumnIndex, dataGridViewChessboard->CurrentRow->Index]->Value != nullptr)
		{
			if (dataGridViewChessboard->CurrentRow->Index > 0)
			{
				if (dataGridViewChessboard[dataGridViewChessboard->CurrentCell->ColumnIndex, dataGridViewChessboard->CurrentRow->Index - 1]->Value == nullptr)
				{
					int t = FindPawn();
					dataGridViewChessboard[dataGridViewChessboard->CurrentCell->ColumnIndex, dataGridViewChessboard->CurrentRow->Index]->Value = nullptr;
					dataGridViewChessboard[dataGridViewChessboard->CurrentCell->ColumnIndex, dataGridViewChessboard->CurrentRow->Index - 1]->Value = pawns[t]->GetName();
					dataGridViewChessboard[dataGridViewChessboard->CurrentCell->ColumnIndex, dataGridViewChessboard->CurrentRow->Index - 1]->Style->ForeColor = pawns[t]->GetColor();

					MakeStatistic(dataGridViewChessboard->CurrentCell->ColumnIndex, dataGridViewChessboard->CurrentRow->Index - 1);
				}
			}
		}
	}
	private: System::Void buttonDown_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Clear();
		if (dataGridViewChessboard[dataGridViewChessboard->CurrentCell->ColumnIndex, dataGridViewChessboard->CurrentRow->Index]->Value != nullptr)
		{
			if (dataGridViewChessboard->CurrentRow->Index < 3)
			{
				if (dataGridViewChessboard[dataGridViewChessboard->CurrentCell->ColumnIndex, dataGridViewChessboard->CurrentRow->Index + 1]->Value == nullptr)
				{
					int t = FindPawn();
					dataGridViewChessboard[dataGridViewChessboard->CurrentCell->ColumnIndex, dataGridViewChessboard->CurrentRow->Index]->Value = nullptr;
					dataGridViewChessboard[dataGridViewChessboard->CurrentCell->ColumnIndex, dataGridViewChessboard->CurrentRow->Index + 1]->Value = pawns[t]->GetName();
					dataGridViewChessboard[dataGridViewChessboard->CurrentCell->ColumnIndex, dataGridViewChessboard->CurrentRow->Index + 1]->Style->ForeColor = pawns[t]->GetColor();
					MakeStatistic(dataGridViewChessboard->CurrentCell->ColumnIndex, dataGridViewChessboard->CurrentRow->Index + 1);
				}
			}
		}
	}
	private: System::Void buttonRight_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Clear();
		if (dataGridViewChessboard[dataGridViewChessboard->CurrentCell->ColumnIndex, dataGridViewChessboard->CurrentRow->Index]->Value != nullptr)
		{
			if (dataGridViewChessboard->CurrentCell->ColumnIndex < 3)
			{
				if (dataGridViewChessboard[dataGridViewChessboard->CurrentCell->ColumnIndex + 1, dataGridViewChessboard->CurrentRow->Index]->Value == nullptr)
				{
					int t = FindPawn();
					dataGridViewChessboard[dataGridViewChessboard->CurrentCell->ColumnIndex, dataGridViewChessboard->CurrentRow->Index]->Value = nullptr;
					dataGridViewChessboard[dataGridViewChessboard->CurrentCell->ColumnIndex + 1, dataGridViewChessboard->CurrentRow->Index]->Value = pawns[t]->GetName();
					dataGridViewChessboard[dataGridViewChessboard->CurrentCell->ColumnIndex + 1, dataGridViewChessboard->CurrentRow->Index]->Style->ForeColor = pawns[t]->GetColor();

					MakeStatistic(dataGridViewChessboard->CurrentCell->ColumnIndex + 1, dataGridViewChessboard->CurrentRow->Index);
				}
			}
		}
	}
	private: System::Void buttonLeft_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Clear();
		if (dataGridViewChessboard[dataGridViewChessboard->CurrentCell->ColumnIndex, dataGridViewChessboard->CurrentRow->Index]->Value != nullptr)
		{
			if (dataGridViewChessboard->CurrentCell->ColumnIndex > 0)
			{
				if (dataGridViewChessboard[dataGridViewChessboard->CurrentCell->ColumnIndex - 1, dataGridViewChessboard->CurrentRow->Index]->Value == nullptr)
				{
					int t = FindPawn();
					dataGridViewChessboard[dataGridViewChessboard->CurrentCell->ColumnIndex, dataGridViewChessboard->CurrentRow->Index]->Value = nullptr;
					dataGridViewChessboard[dataGridViewChessboard->CurrentCell->ColumnIndex - 1, dataGridViewChessboard->CurrentRow->Index]->Value = pawns[t]->GetName();
					dataGridViewChessboard[dataGridViewChessboard->CurrentCell->ColumnIndex - 1, dataGridViewChessboard->CurrentRow->Index]->Style->ForeColor = pawns[t]->GetColor();

					MakeStatistic(dataGridViewChessboard->CurrentCell->ColumnIndex - 1, dataGridViewChessboard->CurrentRow->Index);
				}
			}
		}
	}
	private: System::Void buttonRandom_Click(System::Object^  sender, System::EventArgs^  e) {
		if (dataGridViewChessboard[dataGridViewChessboard->CurrentCell->ColumnIndex, dataGridViewChessboard->CurrentRow->Index]->Value != nullptr)
		{
			switch (Pawn::GetRandomValue(1, 4))
			{
			case 1: buttonUp_Click(sender, e); break;
			case 2: buttonDown_Click(sender, e); break;
			case 3: buttonRight_Click(sender, e); break;
			case 4: buttonLeft_Click(sender, e); break;
			default: break;
			}
		}
	}
	};
}
