#ifndef BASEDEDATOS_H
#define BASEDEDATOS_H

#include <QSqlDatabase>

class BaseDeDatos
{
public:
    BaseDeDatos(const QString &name_BD,
                const QString &name_Usua,
                const QString &pasword,
                int puerto_conexion);
private:
    QSqlDatabase BD;
};

#endif // BASEDEDATOS_H
