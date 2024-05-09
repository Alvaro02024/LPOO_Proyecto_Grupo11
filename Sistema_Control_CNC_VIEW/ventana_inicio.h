#pragma once
#include "aviso_licencia.h";
#include "aviso_perfil.h";
#include "user_figuraCorte.h";
#include "admin_figuraCorte.h";
#include "admin_acciones.h"


namespace SistemaControlCNCVIEW {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Proyecto_SistemaCNC_Controller;
	using namespace System::Collections::Generic;
	using namespace Proyecto_SistemaCNC_model;

	/// <summary>
	/// Summary for ventana_inicio
	/// </summary>
	public ref class ventana_inicio : public System::Windows::Forms::Form
	{
	public:
		ventana_inicio(void)
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
		~ventana_inicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Candara", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(165, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(223, 39);
			this->label1->TabIndex = 1;
			this->label1->Text = L"INCIAR SESIÓN";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Candara", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(103, 136);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 29);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Usuario:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Candara", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(103, 222);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(135, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Contraseña:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Candara Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(273, 128);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(173, 37);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Candara Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(273, 214);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(173, 37);
			this->textBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(221, 326);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 31);
			this->button1->TabIndex = 4;
			this->button1->Text = L"LIMPIAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ventana_inicio::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(386, 326);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(114, 31);
			this->button2->TabIndex = 4;
			this->button2->Text = L"SALIR";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ventana_inicio::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(52, 326);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(114, 31);
			this->button3->TabIndex = 4;
			this->button3->Text = L"INGRESAR";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ventana_inicio::button3_Click);
			// 
			// ventana_inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(559, 427);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->IsMdiContainer = true;
			this->Name = L"ventana_inicio";
			this->Text = L"Sistema control CNC";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ new_user = this->textBox1->Text;
	String^ new_cont = this->textBox2->Text;
	administradorController^ objadmin_conf = gcnew administradorController();
	perfilController^ objperfil_conf = gcnew perfilController();
	int confirmacion_admin = objadmin_conf->confirmar_administradorController(new_user, new_cont);
	int confirmacion_user = objperfil_conf->confirmar_user(new_user, new_cont);
	if (confirmacion_admin) {
		admin_acciones^ ventana_admin_acciones = gcnew admin_acciones();
		ventana_admin_acciones->Show();
		this->MinimizeBox;
	}
	else if (confirmacion_user)
	{
		user_figuraCorte^ ventana_user_figuraCorte = gcnew user_figuraCorte();
		ventana_user_figuraCorte->Show();
		this->MinimizeBox;
	}
	else
	{
		MessageBox::Show("Usuario o Contraseña incorrecta");
	}
	this->textBox1->ResetText();
	this->textBox2->ResetText();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->ResetText();
	this->textBox2->ResetText();
}
};
}
