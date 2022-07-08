#pragma once

namespace Vista {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Modificar
	/// </summary>
	public ref class Modificar_campo : public System::Windows::Forms::Form
	{
	public:
		Modificar_campo(void)
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
		~Modificar_campo()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^ txt_m_ubicacion;
	public: System::Windows::Forms::TextBox^ txt_m_nivel;
	public: System::Windows::Forms::TextBox^ txt_m_precio;
	protected:

	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btn_cancelar;
	private: System::Windows::Forms::Button^ btn_guardar;

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
			this->txt_m_ubicacion = (gcnew System::Windows::Forms::TextBox());
			this->txt_m_nivel = (gcnew System::Windows::Forms::TextBox());
			this->txt_m_precio = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btn_cancelar = (gcnew System::Windows::Forms::Button());
			this->btn_guardar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txt_m_ubicacion
			// 
			this->txt_m_ubicacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_m_ubicacion->Location = System::Drawing::Point(262, 68);
			this->txt_m_ubicacion->Name = L"txt_m_ubicacion";
			this->txt_m_ubicacion->Size = System::Drawing::Size(283, 34);
			this->txt_m_ubicacion->TabIndex = 0;
			// 
			// txt_m_nivel
			// 
			this->txt_m_nivel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_m_nivel->Location = System::Drawing::Point(262, 164);
			this->txt_m_nivel->Name = L"txt_m_nivel";
			this->txt_m_nivel->Size = System::Drawing::Size(283, 34);
			this->txt_m_nivel->TabIndex = 1;
			// 
			// txt_m_precio
			// 
			this->txt_m_precio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_m_precio->Location = System::Drawing::Point(262, 257);
			this->txt_m_precio->Name = L"txt_m_precio";
			this->txt_m_precio->Size = System::Drawing::Size(283, 34);
			this->txt_m_precio->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(74, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 29);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Unbicación:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Location = System::Drawing::Point(74, 169);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 29);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Nivel:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(74, 260);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 29);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Precio:";
			// 
			// btn_cancelar
			// 
			this->btn_cancelar->BackColor = System::Drawing::Color::Red;
			this->btn_cancelar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancelar->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_cancelar->Location = System::Drawing::Point(99, 364);
			this->btn_cancelar->Name = L"btn_cancelar";
			this->btn_cancelar->Size = System::Drawing::Size(124, 34);
			this->btn_cancelar->TabIndex = 6;
			this->btn_cancelar->Text = L"Cancelar";
			this->btn_cancelar->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_cancelar->UseVisualStyleBackColor = false;
			this->btn_cancelar->Click += gcnew System::EventHandler(this, &Modificar_campo::btn_cancelar_Click);
			// 
			// btn_guardar
			// 
			this->btn_guardar->BackColor = System::Drawing::Color::LimeGreen;
			this->btn_guardar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_guardar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_guardar->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_guardar->Location = System::Drawing::Point(296, 364);
			this->btn_guardar->Name = L"btn_guardar";
			this->btn_guardar->Size = System::Drawing::Size(215, 34);
			this->btn_guardar->TabIndex = 7;
			this->btn_guardar->Text = L"Guardar";
			this->btn_guardar->UseVisualStyleBackColor = false;
			this->btn_guardar->Click += gcnew System::EventHandler(this, &Modificar_campo::btn_guardar_Click);
			// 
			// Modificar_campo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->ClientSize = System::Drawing::Size(583, 456);
			this->Controls->Add(this->btn_guardar);
			this->Controls->Add(this->btn_cancelar);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_m_precio);
			this->Controls->Add(this->txt_m_nivel);
			this->Controls->Add(this->txt_m_ubicacion);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"Modificar_campo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Modificar Campo";
			this->Load += gcnew System::EventHandler(this, &Modificar_campo::Modificar_campo_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_guardar_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Modificado!");
		this->Close();
	}
	private: System::Void btn_cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Modificar_campo_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
