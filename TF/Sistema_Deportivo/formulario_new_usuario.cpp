#include "formulario_new_usuario.h"
#include "ui_formulario_new_usuario.h"

Formulario_New_usuario::Formulario_New_usuario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Formulario_New_usuario)
{
    ui->setupUi(this);
}

Formulario_New_usuario::~Formulario_New_usuario()
{
    delete ui;
}
