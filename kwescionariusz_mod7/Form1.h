#pragma once
#include <fstream>
#include <iostream>
#include <string>
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
	private: System::Windows::Forms::Button^  buttonAdd;
	private: System::Windows::Forms::DataGridView^  dataGridViewData;
	protected:


	private: System::Windows::Forms::Button^  buttonClear;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ColumnName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ColumnSurname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ColumnAdress;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ColumnBirthday;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ColumnPhone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ColumnEmail;
	private: System::Windows::Forms::Button^  buttonRead;
	private: System::Windows::Forms::Button^  buttonDelete;
	private: System::Windows::Forms::TextBox^  textBox1;



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
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->dataGridViewData = (gcnew System::Windows::Forms::DataGridView());
			this->ColumnName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnSurname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnAdress = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnBirthday = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnPhone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnEmail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->buttonRead = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewData))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonAdd
			// 
			this->buttonAdd->Location = System::Drawing::Point(245, 196);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(122, 23);
			this->buttonAdd->TabIndex = 0;
			this->buttonAdd->Text = L"Write data to file";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &Form1::buttonWrite_Click);
			// 
			// dataGridViewData
			// 
			this->dataGridViewData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewData->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->ColumnName,
					this->ColumnSurname, this->ColumnAdress, this->ColumnBirthday, this->ColumnPhone, this->ColumnEmail
			});
			this->dataGridViewData->Location = System::Drawing::Point(12, 12);
			this->dataGridViewData->Name = L"dataGridViewData";
			this->dataGridViewData->Size = System::Drawing::Size(676, 177);
			this->dataGridViewData->TabIndex = 1;
			// 
			// ColumnName
			// 
			this->ColumnName->HeaderText = L"Name";
			this->ColumnName->Name = L"ColumnName";
			// 
			// ColumnSurname
			// 
			this->ColumnSurname->HeaderText = L"Surname";
			this->ColumnSurname->Name = L"ColumnSurname";
			// 
			// ColumnAdress
			// 
			this->ColumnAdress->HeaderText = L"Home adress";
			this->ColumnAdress->Name = L"ColumnAdress";
			this->ColumnAdress->Width = 150;
			// 
			// ColumnBirthday
			// 
			this->ColumnBirthday->HeaderText = L"Birth date";
			this->ColumnBirthday->Name = L"ColumnBirthday";
			this->ColumnBirthday->Width = 75;
			// 
			// ColumnPhone
			// 
			this->ColumnPhone->HeaderText = L"Phone number";
			this->ColumnPhone->Name = L"ColumnPhone";
			// 
			// ColumnEmail
			// 
			this->ColumnEmail->HeaderText = L"Email";
			this->ColumnEmail->Name = L"ColumnEmail";
			// 
			// buttonClear
			// 
			this->buttonClear->Location = System::Drawing::Point(593, 195);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(90, 23);
			this->buttonClear->TabIndex = 2;
			this->buttonClear->Text = L"Clear table";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &Form1::buttonClear_Click);
			// 
			// buttonRead
			// 
			this->buttonRead->Location = System::Drawing::Point(373, 196);
			this->buttonRead->Name = L"buttonRead";
			this->buttonRead->Size = System::Drawing::Size(118, 23);
			this->buttonRead->TabIndex = 0;
			this->buttonRead->Text = L"Load data from file";
			this->buttonRead->UseVisualStyleBackColor = true;
			this->buttonRead->Click += gcnew System::EventHandler(this, &Form1::buttonRead_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->Location = System::Drawing::Point(497, 196);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(90, 23);
			this->buttonDelete->TabIndex = 2;
			this->buttonDelete->Text = L"Delete row";
			this->buttonDelete->UseVisualStyleBackColor = true;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &Form1::buttonDelete_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(73, 196);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 230);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->buttonDelete);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->dataGridViewData);
			this->Controls->Add(this->buttonRead);
			this->Controls->Add(this->buttonAdd);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewData))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void MarshalString(String ^ s, std::string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}
	private: System::Void buttonClear_Click(System::Object^  sender, System::EventArgs^  e) {
		dataGridViewData->Rows->Clear();
	}
	private: System::Void buttonWrite_Click(System::Object^  sender, System::EventArgs^  e) {
		std::ofstream f("test.txt");
		for (int i = 0; i < dataGridViewData->RowCount - 1; i++)
		{
			for (int j = 0; j < dataGridViewData->ColumnCount; j++)
			{
				String^ tmp1 = dataGridViewData->Rows[i]->Cells[j]->Value->ToString();
				std::string tmp2 = "";
				MarshalString(tmp1, tmp2);
				f << tmp2;
				if (j != dataGridViewData->ColumnCount - 1)
					f << std::endl;
			}
			if (i != dataGridViewData->RowCount - 2)
				f << std::endl;
		}
		f.close();
		dataGridViewData->Rows->Clear();
	}

	private: System::Void buttonRead_Click(System::Object^  sender, System::EventArgs^  e) {
		dataGridViewData->Rows->Clear();
		std::ifstream f("test.txt");
		int i = 0;
		while (!f.eof())
		{
			dataGridViewData->Rows->Add();
			for (int j = 0; j < dataGridViewData->ColumnCount; j++)
			{
				char tmp[100];
				f.getline(tmp, 100);
				dataGridViewData->Rows[i]->Cells[j]->Value = gcnew String(tmp);
			}
			i++;
		}
		f.close();
	}
	private: System::Void buttonDelete_Click(System::Object^  sender, System::EventArgs^  e) {
		int selectedCount = dataGridViewData->SelectedRows->Count;
		while (selectedCount > 0)
		{
			if (!dataGridViewData->SelectedRows[0]->IsNewRow)
				dataGridViewData->Rows->RemoveAt(dataGridViewData->SelectedRows[0]->Index);
			selectedCount--;
		}
	}
};
}