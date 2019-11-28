#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QtDebug>
#include <QString>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusbar->showMessage("Tosa & Banho");

    QPixmap logo("/home/ildja_user/Imagens/4-1-G.png");
    ui->label->setPixmap(logo.scaled(100,100,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    form2=new janela_Cadastro(this);
    form2->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    form3=new JaSouCliente(this);
    form3->show();
}
