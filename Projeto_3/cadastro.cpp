#include "cadastro.h"
#include "ui_cadastro.h"
#include "racas.h"
#include "clientes.h"
#include "registroclientes.h"
#include "mainwindow.h"

Cadastro::Cadastro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cadastro)
{
    ui->setupUi(this);
}

Cadastro::~Cadastro()
{
    delete ui;
}

void Cadastro::on_pushButton_3_clicked()
{
    Racas form3;
    form3.exec();
}

void Cadastro::on_btn_cadastrar_clicked()
{
    Clientes cliente;

    cliente.setNome(ui->txt_nome->text());
    cliente.setSexo(ui->current_sexo->currentText());
    cliente.setIdade(ui->comboBox->currentText());
    cliente.setRaca(ui->comboBox_2->currentText());
    cliente.setResponsavel(ui->txt_responsavel->text());
    cliente.setFone(ui->txt_contato->text());
    cliente.setEmail(ui->txt_email->text());

    ui->txt_nome->clear();
    ui->current_sexo->clear();
    ui->comboBox->clear();
    ui->comboBox_2->clear();
    ui->txt_responsavel->clear();
    ui->txt_contato->clear();
    ui->txt_email->clear();
}

/*//é como se fosse pra herdar
void Cadastro::inserirNaTabela(Clientes a, int linha)
{
    ui->tabela->setItem(linha,0, new QTableWidgetItem(a.getNome()));
    ui->tabela->setItem(linha,1, new QTableWidgetItem(a.getSexo()));
    ui->tabela->setItem(linha,2, new QTableWidgetItem(a.getIdade()));
    ui->tabela->setItem(linha,3, new QTableWidgetItem(QString::number(a.getMedia())));
    ui->tabela->setItem(linha,4, new QTableWidgetItem(a.definirStatus()));
}
*/
