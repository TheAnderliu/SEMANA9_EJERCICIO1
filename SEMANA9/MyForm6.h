#pragma once

namespace SEMANA9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm6
	/// </summary>
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	public:
		MyForm6(void)
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
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnGenerar;
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
			this->btnGenerar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnGenerar
			// 
			this->btnGenerar->Location = System::Drawing::Point(24, 33);
			this->btnGenerar->Name = L"btnGenerar";
			this->btnGenerar->Size = System::Drawing::Size(75, 23);
			this->btnGenerar->TabIndex = 0;
			this->btnGenerar->Text = L"Generar";
			this->btnGenerar->UseVisualStyleBackColor = true;
			this->btnGenerar->Click += gcnew System::EventHandler(this, &MyForm6::btnGenerar_Click);
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(925, 465);
			this->Controls->Add(this->btnGenerar);
			this->Name = L"MyForm6";
			this->Text = L"MyForm6";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnGenerar_Click(System::Object^  sender, System::EventArgs^  e) {

		for (int i = 0; i < 3; i++)
		{
			Button ^btn = gcnew Button();
			btn->Width = 50;
			btn->Height = 50;
			btn->Left = 200 + (i * 50);
			btn->Top = 50 ;
			btn->Text = (i+1).ToString();
			btn->Parent = this;
		}
		for (int i = 3; i < 6; i++)
		{
			Button ^btn = gcnew Button();
			btn->Width = 50;
			btn->Height = 50;
			btn->Left = 200 + ((i-3) * 50);
			btn->Top = 100;
			btn->Text = (i + 1).ToString();
			btn->Parent = this;
		}

		for (int i = 6; i < 9; i++)
		{
			Button ^btn = gcnew Button();
			btn->Width = 50;
			btn->Height = 50;
			btn->Left = 200 + ((i - 6) * 50);
			btn->Top = 150;
			btn->Text = (i + 1).ToString();
			btn->Parent = this;
		}

		for (int i = 9; i < 12; i++)
		{
			Button ^btn = gcnew Button();
			btn->Width = 50;
			btn->Height = 50;
			btn->Left = 200 + ((i - 9) * 50);
			btn->Top = 200;
			if (i==9)
			{
				btn->Text = "*";
			}
			else if (i==10)
			{
				btn->Text = "0";
			}
			else if (i==11)
			{
				btn->Text = "#";
			}
			btn->Parent = this;
		}

		Label ^txtgenerado = gcnew Label();
		txtgenerado->Text = "Autogenerado";
		txtgenerado->Left = this->ClientSize.Width-100;
		txtgenerado->Top = 100;
		txtgenerado->Parent = this;

	}
	};
}
