#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
  /*  connect(ui->actionSalvar,SIGNAL(triggered()), this, SLOT(salvar()));
    connect(ui->actionCarregar,SIGNAL(triggered()), this, SLOT(carregar()));*/
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*void MainWindow::atualizarVencedores()
{
    ui->txt_vencedorPrimeiro->setText(a.primeirolugar());
    ui->txt_racavencedora->setText(a.Racaprimeirolugar());
    ui->txt_vencedorSegundo->setText(a.segundolugar());
    ui->txt_racaSegunda->setText(a.Racasegundolugar());
    ui->txt_vencedorTerceiro->setText(a.terceirolugar());
    ui->txt_racaTerceiro->setText(a.Racaterceirolugar());
    ui->txt_racadestaque->setText(a.racaDestaque());
}
*/

void MainWindow::on_btn_inserirDados_clicked()
{
    int qrow = 0;
    bool senha_acesso = true;

    if(ui->txt_nome->text().size() != 0 and ui->combo_sexo->currentText() != "Selecione o sexo" and ui->combo_raca->currentText() != "" and ui->txt_idade->text().size() != 0 and ui->txt_responsavel->text().size() != 0 and ui->txt_adestrador->text().size() != 0 and ui->txt_avaliador1->text().size() != 0 and ui->txt_avaliador2->text().size() != 0 and ui->txt_nota1->text().size() != 0 and ui->txt_nota2->text().size() != 0 and ui->txt_senha_acesso->text().size() != 0){
            QString nome = ui->txt_nome->text();
            QString sexo = ui->combo_sexo->currentText();
            QString raca = ui->combo_raca->currentText();
            QString idade = ui->txt_idade->text();
            QString responsavel = ui->txt_responsavel->text();
            QString adestrador = ui->txt_adestrador->text();
            QString avaliador1 = ui->txt_avaliador1->text();
            QString avaliador2 = ui->txt_avaliador2->text();
            float nota1 = (ui->txt_nota1->text().toFloat());
            float nota2 = (ui->txt_nota2->text().toFloat());
            if(ui->txt_senha_acesso->text() != "201916100"){
                  senha_acesso = false;
            }

            Caes c(nome,sexo,raca,idade,responsavel,adestrador,avaliador1,avaliador2,nota1,nota2);

            if(senha_acesso == true){
                 a.btn_inserirDados(c);
                 qrow = ui->tabela_provarealizada->rowCount();
                 ui->tabela_provarealizada->insertRow(qrow);
                 inserirDadosNaTabela(c,qrow);
                 ui->tabela_provarealizada->setColumnWidth(0,150);
                 ui->tabela_provarealizada->setColumnWidth(1,100);
                 ui->tabela_provarealizada->setColumnWidth(2,250);

                // atualizarVencedores();

                 ui->txt_nome->clear();
                 ui->combo_sexo->setCurrentText("Selecione o sexo");
                 ui->combo_raca->setCurrentText("Selecione a raça");
                 ui->txt_idade->clear();
                 ui->txt_responsavel->clear();
                 ui->txt_adestrador->clear();
                 ui->txt_avaliador1->clear();
                 ui->txt_avaliador2->clear();
                 ui->txt_nota1->clear();
                 ui->txt_nota2->clear();
                 ui->txt_senha_acesso->clear();
                 }

            if(senha_acesso == false){
                 QMessageBox::information(this,"Senha Acesso","Senha Inválida, tente novamente!");
                 ui->txt_senha_acesso->clear();
                 }

    }else{
         QMessageBox::information(this,"Dados incompletos","Dados Incompletos, tente novamente!");
         ui->txt_senha_acesso->clear();
    }
}
void MainWindow::inserirDadosNaTabela(Caes c, int row)

{
        ui->tabela_provarealizada->setItem(row,0, new QTableWidgetItem(c.getNome()));
        ui->tabela_provarealizada->setItem(row,1, new QTableWidgetItem(QString::number(c.CalcularMedia())));
        ui->tabela_provarealizada->setItem(row,2, new QTableWidgetItem(c.getRaca()));

}

void MainWindow::on_btn_limpardados_clicked()
{
    ui->txt_nome->clear();
    ui->combo_sexo->setCurrentText("Selecione o sexo");
    ui->combo_raca->setCurrentText("Selecione a raça");
    ui->txt_idade->clear();
    ui->txt_responsavel->clear();
    ui->txt_adestrador->clear();
    ui->txt_avaliador1->clear();
    ui->txt_avaliador2->clear();
    ui->txt_nota1->clear();
    ui->txt_nota2->clear();
    ui->txt_senha_acesso->clear();
}

void MainWindow::on_btn_ordenar_clicked()
{
    if (ui->sel_nome->isChecked()) {
        ui->tabela_provarealizada->clearContents();
        a.ordenarListaNome();
        for(int i = 0; i < a.size(); i++){
            inserirDadosNaTabela(a[i],i);
        }

    } else if (ui->sel_media->isChecked()) {
            ui->tabela_provarealizada->clearContents();
            a.ordenarListaMedia();
            for(int i = 0; i< a.size(); i++)
            for(int i = 0; i < a.size(); i++){
                inserirDadosNaTabela(a[i],i);
            }

    } else if (ui->sel_raca->isChecked()) {
           ui->tabela_provarealizada->clearContents();
           a.ordenarListaRaca();
           for (int i = 0; i < a.size(); i++)
           for(int i = 0; i < a.size(); i++){
               inserirDadosNaTabela(a[i],i);
           }

    } else {
        QMessageBox::warning(this,"Erro","Selecione uma das opções!");
    }
}

