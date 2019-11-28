#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap logo("/home/ildja_user/Imagens/bido.png");
    ui->label->setPixmap(logo.scaled(100,100,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{

}

void MainWindow::on_btn_formulario_cadastro_clicked()
{
    form2=new Cadastro(this);
    form2->show();
}

/*
   int quantidade_linhas = ui->tabela->rowCount();

   ui->tabela->insertRow(quantidade_linhas);

   inserirNaTabela(clientes,quantidade_linhas);


   registroclientes.inserirClientes(cliente);
   atualizarEstatisticas();


}

void MainWindow::atualizarEstatisticas()
{
    ui->maiorNota->setText(QString::number(turma.getMaiorNota()));
    ui->menorNota->setText(QString::number(turma.getMenorNota()));
    ui->media->setText(QString::number(turma.getMedia()));
}

void Cadastro::inserirNaTabela(Aluno a, int linha)
{
    ui->tabela->setItem(linha,0, new QTableWidgetItem(a.getNome()));
    ui->tabela->setItem(linha,1, new QTableWidgetItem(a.getSexo()));
    ui->tabela->setItem(linha,2, new QTableWidgetItem(a.getIdade()));
    ui->tabela->setItem(linha,3, new QTableWidgetItem(QString::number(a.getMedia())));
    ui->tabela->setItem(linha,4, new QTableWidgetItem(a.definirStatus()));
}


void MainWindow::on_btn_ordernarNome_clicked()
{
 turma.ordenarPorNome();
 ui->tabela->clearContents();
 for(int i=0; i<turma.size();i++){
     inserirNaTabela(turma[i],i);
 }
}
*/
