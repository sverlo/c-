#pragma once

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
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
	private: System::Windows::Forms::Label^  labelInput;
	private: System::Windows::Forms::TextBox^  textBoxInput;
	protected:

	private: System::Windows::Forms::Button^  buttonCompute;


	private: System::Windows::Forms::Button^  buttonClear;
	private: System::Windows::Forms::TextBox^  textBoxOutput;

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->labelInput = (gcnew System::Windows::Forms::Label());
			this->textBoxInput = (gcnew System::Windows::Forms::TextBox());
			this->buttonCompute = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->textBoxOutput = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// labelInput
			// 
			this->labelInput->AutoSize = true;
			this->labelInput->Location = System::Drawing::Point(12, 9);
			this->labelInput->Name = L"labelInput";
			this->labelInput->Size = System::Drawing::Size(94, 13);
			this->labelInput->TabIndex = 4;
			this->labelInput->Text = L"Enter the number: ";
			// 
			// textBoxInput
			// 
			this->textBoxInput->Location = System::Drawing::Point(112, 6);
			this->textBoxInput->Name = L"textBoxInput";
			this->textBoxInput->Size = System::Drawing::Size(75, 20);
			this->textBoxInput->TabIndex = 0;
			// 
			// buttonCompute
			// 
			this->buttonCompute->Location = System::Drawing::Point(15, 35);
			this->buttonCompute->Name = L"buttonCompute";
			this->buttonCompute->Size = System::Drawing::Size(76, 23);
			this->buttonCompute->TabIndex = 1;
			this->buttonCompute->Text = L"Calculate";
			this->buttonCompute->UseVisualStyleBackColor = true;
			this->buttonCompute->Click += gcnew System::EventHandler(this, &Form1::buttonCompute_Click);
			// 
			// buttonClear
			// 
			this->buttonClear->Location = System::Drawing::Point(112, 35);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(75, 23);
			this->buttonClear->TabIndex = 2;
			this->buttonClear->Text = L"Clear";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &Form1::buttonClear_Click);
			// 
			// textBoxOutput
			// 
			this->textBoxOutput->Location = System::Drawing::Point(15, 64);
			this->textBoxOutput->Multiline = true;
			this->textBoxOutput->Name = L"textBoxOutput";
			this->textBoxOutput->ReadOnly = true;
			this->textBoxOutput->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxOutput->Size = System::Drawing::Size(172, 71);
			this->textBoxOutput->TabIndex = 3;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(203, 139);
			this->Controls->Add(this->textBoxOutput);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->buttonCompute);
			this->Controls->Add(this->textBoxInput);
			this->Controls->Add(this->labelInput);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->ShowIcon = false;
			this->Text = L"Sito Eratostenesa";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: int n = 0;
	private: int * GetSimpleNumbers(int n)
	{
		int numberCount = n - 2;
		int simpleNumber = 2;
		int * numbers = new int[numberCount];

		for (int i = 0; i < numberCount; i++)
			numbers[i] = i + 2;

		int counter = 0;
		while (simpleNumber < n)
		{
			for (int i = simpleNumber*simpleNumber - 2; i < numberCount; i += simpleNumber)
				numbers[i] = -1;

			while (numbers[counter] <= simpleNumber)
				counter++;

			simpleNumber = numbers[counter];
		}
		return numbers;
	}
	private: System::Void buttonClear_Click(System::Object^  sender, System::EventArgs^  e) {
		textBoxInput->Clear();
		textBoxOutput->Clear();
		n = 0;
	}
	private: System::Void buttonCompute_Click(System::Object^  sender, System::EventArgs^  e) {
		textBoxOutput->Clear();

		n = Convert::ToInt32(textBoxInput->Text);
		if(n <= 1)
		{
			textBoxOutput->Text = "ERROR";
			return;
		}

		int * numbers = GetSimpleNumbers(n);

		for (int i = 0; i < n - 2; i++)
			if (numbers[i] != -1)
				textBoxOutput->Text += numbers[i] + ", ";

		delete[] numbers;
	}
	};
}
