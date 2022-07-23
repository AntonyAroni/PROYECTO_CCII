#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionSalir_triggered();

    void on_actionNuevo_Usuario_triggered();

    void on_actionNueva_Reserva_triggered();

    void on_actionNueva_Cancha_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
