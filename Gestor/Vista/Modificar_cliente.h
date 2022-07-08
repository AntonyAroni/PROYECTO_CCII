#pragma once

namespace Vista {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Modificar_cliente
	/// </summary>
	public ref class Modificar_cliente : public System::Windows::Forms::Form
	{
	public:
		Modificar_cliente(void)
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
		~Modificar_cliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_guardar;
	protected:
	private: System::Windows::Forms::Button^ btn_cancelar;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::TextBox^ txt_m_telefono;
	private:
	public: System::Windows::Forms::TextBox^ txt_m_correo;
	public: System::Windows::Forms::TextBox^ txt_m_nombre;
	private: System::Windows::Forms::Label^ label4;
	public:
	public: System::Windows::Forms::TextBox^ txt_m_dni;
	private:

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
			this->btn_guardar = (gcnew System::Windows::Forms::Button());
			this->btn_cancelar = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_m_telefono = (gcnew System::Windows::Forms::TextBox());
			this->txt_m_correo = (gcnew System::Windows::Forms::TextBox());
			this->txt_m_nombre = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_m_dni = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btn_guardar
			// 
			this->btn_guardar->BackColor = System::Drawing::Color::LimeGreen;
			this->btn_guardar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_guardar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_guardar->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_guardar->Location = System::Drawing::Point(279, 465);
			this->btn_guardar->Name = L"btn_guardar";
			this->btn_guardar->Size = System::Drawing::Size(215, 34);
			this->btn_guardar->TabIndex = 15;
			this->btn_guardar->Text = L"Guardar";
			this->btn_guardar->UseVisualStyleBackColor = false;
			this->btn_guardar->Click += gcnew System::EventHandler(this, &Modificar_cliente::btn_guardar_Click);
			// 
			// btn_cancelar
			// 
			this->btn_cancelar->BackColor = System::Drawing::Color::Red;
			this->btn_cancelar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancelar->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_cancelar->Location = System::Drawing::Point(54, 465);
			this->btn_cancelar->Name = L"btn_cancelar";
			this->btn_cancelar->Size = System::Drawing::Size(124, 34);
			this->btn_cancelar->TabIndex = 14;
			this->btn_cancelar->Text = L"Cancelar";
			this->btn_cancelar->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_cancelar->UseVisualStyleBackColor = false;
			this->btn_cancelar->Click += gcnew System::EventHandler(this, &Modificar_cliente::btn_cancelar_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(62, 371);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 29);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Teléfono:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Location = System::Drawing::Point(62, 280);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 29);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Correo:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(62, 182);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 29);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Nombre:";
			// 
			// txt_m_telefono
			// 
			this->txt_m_telefono->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_m_telefono->Location = System::Drawing::Point(193, 368);
			this->txt_m_telefono->Name = L"txt_m_telefono";
			this->txt_m_telefono->Size = System::Drawing::Size(283, 34);
			this->txt_m_telefono->TabIndex = 10;
			// 
			// txt_m_correo
			// 
			this->txt_m_correo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_m_correo->Location = System::Drawing::Point(193, 275);
			this->txt_m_correo->Name = L"txt_m_correo";
			this->txt_m_correo->Size = System::Drawing::Size(283, 34);
			this->txt_m_correo->TabIndex = 9;
			// 
			// txt_m_nombre
			// 
			this->txt_m_nombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_m_nombre->Location = System::Drawing::Point(193, 179);
			this->txt_m_nombre->Name = L"txt_m_nombre";
			this->txt_m_nombre->Size = System::Drawing::Size(283, 34);
			this->txt_m_nombre->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label4->Location = System::Drawing::Point(62, 91);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 29);
			this->label4->TabIndex = 17;
			this->label4->Text = L"DNI:";
			// 
			// txt_m_dni
			// 
			this->txt_m_dni->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_m_dni->Location = System::Drawing::Point(193, 88);
			this->txt_m_dni->Name = L"txt_m_dni";
			this->txt_m_dni->Size = System::Drawing::Size(283, 34);
			this->txt_m_dni->TabIndex = 16;
			// 
			// Modificar_cliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->ClientSize = System::Drawing::Size(538, 553);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_m_dni);
			this->Controls->Add(this->btn_guardar);
			this->Controls->Add(this->btn_cancelar);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_m_telefono);
			this->Controls->Add(this->txt_m_correo);
			this->Controls->Add(this->txt_m_nombre);
			this->Name = L"Modificar_cliente";
			this->Text = L"Modificar Cliente";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btn_guardar_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Modificado!");
		this->Close();
	}

	private: System::Void btn_cancelar_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
