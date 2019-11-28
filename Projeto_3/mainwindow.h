#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "cadastro.h"
#include "registroclientes.h"

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
    void on_pushButton_clicked();

    void on_btn_formulario_cadastro_clicked();

    void on_tabela_cellActivated(int row, int column);

private:
    Ui::MainWindow *ui;
    Cadastro *form2;
};
#endif // MAINWINDOW_H
