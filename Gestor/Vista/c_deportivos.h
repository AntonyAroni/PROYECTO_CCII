#pragma once
#include "DataBase.h"
#include "Modificar_campo.h"

namespace Vista {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for c_deportivos
	/// </summary>
	public ref class c_deportivos : public System::Windows::Forms::Form
	{
	public:
		c_deportivos(void)
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
		~c_deportivos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ grid_c_deportivo;
	protected:


	private: System::Windows::Forms::TextBox^ txt_ubicacion;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_nivel;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_precio;







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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->grid_c_deportivo = (gcnew System::Windows::Forms::DataGridView());
			this->txt_ubicacion = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_nivel = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_precio = (gcnew System::Windows::Forms::TextBox());
			this->btn_guardar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid_c_deportivo))->BeginInit();
			this->SuspendLayout();
			// 
			// grid_c_deportivo
			// 
			this->grid_c_deportivo->AllowUserToResizeRows = false;
			this->grid_c_deportivo->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->grid_c_deportivo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->grid_c_deportivo->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->grid_c_deportivo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
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
			this->grid_c_deportivo->DefaultCellStyle = dataGridViewCellStyle2;
			this->grid_c_deportivo->Location = System::Drawing::Point(30, 75);
			this->grid_c_deportivo->Name = L"grid_c_deportivo";
			this->grid_c_deportivo->ReadOnly = true;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->grid_c_deportivo->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->grid_c_deportivo->RowHeadersVisible = false;
			this->grid_c_deportivo->RowHeadersWidth = 51;
			this->grid_c_deportivo->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->grid_c_deportivo->RowTemplate->Height = 24;
			this->grid_c_deportivo->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->grid_c_deportivo->Size = System::Drawing::Size(708, 369);
			this->grid_c_deportivo->TabIndex = 16;
			this->grid_c_deportivo->DoubleClick += gcnew System::EventHandler(this, &c_deportivos::grid_c_deportivo_DoubleClick);
			// 
			// txt_ubicacion
			// 
			this->txt_ubicacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_ubicacion->Location = System::Drawing::Point(790, 113);
			this->txt_ubicacion->Name = L"txt_ubicacion";
			this->txt_ubicacion->Size = System::Drawing::Size(230, 38);
			this->txt_ubicacion->TabIndex = 17;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(849, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 20);
			this->label1->TabIndex = 18;
			this->label1->Text = L"UBICACION:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(868, 176);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(62, 20);
			this->label7->TabIndex = 20;
			this->label7->Text = L"NIVEL:";
			// 
			// txt_nivel
			// 
			this->txt_nivel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nivel->Location = System::Drawing::Point(790, 199);
			this->txt_nivel->Name = L"txt_nivel";
			this->txt_nivel->Size = System::Drawing::Size(230, 38);
			this->txt_nivel->TabIndex = 19;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(868, 260);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(77, 20);
			this->label6->TabIndex = 22;
			this->label6->Text = L"PRECIO:";
			// 
			// txt_precio
			// 
			this->txt_precio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_precio->Location = System::Drawing::Point(790, 283);
			this->txt_precio->Name = L"txt_precio";
			this->txt_precio->Size = System::Drawing::Size(230, 38);
			this->txt_precio->TabIndex = 21;
			// 
			// btn_guardar
			// 
			this->btn_guardar->Location = System::Drawing::Point(790, 366);
			this->btn_guardar->Name = L"btn_guardar";
			this->btn_guardar->Size = System::Drawing::Size(230, 39);
			this->btn_guardar->TabIndex = 23;
			this->btn_guardar->Text = L"Agregar";
			this->btn_guardar->UseVisualStyleBackColor = true;
			this->btn_guardar->Click += gcnew System::EventHandler(this, &c_deportivos::btn_guardar_Click);
			// 
			// c_deportivos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(156)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->ClientSize = System::Drawing::Size(1063, 534);
			this->Controls->Add(this->btn_guardar);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_precio);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txt_nivel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_ubicacion);
			this->Controls->Add(this->grid_c_deportivo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"c_deportivos";
			this->Text = L"c_deportivos";
			this->Load += gcnew System::EventHandler(this, &c_deportivos::c_deportivos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid_c_deportivo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void c_deportivos_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
	}
	public: void Consulta() {
		this->data->AbrirConexion();
		this->grid_c_deportivo->DataSource = this->data->getC_deportivo();
		this->data->CerrarConexion();
	}
	private: System::Void btn_guardar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->AbrirConexion();
		this->data->insertar(this->txt_ubicacion->Text, this->txt_nivel->Text, this->txt_precio->Text);
		this->data->CerrarConexion();
		this->Consulta();
	}
	private: System::Void grid_c_deportivo_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		String^ ubicacion = Convert::ToString(grid_c_deportivo->SelectedRows[0]->Cells[1]->Value);
		String^ nivel = Convert::ToString(grid_c_deportivo->SelectedRows[0]->Cells[2]->Value);
		String^ precio = Convert::ToString(grid_c_deportivo->SelectedRows[0]->Cells[3]->Value);

		Vista::Modificar_campo^ form = gcnew Vista::Modificar_campo();
		form->txt_m_ubicacion->Text = ubicacion;
		form->txt_m_nivel->Text = nivel;
		form->txt_m_precio->Text = precio;
		form->ShowDialog();
		DataBase^ data = gcnew DataBase();
		data->AbrirConexion();
		data->modificar(form->txt_m_ubicacion->Text, form->txt_m_nivel->Text, form->txt_m_precio->Text, ubicacion);
		data->CerrarConexion();
		this->Consulta();
	}
};
}
