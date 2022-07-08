#ifndef FORMULARIO_NEW_USUARIO_H
#define FORMULARIO_NEW_USUARIO_H

#include <QDialog>

namespace Ui {
class Formulario_New_usuario;
}

class Formulario_New_usuario : public QDialog
{
    Q_OBJECT

public:
    explicit Formulario_New_usuario(QWidget *parent = nullptr);
    ~Formulario_New_usuario();

private:
    Ui::Formulario_New_usuario *ui;
};

#endif // FORMULARIO_NEW_USUARIO_H
