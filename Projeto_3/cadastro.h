#ifndef CADASTRO_H
#define CADASTRO_H

#include <QDialog>
#include <QMainWindow>
#include <QDebug>
#include <QString>

#include "registroclientes.h"
#include "clientes.h"

namespace Ui {
class Cadastro;
}

class Cadastro : public QDialog
{
    Q_OBJECT

public:
    explicit Cadastro(QWidget *parent = nullptr);
    ~Cadastro();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_btn_cadastro_clicked();

    void on_btn_cadastrar_clicked();

private:
    Ui::Cadastro *ui;
    RegistroClientes registroclientes;
    void inserirNaTabela(Clientes a, int linha);
};

#endif // CADASTRO_H

/*private slots:
    void on_btnCadastro_clicked();

    void on_btn_ordernarNome_clicked();

private:
    Ui::MainWindow *ui;
    Turma turma;
    void atualizarEstatisticas();
    void inserirNaTabela(Aluno a, int linha);
};

#endif // MAINWINDOW_H*/
