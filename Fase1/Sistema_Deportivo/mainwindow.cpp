#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionSalir_triggered()
{
    close();        //Cierra la ventana.
}


void MainWindow::on_actionNuevo_Usuario_triggered()
{

}


void MainWindow::on_actionNueva_Reserva_triggered()
{

}


void MainWindow::on_actionNueva_Cancha_triggered()
{

}

