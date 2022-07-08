#include "pch.h"

#include "Modelo.h"

bool Modelo::UserModel::LoginUser(String^ user, String^ password)
{
    return this->userDao->login(user, password);
}


