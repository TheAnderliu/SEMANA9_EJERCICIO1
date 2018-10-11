#pragma once
#include"MyForm5.h"

namespace SEMANA9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
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
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtNombre;
	protected:
	private: System::Windows::Forms::Button^  btnPreguntar;
	private: System::Windows::Forms::Label^  lblColor;

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
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->btnPreguntar = (gcnew System::Windows::Forms::Button());
			this->lblColor = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(75, 83);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(167, 20);
			this->txtNombre->TabIndex = 0;
			// 
			// btnPreguntar
			// 
			this->btnPreguntar->Location = System::Drawing::Point(108, 145);
			this->btnPreguntar->Name = L"btnPreguntar";
			this->btnPreguntar->Size = System::Drawing::Size(99, 36);
			this->btnPreguntar->TabIndex = 1;
			this->btnPreguntar->Text = L"Preguntar";
			this->btnPreguntar->UseVisualStyleBackColor = true;
			this->btnPreguntar->Click += gcnew System::EventHandler(this, &MyForm4::btnPreguntar_Click);
			// 
			// lblColor
			// 
			this->lblColor->AutoSize = true;
			this->lblColor->Location = System::Drawing::Point(142, 256);
			this->lblColor->Name = L"lblColor";
			this->lblColor->Size = System::Drawing::Size(35, 13);
			this->lblColor->TabIndex = 2;
			this->lblColor->Text = L"label1";
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(358, 330);
			this->Controls->Add(this->lblColor);
			this->Controls->Add(this->btnPreguntar);
			this->Controls->Add(this->txtNombre);
			this->Name = L"MyForm4";
			this->Text = L"MyForm4";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnPreguntar_Click(System::Object^  sender, System::EventArgs^  e) {

		MyForm5 ^ frm = gcnew MyForm5();
		frm->ColocaNombre(txtNombre->Text);
		frm->ShowDialog();
		String  ^resp = frm->DameRespuesta();
		lblColor->Text = resp;
		delete frm;

	}
	};
}
