#pragma once

namespace SistemaControlCNCVIEW {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for admin_acciones
	/// </summary>
	public ref class admin_acciones : public System::Windows::Forms::Form
	{
	public:
		admin_acciones(void)
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
		~admin_acciones()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(26, 100);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(382, 334);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Opciones de administrador:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(109, 255);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(142, 36);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Cerrar sesi�n";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &admin_acciones::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(109, 185);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(142, 42);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Operaci�n manual";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(109, 117);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 42);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Seleccionar figura corte";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &admin_acciones::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(109, 49);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Historial m�quina";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(62, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(296, 37);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ADMINISTRADOR";
			this->label1->Click += gcnew System::EventHandler(this, &admin_acciones::label1_Click);
			// 
			// admin_acciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(442, 446);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"admin_acciones";
			this->Text = L"admin_acciones";
			this->Load += gcnew System::EventHandler(this, &admin_acciones::admin_acciones_Load);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void admin_acciones_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
