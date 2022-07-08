#pragma once
#include "Reservas.h"
#include "Clientes.h"
#include "c_deportivos.h"

namespace Vista {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Administrador
	/// </summary>
	public ref class Administrador : public System::Windows::Forms::Form
	{
	public:
		Administrador(void)
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
		~Administrador()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel_izq;
	protected:
	private: System::Windows::Forms::Panel^ panel_margen_izq;
	private: System::Windows::Forms::Panel^ panel_bot_izq;
	private: System::Windows::Forms::Panel^ panel_contenedor;
	private: System::Windows::Forms::Button^ btn_clientes;
	private: System::Windows::Forms::Button^ btn_c_deportivos;
	private: System::Windows::Forms::Button^ btn_reservas;

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
			this->panel_izq = (gcnew System::Windows::Forms::Panel());
			this->btn_clientes = (gcnew System::Windows::Forms::Button());
			this->btn_c_deportivos = (gcnew System::Windows::Forms::Button());
			this->btn_reservas = (gcnew System::Windows::Forms::Button());
			this->panel_margen_izq = (gcnew System::Windows::Forms::Panel());
			this->panel_bot_izq = (gcnew System::Windows::Forms::Panel());
			this->panel_contenedor = (gcnew System::Windows::Forms::Panel());
			this->panel_izq->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_izq
			// 
			this->panel_izq->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->panel_izq->Controls->Add(this->btn_clientes);
			this->panel_izq->Controls->Add(this->btn_c_deportivos);
			this->panel_izq->Controls->Add(this->btn_reservas);
			this->panel_izq->Controls->Add(this->panel_margen_izq);
			this->panel_izq->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_izq->Location = System::Drawing::Point(0, 0);
			this->panel_izq->Name = L"panel_izq";
			this->panel_izq->Size = System::Drawing::Size(200, 634);
			this->panel_izq->TabIndex = 0;
			// 
			// btn_clientes
			// 
			this->btn_clientes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btn_clientes->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_clientes->FlatAppearance->BorderSize = 0;
			this->btn_clientes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_clientes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_clientes->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->btn_clientes->Location = System::Drawing::Point(0, 269);
			this->btn_clientes->Name = L"btn_clientes";
			this->btn_clientes->Size = System::Drawing::Size(200, 48);
			this->btn_clientes->TabIndex = 4;
			this->btn_clientes->Text = L"CLIENTES";
			this->btn_clientes->UseVisualStyleBackColor = false;
			this->btn_clientes->Click += gcnew System::EventHandler(this, &Administrador::btn_clientes_Click);
			// 
			// btn_c_deportivos
			// 
			this->btn_c_deportivos->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btn_c_deportivos->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_c_deportivos->FlatAppearance->BorderSize = 0;
			this->btn_c_deportivos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_c_deportivos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_c_deportivos->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->btn_c_deportivos->Location = System::Drawing::Point(0, 221);
			this->btn_c_deportivos->Name = L"btn_c_deportivos";
			this->btn_c_deportivos->Size = System::Drawing::Size(200, 48);
			this->btn_c_deportivos->TabIndex = 3;
			this->btn_c_deportivos->Text = L"C.DEPORTIVOS";
			this->btn_c_deportivos->UseVisualStyleBackColor = false;
			this->btn_c_deportivos->Click += gcnew System::EventHandler(this, &Administrador::btn_c_deportivos_Click);
			// 
			// btn_reservas
			// 
			this->btn_reservas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btn_reservas->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_reservas->FlatAppearance->BorderSize = 0;
			this->btn_reservas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_reservas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_reservas->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->btn_reservas->Location = System::Drawing::Point(0, 173);
			this->btn_reservas->Name = L"btn_reservas";
			this->btn_reservas->Size = System::Drawing::Size(200, 48);
			this->btn_reservas->TabIndex = 2;
			this->btn_reservas->Text = L"RESERVAS";
			this->btn_reservas->UseVisualStyleBackColor = false;
			this->btn_reservas->Click += gcnew System::EventHandler(this, &Administrador::btn_reservas_Click);
			// 
			// panel_margen_izq
			// 
			this->panel_margen_izq->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_margen_izq->Location = System::Drawing::Point(0, 0);
			this->panel_margen_izq->Name = L"panel_margen_izq";
			this->panel_margen_izq->Size = System::Drawing::Size(200, 173);
			this->panel_margen_izq->TabIndex = 1;
			// 
			// panel_bot_izq
			// 
			this->panel_bot_izq->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->panel_bot_izq->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel_bot_izq->Location = System::Drawing::Point(200, 534);
			this->panel_bot_izq->Name = L"panel_bot_izq";
			this->panel_bot_izq->Size = System::Drawing::Size(1063, 100);
			this->panel_bot_izq->TabIndex = 1;
			// 
			// panel_contenedor
			// 
			this->panel_contenedor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->panel_contenedor->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_contenedor->Location = System::Drawing::Point(200, 0);
			this->panel_contenedor->Name = L"panel_contenedor";
			this->panel_contenedor->Size = System::Drawing::Size(1063, 534);
			this->panel_contenedor->TabIndex = 2;
			// 
			// Administrador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1263, 634);
			this->Controls->Add(this->panel_contenedor);
			this->Controls->Add(this->panel_bot_izq);
			this->Controls->Add(this->panel_izq);
			this->Name = L"Administrador";
			this->Text = L"Administrador";
			this->panel_izq->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	
	public:
		Form^ actual;
	void AbrirFormulario(Form^ hijo) {
		if (this->actual != nullptr) {
			this->actual->Close();
		}
		this->actual = hijo;
		hijo->Dock = DockStyle::Fill;
		hijo->TopLevel = false;
		panel_contenedor->Controls ->Add(hijo);
		panel_contenedor->Tag = hijo;
		hijo->Show();
	}
		

	private: System::Void btn_reservas_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirFormulario(gcnew Vista::Reservas());
	}

	private: System::Void btn_c_deportivos_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirFormulario(gcnew Vista::c_deportivos());
	}
	private: System::Void btn_clientes_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirFormulario(gcnew Vista::Clientes());
	}
};
}
