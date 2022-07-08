#pragma once
#include "DataBase.h"
#include "Modificar_cliente.h"

namespace Vista {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Clientes
	/// </summary>
	public ref class Clientes : public System::Windows::Forms::Form
	{
	public:
		Clientes(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->data = gcnew DataBase();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Clientes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ grid_clientes;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_dni;
	private: System::Windows::Forms::Label^ labe2;
	private: System::Windows::Forms::TextBox^ txt_telefono;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_correo;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_nombre;

	private: System::Windows::Forms::Button^ btn_guardar;
	private: DataBase^ data;


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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->grid_clientes = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_dni = (gcnew System::Windows::Forms::TextBox());
			this->labe2 = (gcnew System::Windows::Forms::Label());
			this->txt_telefono = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_correo = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_nombre = (gcnew System::Windows::Forms::TextBox());
			this->btn_guardar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid_clientes))->BeginInit();
			this->SuspendLayout();
			// 
			// grid_clientes
			// 
			this->grid_clientes->AllowUserToResizeRows = false;
			this->grid_clientes->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->grid_clientes->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->grid_clientes->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->grid_clientes->DefaultCellStyle = dataGridViewCellStyle1;
			this->grid_clientes->Location = System::Drawing::Point(39, 110);
			this->grid_clientes->Name = L"grid_clientes";
			this->grid_clientes->ReadOnly = true;
			this->grid_clientes->RowHeadersVisible = false;
			this->grid_clientes->RowHeadersWidth = 51;
			this->grid_clientes->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->grid_clientes->RowTemplate->Height = 24;
			this->grid_clientes->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->grid_clientes->Size = System::Drawing::Size(708, 369);
			this->grid_clientes->TabIndex = 18;
			this->grid_clientes->DoubleClick += gcnew System::EventHandler(this, &Clientes::grid_clientes_DoubleClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(890, 103);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 20);
			this->label1->TabIndex = 17;
			this->label1->Text = L"DNI:";
			// 
			// txt_dni
			// 
			this->txt_dni->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_dni->Location = System::Drawing::Point(796, 126);
			this->txt_dni->Name = L"txt_dni";
			this->txt_dni->Size = System::Drawing::Size(230, 38);
			this->txt_dni->TabIndex = 16;
			// 
			// labe2
			// 
			this->labe2->AutoSize = true;
			this->labe2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labe2->Location = System::Drawing::Point(862, 328);
			this->labe2->Name = L"labe2";
			this->labe2->Size = System::Drawing::Size(104, 20);
			this->labe2->TabIndex = 20;
			this->labe2->Text = L"TELEFONO:";
			// 
			// txt_telefono
			// 
			this->txt_telefono->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_telefono->Location = System::Drawing::Point(796, 351);
			this->txt_telefono->Name = L"txt_telefono";
			this->txt_telefono->Size = System::Drawing::Size(230, 38);
			this->txt_telefono->TabIndex = 19;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(862, 253);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 20);
			this->label3->TabIndex = 22;
			this->label3->Text = L"CORREO:";
			// 
			// txt_correo
			// 
			this->txt_correo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_correo->Location = System::Drawing::Point(796, 276);
			this->txt_correo->Name = L"txt_correo";
			this->txt_correo->Size = System::Drawing::Size(230, 38);
			this->txt_correo->TabIndex = 21;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(862, 176);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 20);
			this->label4->TabIndex = 24;
			this->label4->Text = L"NOMBRE:";
			// 
			// txt_nombre
			// 
			this->txt_nombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nombre->Location = System::Drawing::Point(796, 199);
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(230, 38);
			this->txt_nombre->TabIndex = 23;
			// 
			// btn_guardar
			// 
			this->btn_guardar->Location = System::Drawing::Point(796, 419);
			this->btn_guardar->Name = L"btn_guardar";
			this->btn_guardar->Size = System::Drawing::Size(230, 39);
			this->btn_guardar->TabIndex = 25;
			this->btn_guardar->Text = L"Agregar";
			this->btn_guardar->UseVisualStyleBackColor = true;
			this->btn_guardar->Click += gcnew System::EventHandler(this, &Clientes::btn_guardar_Click);
			// 
			// Clientes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(156)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->ClientSize = System::Drawing::Size(1063, 534);
			this->Controls->Add(this->btn_guardar);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_nombre);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_correo);
			this->Controls->Add(this->labe2);
			this->Controls->Add(this->txt_telefono);
			this->Controls->Add(this->grid_clientes);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_dni);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Clientes";
			this->Text = L"Clientes";
			this->Load += gcnew System::EventHandler(this, &Clientes::Clientes_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid_clientes))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Clientes_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
	}

	public: void Consulta() {
		this->data->AbrirConexion();
		this->grid_clientes->DataSource = this->data->getClientes();
		this->data->CerrarConexion();
	}
	private: System::Void btn_guardar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->AbrirConexion();
		this->data->insertar(this->txt_dni->Text, this->txt_nombre->Text, this->txt_correo->Text, this->txt_telefono->Text);
		this->data->CerrarConexion();
		this->Consulta();
	}
	private: System::Void grid_clientes_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		String^ dni = Convert::ToString(grid_clientes->SelectedRows[0]->Cells[0]->Value);
		String^ nombre = Convert::ToString(grid_clientes->SelectedRows[0]->Cells[1]->Value);
		String^ correo = Convert::ToString(grid_clientes->SelectedRows[0]->Cells[2]->Value);
		String^ telefono = Convert::ToString(grid_clientes->SelectedRows[0]->Cells[3]->Value);

		Vista::Modificar_cliente^ form = gcnew Vista::Modificar_cliente();
		form->txt_m_dni->Text = dni;
		form->txt_m_nombre->Text = nombre;
		form->txt_m_correo->Text = correo;
		form->txt_m_telefono->Text = telefono;
		form->ShowDialog();
		DataBase^ data = gcnew DataBase();
		data->AbrirConexion();
		data->modificar(form->txt_m_dni->Text, form->txt_m_nombre->Text, form->txt_m_correo->Text, form->txt_m_telefono->Text, dni);
		data->CerrarConexion();
		this->Consulta();
	}
};
}
