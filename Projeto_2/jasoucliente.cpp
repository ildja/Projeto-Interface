#include "jasoucliente.h"
#include "ui_jasoucliente.h"

JaSouCliente::JaSouCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::JaSouCliente)
{
    ui->setupUi(this);
}

JaSouCliente::~JaSouCliente()
{
    delete ui;
}
