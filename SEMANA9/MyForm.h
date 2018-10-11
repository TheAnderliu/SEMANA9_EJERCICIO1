#pragma once
#include"MyForm2.h"
#include"MyForm3.h"

namespace SEMANA9 {

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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  formularioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  form2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  form3ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  form4ToolStripMenuItem;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->formularioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->form2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->form3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->form4ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(54, 75);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 51);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Crear Boton Dinamico";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(51, 215);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 74);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Crea 10 Botones";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(310, 75);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(148, 52);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Crear formulario dinamico con Show";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(310, 231);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(148, 58);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Crear un formulario dinamico con Show Dialog";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(221, 372);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(196, 65);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Llama a Form 2";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->formularioToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(623, 24);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// formularioToolStripMenuItem
			// 
			this->formularioToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->form2ToolStripMenuItem,
					this->form3ToolStripMenuItem, this->form4ToolStripMenuItem
			});
			this->formularioToolStripMenuItem->Name = L"formularioToolStripMenuItem";
			this->formularioToolStripMenuItem->Size = System::Drawing::Size(77, 20);
			this->formularioToolStripMenuItem->Text = L"Formulario";
			// 
			// form2ToolStripMenuItem
			// 
			this->form2ToolStripMenuItem->Name = L"form2ToolStripMenuItem";
			this->form2ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->form2ToolStripMenuItem->Text = L"Form2";
			this->form2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::form2ToolStripMenuItem_Click);
			// 
			// form3ToolStripMenuItem
			// 
			this->form3ToolStripMenuItem->Name = L"form3ToolStripMenuItem";
			this->form3ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->form3ToolStripMenuItem->Text = L"Form3";
			this->form3ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::form3ToolStripMenuItem_Click);
			// 
			// form4ToolStripMenuItem
			// 
			this->form4ToolStripMenuItem->Name = L"form4ToolStripMenuItem";
			this->form4ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->form4ToolStripMenuItem->Text = L"Form4";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(623, 485);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		Random ^r = gcnew Random();  
		Button ^miBoton = gcnew Button(); 
		miBoton->Width = r->Next(20, 100);
		miBoton->Height = r->Next(20, 100);
		miBoton->Left = r->Next(this->ClientSize.Width);
		miBoton->Top = r->Next(this->ClientSize.Height); 
		miBoton->Text = r->Next(10000).ToString();
		miBoton->BackColor = Color::CornflowerBlue;
		miBoton->Parent = this;

	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		for ( int i = 0; i < 10; i++)
		{
			Button ^btn = gcnew Button();
			btn->Width = 50;
			btn->Height = 50;
			btn->Left = this->ClientSize.Width / 2;
			btn->Top = 0+(i-1)*50;

			btn->Text = (i ).ToString();

			btn->BackColor = Color::LightGreen;
			btn->Parent = this;

		}

	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		Form ^frm = gcnew Form();
		frm->BackColor = Color::Cyan;
		frm->Show();

	}


private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	Form ^frm = gcnew Form();
	frm->BackColor = Color::OrangeRed;
	frm->ShowDialog();


}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm2 ^ frm = gcnew MyForm2();
	frm->BackColor = Color::Red;
	frm->Show();


}
private: System::Void form2ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm2 ^ frm = gcnew MyForm2();
	frm->Show();


}
private: System::Void form3ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	MyForm3 ^ frm = gcnew MyForm3();
	frm->Show();

}
};
}