void MainWindow::on_actionSalvar_triggered()
{
    Salvar();
}

void MainWindow::on_actionCarregar_triggered()
{
    Carregar();
    //atualizarEstatisticas();
}

void MainWindow::Salvar()
{
    QString nomeArquivo = QFileDialog::getSaveFileName(this, "Salvar Arquivo","","*.csv");

    if(Arquivo::salvarLista(nomeArquivo,a))
        QMessageBox::information(this,"Salvar Provas Realizadas", "Dados salvos com Sucesso!");
    else
        QMessageBox::information(this,"Salvar Provas Realizadas", "Não foi possível salvar os dados!");
}

void MainWindow::Carregar()
{
    QString nomeArquivo = QFileDialog::getOpenFileName(this, "Carregar Arquivos","","*.csv");

    if((Arquivo::carregarLista(nomeArquivo))==1){
        QMessageBox::critical(this,"Arquivo","O arquivo já foi lido, favor cheque a tabela!");
    }else{
        ui->tabela_provarealizada->clearContents();
        on_actionLimpar_Tabela_triggered();
        for (int i = 0;i<a.size();i++) {
            ui->tabela_provarealizada->insertRow(i);
            inserirDadosNaTabela(a[i],i);
        }
        QMessageBox::information(this,"Arquivo","O Arquivo foi lido, cheque a tabela!");
    }
}

void MainWindow::on_actionLimpar_Tabela_triggered()
{
    int qtdeLinhas = ui->tabela_provarealizada->rowCount();
    for(int i = 0; i < qtdeLinhas ; i++)
        ui->tabela_provarealizada->removeRow(0);
}


void MainWindow::on_actionSair_triggered()
{
    QApplication::quit();
}

void MainWindow::on_tabelaProvasRealizadas_cellDoubleClicked(int row, int column)
{
    if(column == 0){
        QMessageBox::StandardButton resp = QMessageBox::question(this, "Editar Itens", "Você desejar editar o nome do Cachorro selecionado?");

        if(resp == QMessageBox::Yes){
            bool ok;
            QString txt = QInputDialog::getText(this, "Alterar Nome do Cachorro", "Nome do Cachorro", QLineEdit::Normal,"",&ok);
            if(ok and !txt.isEmpty()){
                a.setNome(row,txt);
            }
            inserirDadosNaTabela(a[row],row);
            //atualizarVencedores();
            QMessageBox::information(this,"Editar","Dados alterados!");
        }

    }else if(column == 1){
       QMessageBox::StandardButton resp = QMessageBox::question(this, "Editar Itens", "Você desejar editar as notas da prova selecionada?");

       if(resp == QMessageBox::Yes){
           bool ok;
           QString txt = QInputDialog::getText(this, "Alterar Nota do Avaliador 1", "Nota do Avaliador 1", QLineEdit::Normal,"",&ok);
           if(ok and !txt.isEmpty()){
               a.setNota1(row,txt.toFloat());
             //  atualizarVencedores();
               QMessageBox::information(this,"Editar","Dados alterados!");
           }

           QString txt1 = QInputDialog::getText(this, "Alterar Nota do Avaliador 2", "Nota do Avaliador 2", QLineEdit::Normal,"",&ok);
           if(ok and !txt1.isEmpty()){
               a.setNota2(row,txt1.toFloat());
             //  atualizarVencedores();
               QMessageBox::information(this,"Editar","Dados alterados!");
           }

               a.find(row).CalcularMedia();

           inserirDadosNaTabela(a[row],row);
         //  atualizarVencedores();

           }

    }else if(column == 2){
        QMessageBox::StandardButton resp = QMessageBox::question(this, "Editar Itens", "Você desejar editar a raça do Cachorro selecionado?");

        if(resp == QMessageBox::Yes){
            bool ok;
            QString txt = QInputDialog::getText(this, "Alterar Raça do Cachorro", "Raça do Cachorro", QLineEdit::Normal,"",&ok);
            if(ok and !txt.isEmpty()){
                a.setNome(row,txt);
            }
            inserirDadosNaTabela(a[row],row);
        //    atualizarVencedores();
            QMessageBox::information(this,"Editar","Dados alterados!");
        }
     }
}

void MainWindow::on_btn_atualizar_clicked()
{
    if(ui->tabela_provarealizada->rowCount() == 0/*a.size() == 0 || n.size() == 0*/){
           QMessageBox::warning(this, "Atualização", "Atualização Inválida! Preencha a Tabela!");
    }else{

        if(a.size() >= 1){
          ui->txt_vencedorPrimeiro->setText(a.primeirolugar());
          ui->txt_racavencedora->setText(a.Racaprimeirolugar());

          if(a.size() >= 2){
          ui->txt_vencedorSegundo->setText(a.segundolugar());
          ui->txt_racaSegunda->setText(a.Racasegundolugar());

          if(a.size() >= 3){
          ui->txt_vencedorTerceiro->setText(a.terceirolugar());
          ui->txt_racaTerceiro->setText(a.Racaterceirolugar());
          }
          }
          ui->txt_racadestaque->setText(a.racaDestaque());

     }
}
}







