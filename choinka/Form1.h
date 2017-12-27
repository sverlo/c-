#pragma once


namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;

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
	private: System::Windows::Forms::Button^  buttonDraw;
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
			this->buttonDraw = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonDraw
			// 
			this->buttonDraw->Location = System::Drawing::Point(12, 12);
			this->buttonDraw->Name = L"buttonDraw";
			this->buttonDraw->Size = System::Drawing::Size(75, 23);
			this->buttonDraw->TabIndex = 0;
			this->buttonDraw->Text = L"Draw";
			this->buttonDraw->UseVisualStyleBackColor = true;
			this->buttonDraw->Click += gcnew System::EventHandler(this, &Form1::buttonDraw_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(577, 373);
			this->Controls->Add(this->buttonDraw);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void buttonDraw_Click(System::Object^  sender, System::EventArgs^  e) {
		Graphics^ picture = CreateGraphics();

		//Image^ newImage = Image::FromFile("choinka.jpg");
		//Rectangle destRect = Rectangle(0, 0, 500, 500);
		//pg->DrawImage(newImage, destRect);

		LinearGradientBrush^ brushTree = gcnew LinearGradientBrush(Point(200, 60), Point(285, 220), Color::LightGreen, Color::DarkGreen);
		LinearGradientBrush^ brushTrunk = gcnew LinearGradientBrush(Point(190, 220), Point(220, 255), Color::Brown, Color::Black);

		LinearGradientBrush^ brushYellow = gcnew LinearGradientBrush(Point(100, 100), Point(300, 100), Color::DarkOrange, Color::LightYellow);
		Pen^ penYellow = gcnew Pen(brushYellow, 10.0);
		LinearGradientBrush^ brushRed = gcnew LinearGradientBrush(Point(100, 100), Point(300, 100), Color::DarkRed, Color::OrangeRed);
		brushRed->GammaCorrection = true;
		Pen^ penRed = gcnew Pen(brushRed, 15.0);

		Point point0 = Point(115, 220);
		Point point1 = Point(160, 180);
		Point point2 = Point(120, 180);
		Point point3 = Point(160, 140);
		Point point4 = Point(140, 140);
		Point point5 = Point(180, 100);
		Point point6 = Point(160, 100);
		Point point7 = Point(200, 60);
		Point point8 = Point(240, 100);
		Point point9 = Point(220, 100);
		Point point10 = Point(260, 140);
		Point point11 = Point(240, 140);
		Point point12 = Point(280, 180);
		Point point13 = Point(240, 180);
		Point point14 = Point(285, 220);
		array<Point>^ treePoints = { point0, point1, point2, point3, point4, point5, point6, point7, point8, point9, point10, point11, point12, point13, point14 };

		picture->FillRectangle(brushTrunk, 190, 220, 20, 30);
		picture->FillPolygon(brushTree, treePoints);
		
		picture->DrawArc(penYellow, 0, 0, 265, 120, 20, 50);
		picture->DrawArc(penRed, 100, 0, 300, 210, 77, 75);

		FillEllipse(picture, 185, 85, 12, 12, Color::DarkRed);
		FillEllipse(picture, 210, 130, 15, 15, Color::Orchid);
		FillEllipse(picture, 170, 140, 7, 15, Color::DarkBlue);
		FillEllipse(picture, 245, 160, 8, 20, Color::Turquoise);
		FillEllipse(picture, 190, 170, 18, 18, Color::DarkOrange);
		FillEllipse(picture, 145, 205, 20, 20, Color::DarkMagenta);

		delete picture;
	}
	private: void FillEllipse(Graphics^ pic, int x, int y, int w, int h, Color color)
	{
		GraphicsPath^ ellipse1 = gcnew GraphicsPath();
		ellipse1->AddEllipse(x, y, w, h);
		PathGradientBrush^ brushWhite = gcnew PathGradientBrush(ellipse1);
		brushWhite->CenterPoint = Point(x, y);
		brushWhite->CenterColor = Color::White;
		array<Color>^ colors = { color };
		brushWhite->SurroundColors = colors;
		pic->FillEllipse(brushWhite, x, y, w, h);
	}
	};
}
