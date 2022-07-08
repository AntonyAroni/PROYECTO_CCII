#pragma once

using namespace System;
using namespace std;
using namespace System::Data;
using namespace MySql::Data::MySqlClient;


namespace Controlador {
	public ref class ConnectionToSql
	{
	public:
		static::String^ connectionString;
		ConnectionToSql();
		MySqlConnection^ GetConnection();
	};

	public ref class UserDao :ConnectionToSql {
	public:
		bool login(String^, String^);
	};
}