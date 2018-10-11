#pragma once

namespace SEMANA9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		MyForm5(void)
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
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  LblPregunta;
	protected:
	private: System::Windows::Forms::Button^  btnVerde;
	private: System::Windows::Forms::Button^  btnRojo;

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
			this->LblPregunta = (gcnew System::Windows::Forms::Label());
			this->btnVerde = (gcnew System::Windows::Forms::Button());
			this->btnRojo = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// LblPregunta
			// 
			this->LblPregunta->AutoSize = true;
			this->LblPregunta->Location = System::Drawing::Point(147, 63);
			this->LblPregunta->Name = L"LblPregunta";
			this->LblPregunta->Size = System::Drawing::Size(35, 13);
			this->LblPregunta->TabIndex = 0;
			this->LblPregunta->Text = L"label1";
			// 
			// btnVerde
			// 
			this->btnVerde->Location = System::Drawing::Point(225, 144);
			this->btnVerde->Name = L"btnVerde";
			this->btnVerde->Size = System::Drawing::Size(75, 23);
			this->btnVerde->TabIndex = 1;
			this->btnVerde->Text = L"Azul";
			this->btnVerde->UseVisualStyleBackColor = true;
			this->btnVerde->Click += gcnew System::EventHandler(this, &MyForm5::btnVerde_Click);
			// 
			// btnRojo
			// 
			this->btnRojo->Location = System::Drawing::Point(28, 144);
			this->btnRojo->Name = L"btnRojo";
			this->btnRojo->Size = System::Drawing::Size(75, 23);
			this->btnRojo->TabIndex = 2;
			this->btnRojo->Text = L"Rojo";
			this->btnRojo->UseVisualStyleBackColor = true;
			this->btnRojo->Click += gcnew System::EventHandler(this, &MyForm5::btnRojo_Click);
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(356, 296);
			this->Controls->Add(this->btnRojo);
			this->Controls->Add(this->btnVerde);
			this->Controls->Add(this->LblPregunta);
			this->Name = L"MyForm5";
			this->Text = L"MyForm5";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private:
		int presionado;
		System::Void btnRojo_Click(System::Object^  sender, System::EventArgs^  e) {

			presionado = 1;
			this->Close();
	}



	private: System::Void btnVerde_Click(System::Object^  sender, System::EventArgs^  e) {

		presionado = 2;
		this->Close();

	}

    public: 
	 void ColocaNombre(String ^s) {

		LblPregunta->Text = s + " dime cual es tu color preferido";

	}
	 String ^DameRespuesta() {

		 if (presionado==1)
		 {
			 return "Rojo";
		 }
		 else return "Azul";


	 }

};
}
