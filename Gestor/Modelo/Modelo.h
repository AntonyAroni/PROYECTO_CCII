#pragma once

using namespace System;
using namespace Controlador;

namespace Modelo {
	public ref class UserModel
	{
	public:
		UserDao^ userDao = gcnew UserDao();
		bool LoginUser(String^, String^);
	};
}
