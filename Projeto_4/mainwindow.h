#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>
#include <QTableWidgetItem>
#include <QDesktopServices>
#include <QUrl>
#include <QInputDialog>
#include <QWidget>

#include "arquivo.h"
#include "caes.h"
#include "classificador.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
   /* void atualizarVencedores();*/
    ~MainWindow();

    Classificador a;
    //pronto

private slots:
    void on_btn_inserirDados_clicked();

    void on_btn_limpardados_clicked();

    void on_btn_ordenar_clicked();

    void on_tabelaProvasRealizadas_cellDoubleClicked(int row, int column);

    void on_btn_atualizar_clicked();

    void on_actionSalvar_triggered();

    void on_actionCarregar_triggered();

    void on_actionSair_triggered();

     void on_actionLimpar_Tabela_triggered();

private:
    Ui::MainWindow *ui;
    void inserirDadosNaTabela(Caes c, int row);
    void Salvar();
    void Carregar();
};

#endif // MAINWINDOW_H
