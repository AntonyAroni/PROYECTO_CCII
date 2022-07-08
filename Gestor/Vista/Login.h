#pragma once
#include "Administrador.h"


namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Modelo;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_user;
	protected:
	private: System::Windows::Forms::TextBox^ txt_password;
	private: System::Windows::Forms::Button^ Ingresar;

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
			this->txt_user = (gcnew System::Windows::Forms::TextBox());
			this->txt_password = (gcnew System::Windows::Forms::TextBox());
			this->Ingresar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txt_user
			// 
			this->txt_user->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_user->Location = System::Drawing::Point(166, 148);
			this->txt_user->Name = L"txt_user";
			this->txt_user->Size = System::Drawing::Size(265, 38);
			this->txt_user->TabIndex = 0;
			// 
			// txt_password
			// 
			this->txt_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_password->Location = System::Drawing::Point(166, 230);
			this->txt_password->Name = L"txt_password";
			this->txt_password->PasswordChar = '*';
			this->txt_password->Size = System::Drawing::Size(265, 38);
			this->txt_password->TabIndex = 1;
			// 
			// Ingresar
			// 
			this->Ingresar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ingresar->Location = System::Drawing::Point(166, 313);
			this->Ingresar->Name = L"Ingresar";
			this->Ingresar->Size = System::Drawing::Size(265, 34);
			this->Ingresar->TabIndex = 2;
			this->Ingresar->Text = L"Ingresar";
			this->Ingresar->UseVisualStyleBackColor = true;
			this->Ingresar->Click += gcnew System::EventHandler(this, &Login::Ingresar_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(581, 449);
			this->Controls->Add(this->Ingresar);
			this->Controls->Add(this->txt_password);
			this->Controls->Add(this->txt_user);
			this->Name = L"Login";
			this->Text = L"Registro";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Ingresar_Click(System::Object^ sender, System::EventArgs^ e) {

		if (txt_user->Text != "" && txt_password->Text != "") {
			UserModel^ user = gcnew UserModel();
			bool isLogged = user->LoginUser(txt_user->Text, txt_password->Text);
			if (isLogged) {
				Vista::Administrador^ administrador = gcnew Vista::Administrador();
				this->Visible = false;
				administrador->ShowDialog();
				this->Visible = true;
			}
			else {
				MessageBox::Show("Usuario y/o contraseña erronea");
			}
		}
		else {
			MessageBox::Show("Complete todos los campos!");

		}


	}
	};
}
