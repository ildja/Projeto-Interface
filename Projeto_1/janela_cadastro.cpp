#include "janela_cadastro.h"
#include "ui_janela_cadastro.h"

Janela_Cadastro::Janela_Cadastro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Janela_Cadastro)
{
    ui->setupUi(this);
}

Janela_Cadastro::~Janela_Cadastro()
{
    delete ui;
}

void Janela_Cadastro::on_pushButton_clicked()
{

}
