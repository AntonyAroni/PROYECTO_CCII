#pragma once

namespace Vista {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Modificar_reserva
	/// </summary>
	public ref class Modificar_reserva : public System::Windows::Forms::Form
	{
	public:
		Modificar_reserva(void)
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
		~Modificar_reserva()
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
	public: System::Windows::Forms::TextBox^ txt_m_horario;
	private:

	public: System::Windows::Forms::TextBox^ txt_m_fecha;
	private:

	public: System::Windows::Forms::TextBox^ txt_m_dni;
	private: System::Windows::Forms::Label^ label4;
	public:
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::TextBox^ txt_m_tiempo;
	private:

	public: System::Windows::Forms::TextBox^ txt_m_precio;
	private:

	public: System::Windows::Forms::TextBox^ txt_m_cancha;



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
			this->txt_m_horario = (gcnew System::Windows::Forms::TextBox());
			this->txt_m_fecha = (gcnew System::Windows::Forms::TextBox());
			this->txt_m_dni = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_m_tiempo = (gcnew System::Windows::Forms::TextBox());
			this->txt_m_precio = (gcnew System::Windows::Forms::TextBox());
			this->txt_m_cancha = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btn_guardar
			// 
			this->btn_guardar->BackColor = System::Drawing::Color::LimeGreen;
			this->btn_guardar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_guardar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_guardar->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_guardar->Location = System::Drawing::Point(282, 496);
			this->btn_guardar->Name = L"btn_guardar";
			this->btn_guardar->Size = System::Drawing::Size(215, 34);
			this->btn_guardar->TabIndex = 15;
			this->btn_guardar->Text = L"Guardar";
			this->btn_guardar->UseVisualStyleBackColor = false;
			this->btn_guardar->Click += gcnew System::EventHandler(this, &Modificar_reserva::btn_guardar_Click);
			// 
			// btn_cancelar
			// 
			this->btn_cancelar->BackColor = System::Drawing::Color::Red;
			this->btn_cancelar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancelar->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_cancelar->Location = System::Drawing::Point(81, 496);
			this->btn_cancelar->Name = L"btn_cancelar";
			this->btn_cancelar->Size = System::Drawing::Size(124, 34);
			this->btn_cancelar->TabIndex = 14;
			this->btn_cancelar->Text = L"Cancelar";
			this->btn_cancelar->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_cancelar->UseVisualStyleBackColor = false;
			this->btn_cancelar->Click += gcnew System::EventHandler(this, &Modificar_reserva::btn_cancelar_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(49, 209);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 29);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Horario:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Location = System::Drawing::Point(49, 143);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 29);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Fecha:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(49, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 29);
			this->label1->TabIndex = 11;
			this->label1->Text = L"DNI:";
			// 
			// txt_m_horario
			// 
			this->txt_m_horario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_m_horario->Location = System::Drawing::Point(248, 204);
			this->txt_m_horario->Name = L"txt_m_horario";
			this->txt_m_horario->Size = System::Drawing::Size(283, 34);
			this->txt_m_horario->TabIndex = 10;
			// 
			// txt_m_fecha
			// 
			this->txt_m_fecha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_m_fecha->Location = System::Drawing::Point(248, 138);
			this->txt_m_fecha->Name = L"txt_m_fecha";
			this->txt_m_fecha->Size = System::Drawing::Size(283, 34);
			this->txt_m_fecha->TabIndex = 9;
			// 
			// txt_m_dni
			// 
			this->txt_m_dni->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_m_dni->Location = System::Drawing::Point(248, 75);
			this->txt_m_dni->Name = L"txt_m_dni";
			this->txt_m_dni->Size = System::Drawing::Size(283, 34);
			this->txt_m_dni->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label4->Location = System::Drawing::Point(49, 402);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(136, 29);
			this->label4->TabIndex = 21;
			this->label4->Text = L"T. Reserva:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label5->Location = System::Drawing::Point(49, 336);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 29);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Precio:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label6->Location = System::Drawing::Point(49, 268);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(181, 29);
			this->label6->TabIndex = 19;
			this->label6->Text = L"ID C. Deportivo:";
			// 
			// txt_m_tiempo
			// 
			this->txt_m_tiempo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_m_tiempo->Location = System::Drawing::Point(248, 397);
			this->txt_m_tiempo->Name = L"txt_m_tiempo";
			this->txt_m_tiempo->Size = System::Drawing::Size(283, 34);
			this->txt_m_tiempo->TabIndex = 18;
			// 
			// txt_m_precio
			// 
			this->txt_m_precio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_m_precio->Location = System::Drawing::Point(248, 331);
			this->txt_m_precio->Name = L"txt_m_precio";
			this->txt_m_precio->Size = System::Drawing::Size(283, 34);
			this->txt_m_precio->TabIndex = 17;
			// 
			// txt_m_cancha
			// 
			this->txt_m_cancha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_m_cancha->Location = System::Drawing::Point(248, 268);
			this->txt_m_cancha->Name = L"txt_m_cancha";
			this->txt_m_cancha->Size = System::Drawing::Size(283, 34);
			this->txt_m_cancha->TabIndex = 16;
			// 
			// Modificar_reserva
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->ClientSize = System::Drawing::Size(590, 585);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_m_tiempo);
			this->Controls->Add(this->txt_m_precio);
			this->Controls->Add(this->txt_m_cancha);
			this->Controls->Add(this->btn_guardar);
			this->Controls->Add(this->btn_cancelar);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_m_horario);
			this->Controls->Add(this->txt_m_fecha);
			this->Controls->Add(this->txt_m_dni);
			this->Name = L"Modificar_reserva";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Modificar Reserva";
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
