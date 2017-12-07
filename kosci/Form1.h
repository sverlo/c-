#pragma once
#include "Bone.h"
#include <fstream>
#include <msclr\marshal_cppstd.h>

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


	public: Bone* b = new Bone;


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
	private: System::Windows::Forms::Button^  buttonPlay;
	private: System::Windows::Forms::Label^  labelOutput;
	protected:

	private: System::Windows::Forms::Button^  buttonClear;
	private: System::Windows::Forms::Label^  labelResult;
	private: System::Windows::Forms::Button^  buttonWrite;


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
			this->buttonPlay = (gcnew System::Windows::Forms::Button());
			this->labelOutput = (gcnew System::Windows::Forms::Label());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->labelResult = (gcnew System::Windows::Forms::Label());
			this->buttonWrite = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonPlay
			// 
			this->buttonPlay->Location = System::Drawing::Point(12, 12);
			this->buttonPlay->Name = L"buttonPlay";
			this->buttonPlay->Size = System::Drawing::Size(75, 23);
			this->buttonPlay->TabIndex = 0;
			this->buttonPlay->Text = L"Throw";
			this->buttonPlay->UseVisualStyleBackColor = true;
			this->buttonPlay->Click += gcnew System::EventHandler(this, &Form1::buttonPlay_Click);
			// 
			// labelOutput
			// 
			this->labelOutput->AutoSize = true;
			this->labelOutput->Location = System::Drawing::Point(108, 17);
			this->labelOutput->Name = L"labelOutput";
			this->labelOutput->Size = System::Drawing::Size(0, 13);
			this->labelOutput->TabIndex = 1;
			// 
			// buttonClear
			// 
			this->buttonClear->Location = System::Drawing::Point(12, 41);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(75, 23);
			this->buttonClear->TabIndex = 2;
			this->buttonClear->Text = L"Clear";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &Form1::buttonClear_Click);
			// 
			// labelResult
			// 
			this->labelResult->AutoSize = true;
			this->labelResult->Location = System::Drawing::Point(108, 46);
			this->labelResult->Name = L"labelResult";
			this->labelResult->Size = System::Drawing::Size(0, 13);
			this->labelResult->TabIndex = 3;
			// 
			// buttonWrite
			// 
			this->buttonWrite->Location = System::Drawing::Point(13, 71);
			this->buttonWrite->Name = L"buttonWrite";
			this->buttonWrite->Size = System::Drawing::Size(75, 23);
			this->buttonWrite->TabIndex = 4;
			this->buttonWrite->Text = L"Write to file";
			this->buttonWrite->UseVisualStyleBackColor = true;
			this->buttonWrite->Click += gcnew System::EventHandler(this, &Form1::buttonWrite_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 101);
			this->Controls->Add(this->buttonWrite);
			this->Controls->Add(this->labelResult);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->labelOutput);
			this->Controls->Add(this->buttonPlay);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->ShowIcon = false;
			this->Text = L"Bones";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonPlay_Click(System::Object^  sender, System::EventArgs^  e) {

		if (Bone::GetCounter() == 6)
		{
			Clear();
			return;
		}
		else
		{
			b->SetThrowsResult(Bone::GetCounter(), Bone::MakeThrow());
			//b->SetThrowsResult(Bone::GetCounter(), 1);
			labelOutput->Text += b->GetThrowsResult()[Bone::GetCounter()] + ", ";
			if (Bone::GetCounter() == 5)
			{
				Bone::SetPoint(b->GetThrowsResult());
				labelResult->Text = Convert::ToString(Bone::GetPoint());
			}
		}
		Bone::SetCounter(Bone::GetCounter() + 1);
	}
	private: System::Void buttonClear_Click(System::Object^  sender, System::EventArgs^  e) {
		Clear();
	}
	private: System::Void buttonWrite_Click(System::Object^  sender, System::EventArgs^  e) {
		std::ofstream f("task.txt");
		f << msclr::interop::marshal_as<std::string>(labelOutput->Text) + "\n";
		f << msclr::interop::marshal_as<std::string>(labelResult->Text);
		f.close();
	}
	private: void Clear()
	{
		labelOutput->Text = "";
		labelResult->Text = "";
		Bone::SetCounter(0);
	}
	};
}
