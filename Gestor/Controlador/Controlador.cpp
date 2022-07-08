#include "pch.h"

#include "Controlador.h"

Controlador::ConnectionToSql::ConnectionToSql()
{
	this->connectionString = "datasource=localhost; username=root; password=02102002; database=sistema_deportivo";
}

MySqlConnection^ Controlador::ConnectionToSql::GetConnection()
{
	return gcnew MySqlConnection(this->connectionString);
}

bool Controlador::UserDao::login(String^ user, String^ password)
{
	MySqlConnection^ connection = GetConnection();
	connection->Open();
	MySqlCommand^ cursor = gcnew MySqlCommand();
	cursor->Connection = connection;
	cursor->CommandText = "select * from administradores where usuario='" + user + "' and contra='" + password + "'";
	MySqlDataReader^ reader = cursor->ExecuteReader();

	if (reader->HasRows) {
		return true;
	}
	else {
		return false;
	}

}
