#include "janela_cadastro.h"
#include "ui_janela_cadastro.h"
#include <QMessageBox>
#include <QString>


janela_Cadastro::janela_Cadastro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::janela_Cadastro)
{
    ui->setupUi(this);
}

janela_Cadastro::~janela_Cadastro()
{
    delete ui;
}

void janela_Cadastro::on_btn_mostrar_clicked()
{
    QString cliente = ui->txt_cliente->text();
    QString raca = ui->txt_raca->text();
    QString idade = ui->txt_idade->text();
    QString responsavel = ui->txt_responsavel->text();
    QString email = ui->txt_email->text();
    QString fone = ui->txt_telefone->text();

    QMessageBox::information(this,"Dados digitador","Cliente:"+cliente+"\nRaca:"+raca+"\nIdade:"+idade+"\nResponsavel:"+responsavel+"\nE-mail:"+email+"\nTelefone:"+fone);
}

void janela_Cadastro::on_btn_limpar_clicked()
{
    ui->txt_cliente->clear();
    ui->txt_raca->clear();
    ui->txt_idade->clear();
    ui->txt_responsavel->clear();
    ui->txt_email->clear();
    ui->txt_telefone->clear();

    ui->txt_cliente->setFocus();
}
