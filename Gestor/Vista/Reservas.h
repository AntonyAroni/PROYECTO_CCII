#pragma once
#include "DataBase.h"
#include "Modificar_reserva.h"

namespace Vista {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Reservas
	/// </summary>
	public ref class Reservas : public System::Windows::Forms::Form
	{
	public:
		Reservas(void)
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
		~Reservas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_fecha;
	protected:
	private: System::Windows::Forms::TextBox^ txt_dni;
	private: System::Windows::Forms::TextBox^ txt_tiempo;

	private: System::Windows::Forms::TextBox^ txt_precio;

	private: System::Windows::Forms::TextBox^ txt_cancha;

	private: System::Windows::Forms::TextBox^ txt_horario;


	private: System::Windows::Forms::Button^ btn_guardar;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ grid_reservas;

	private: DataBase^ data;



	protected:

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->txt_fecha = (gcnew System::Windows::Forms::TextBox());
			this->txt_dni = (gcnew System::Windows::Forms::TextBox());
			this->txt_tiempo = (gcnew System::Windows::Forms::TextBox());
			this->txt_precio = (gcnew System::Windows::Forms::TextBox());
			this->txt_cancha = (gcnew System::Windows::Forms::TextBox());
			this->txt_horario = (gcnew System::Windows::Forms::TextBox());
			this->btn_guardar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->grid_reservas = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid_reservas))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_fecha
			// 
			this->txt_fecha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_fecha->Location = System::Drawing::Point(787, 99);
			this->txt_fecha->Name = L"txt_fecha";
			this->txt_fecha->Size = System::Drawing::Size(230, 38);
			this->txt_fecha->TabIndex = 0;
			this->txt_fecha->TextChanged += gcnew System::EventHandler(this, &Reservas::textBox1_TextChanged);
			// 
			// txt_dni
			// 
			this->txt_dni->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_dni->Location = System::Drawing::Point(787, 37);
			this->txt_dni->Name = L"txt_dni";
			this->txt_dni->Size = System::Drawing::Size(230, 38);
			this->txt_dni->TabIndex = 2;
			// 
			// txt_tiempo
			// 
			this->txt_tiempo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_tiempo->Location = System::Drawing::Point(787, 361);
			this->txt_tiempo->Name = L"txt_tiempo";
			this->txt_tiempo->Size = System::Drawing::Size(230, 38);
			this->txt_tiempo->TabIndex = 3;
			// 
			// txt_precio
			// 
			this->txt_precio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_precio->Location = System::Drawing::Point(787, 296);
			this->txt_precio->Name = L"txt_precio";
			this->txt_precio->Size = System::Drawing::Size(230, 38);
			this->txt_precio->TabIndex = 4;
			// 
			// txt_cancha
			// 
			this->txt_cancha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_cancha->Location = System::Drawing::Point(787, 230);
			this->txt_cancha->Name = L"txt_cancha";
			this->txt_cancha->Size = System::Drawing::Size(230, 38);
			this->txt_cancha->TabIndex = 5;
			// 
			// txt_horario
			// 
			this->txt_horario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_horario->Location = System::Drawing::Point(787, 162);
			this->txt_horario->Name = L"txt_horario";
			this->txt_horario->Size = System::Drawing::Size(230, 38);
			this->txt_horario->TabIndex = 6;
			// 
			// btn_guardar
			// 
			this->btn_guardar->Location = System::Drawing::Point(787, 430);
			this->btn_guardar->Name = L"btn_guardar";
			this->btn_guardar->Size = System::Drawing::Size(230, 39);
			this->btn_guardar->TabIndex = 8;
			this->btn_guardar->Text = L"Agregar";
			this->btn_guardar->UseVisualStyleBackColor = true;
			this->btn_guardar->Click += gcnew System::EventHandler(this, &Reservas::btn_guardar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(881, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 20);
			this->label1->TabIndex = 9;
			this->label1->Text = L"DNI:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(869, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 20);
			this->label2->TabIndex = 10;
			this->label2->Text = L"FECHA:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(859, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 20);
			this->label3->TabIndex = 11;
			this->label3->Text = L"HORARIO:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(845, 207);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(133, 20);
			this->label4->TabIndex = 12;
			this->label4->Text = L"C. DEPORTIVO:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(863, 273);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 20);
			this->label5->TabIndex = 13;
			this->label5->Text = L"PRECIO:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(863, 338);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(77, 20);
			this->label6->TabIndex = 14;
			this->label6->Text = L"TIEMPO:";
			// 
			// grid_reservas
			// 
			this->grid_reservas->AllowUserToResizeRows = false;
			this->grid_reservas->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->grid_reservas->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->grid_reservas->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->grid_reservas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->grid_reservas->DefaultCellStyle = dataGridViewCellStyle2;
			this->grid_reservas->Location = System::Drawing::Point(32, 68);
			this->grid_reservas->Name = L"grid_reservas";
			this->grid_reservas->ReadOnly = true;
			this->grid_reservas->RowHeadersVisible = false;
			this->grid_reservas->RowHeadersWidth = 51;
			this->grid_reservas->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->grid_reservas->RowTemplate->Height = 24;
			this->grid_reservas->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->grid_reservas->Size = System::Drawing::Size(708, 369);
			this->grid_reservas->TabIndex = 15;
			this->grid_reservas->DoubleClick += gcnew System::EventHandler(this, &Reservas::grid_reservas_DoubleClick);
			// 
			// Reservas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(156)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->ClientSize = System::Drawing::Size(1063, 534);
			this->Controls->Add(this->grid_reservas);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_guardar);
			this->Controls->Add(this->txt_horario);
			this->Controls->Add(this->txt_cancha);
			this->Controls->Add(this->txt_precio);
			this->Controls->Add(this->txt_tiempo);
			this->Controls->Add(this->txt_dni);
			this->Controls->Add(this->txt_fecha);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Reservas";
			this->Text = L"Reservas";
			this->Load += gcnew System::EventHandler(this, &Reservas::Reservas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid_reservas))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_guardar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->AbrirConexion();
		this->data->insertar(this->txt_dni->Text, this->txt_fecha->Text, this->txt_horario->Text, this->txt_cancha->Text, this->txt_precio->Text, this->txt_tiempo->Text);
		this->data->CerrarConexion();
		this->Consulta();
	}
	private: System::Void Reservas_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
	}

	public: void Consulta() {
		this->data->AbrirConexion();
		this->grid_reservas->DataSource = this->data->getReserva();
		this->data->CerrarConexion();
	}
	private: System::Void grid_reservas_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		String^ dni = Convert::ToString(grid_reservas->SelectedRows[0]->Cells[1]->Value);
		String^ fecha = Convert::ToString(grid_reservas->SelectedRows[0]->Cells[2]->Value);
		String^ horario = Convert::ToString(grid_reservas->SelectedRows[0]->Cells[3]->Value);
		String^ cancha = Convert::ToString(grid_reservas->SelectedRows[0]->Cells[4]->Value);
		String^ precio = Convert::ToString(grid_reservas->SelectedRows[0]->Cells[5]->Value);
		String^ tiempo = Convert::ToString(grid_reservas->SelectedRows[0]->Cells[6]->Value);

		Vista::Modificar_reserva^ form = gcnew Vista::Modificar_reserva();
		form->txt_m_dni->Text = dni;
		form->txt_m_fecha->Text = fecha;
		form->txt_m_horario->Text = horario;
		form->txt_m_cancha->Text = cancha;
		form->txt_m_precio->Text = precio;
		form->txt_m_tiempo->Text = tiempo;
		form->ShowDialog();
		DataBase^ data = gcnew DataBase();
		data->AbrirConexion();
		data->modificar(form->txt_m_dni->Text, form->txt_m_fecha->Text, form->txt_m_horario->Text, form->txt_m_cancha->Text, form->txt_m_precio->Text, form->txt_m_tiempo->Text, dni);
		data->CerrarConexion();
		this->Consulta();
	}
};
}
