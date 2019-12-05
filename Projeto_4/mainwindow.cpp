#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_inserirDados_clicked()
{
    int qrow = 0;
    bool senha_acesso = true;

    if(ui->txt_nome->text().size() != 0 and ui->combo_sexo->currentText() != "Selecione o sexo" and ui->combo_raca->currentText() != "Selecione a raça" and ui->txt_idade->text().size() != 0 and ui->txt_responsavel->text().size() != 0 and ui->txt_adestrador->text().size() != 0 and ui->txt_avaliador1->text().size() != 0 and ui->txt_avaliador2->text().size() != 0 and ui->txt_nota1->text().size() != 0 and ui->txt_nota2->text().size() != 0 and ui->txt_senha_acesso->text().size() != 0){
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

                 ui->tabela_provarealizada->setColumnWidth(0,120);
                 ui->tabela_provarealizada->setColumnWidth(1,80);
                 ui->tabela_provarealizada->setColumnWidth(2,190);
                 ui->tabela_provarealizada->setColumnWidth(3,80);
                 ui->tabela_provarealizada->setColumnWidth(4,100);
                 ui->tabela_provarealizada->setColumnWidth(5,110);
                 ui->tabela_provarealizada->setColumnWidth(6,120);

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
    ui->tabela_provarealizada->setItem(row,3, new QTableWidgetItem(c.getIdade()));
    ui->tabela_provarealizada->setItem(row,4, new QTableWidgetItem(c.getSexo()));
    ui->tabela_provarealizada->setItem(row,5, new QTableWidgetItem(c.getResponsavel()));
    ui->tabela_provarealizada->setItem(row,6, new QTableWidgetItem(c.getAdestrador()));
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
    if(ui->sel_nome->isChecked()) {
        ui->tabela_provarealizada->clearContents();
        a.ordenarListaNome();
        for(int i = 0; i < a.size(); i++){
            inserirDadosNaTabela(a[i],i);
        }

    }else if (ui->sel_media->isChecked()) {
            ui->tabela_provarealizada->clearContents();
            a.ordenarListaMedia();
            for(int i = 0; i< a.size(); i++)
            for(int i = 0; i < a.size(); i++){
                inserirDadosNaTabela(a[i],i);
            }

    }else if (ui->sel_raca->isChecked()) {
           ui->tabela_provarealizada->clearContents();
           a.ordenarListaRaca();
           for (int i = 0; i < a.size(); i++)
           for(int i = 0; i < a.size(); i++){
               inserirDadosNaTabela(a[i],i);
           }

    }else{
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
}

void MainWindow::Salvar()
{
    QString arqname = QFileDialog::getSaveFileName(this, "Salvar Arquivo","","*.csv");

    if(Arquivo::salvarLista(arqname, a) == 1)
        QMessageBox::information(this,"Salvar Provas Realizadas", "Dados salvos com Sucesso!");
    else
        QMessageBox::information(this,"Erro", "Não foi possível salvar os dados!");
}

void MainWindow::Carregar()
{
    QString arqname = QFileDialog::getOpenFileName(this, "Carregar Arquivos","","*.csv");

    if(Arquivo::carregarLista(arqname, a) == 1){
        QMessageBox::critical(this,"Arquivo","O arquivo já foi lido, favor cheque a tabela!");
    }else{
        ui->tabela_provarealizada->clearContents();
        on_actionLimpar_Tabela_triggered();
        for (int i = 0;i<a.size();i++) {
            ui->tabela_provarealizada->insertRow(i);
            inserirDadosNaTabela(a[i],i);
            QMessageBox::information(this,"Arquivo","O Arquivo foi lido, cheque a tabela!");
            }
       }
}

/*void MainWindow::Carregar()
    {
        QString arqname = QFileDialog::getOpenFileName(this, "Lista de Livros Lidos","","Texto Puro(*.txt);;Arquivos Separado por Vírgulas(*.csv)");
        a.clear();

        if(Arquivo::carregarLista(arqname,a)){

            ui->tabela_provarealizada->clearContents();
            for(int i = 0; i < a.size(); i++){
                if(i >= ui->tabela_provarealizada->rowCount())
                    ui->tabela_provarealizada->insertRow(i);
                inserirDadosNaTabela(a[i],i);
            }
        }else{
            QMessageBox::information(this, "Carregar Lista de Livros Lidos", "Não foi possível carregar!");
        }
    }*/

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

void MainWindow::on_tabela_provarealizada_cellDoubleClicked(int row, int column)
{
    if(column == 0){
        QMessageBox::StandardButton resp = QMessageBox::question(this, "Editar Itens", "Você deseja editar este item?");
    if(resp == QMessageBox::Yes){
        bool ok;
        QString txt = QInputDialog::getText(this, "Alterar Nome", "Digite o novo Nome", QLineEdit::Normal,"",&ok);
        if(ok and !txt.isEmpty()){
        Caes temp;
            temp.setNome(txt);
            //temp.setMedia(a[row].CalcularMedia());
            temp.setRaca(a[row].getRaca());
            temp.setIdade(a[row].getIdade());
            temp.setSexo(a[row].getSexo());
            temp.setResponsavel(a[row].getResponsavel());
            temp.setAdestrador(a[row].getAdestrador());
            a.eraseNome(txt);
            a.btn_inserirDados(temp);
            ui->tabela_provarealizada->setItem(row, column, new QTableWidgetItem(temp.getNome()));
        }else{
           QMessageBox::critical(this, "Erro", "O objeto a ser editado está vazio.");
           }
        }
    }

    if(column == 1){
            QMessageBox::StandardButton resp = QMessageBox::question(this, "Editar Itens", "Você deseja editar este item?");
           if(resp == QMessageBox::Yes){
               bool ok;
               QString txt = QInputDialog::getText(this, "Alterar Nota Avaliador 1", "Nota Avaliador 1", QLineEdit::Normal,"",&ok);
               if(ok and !txt.isEmpty()){
                   a.setNota1(row,txt.toFloat());
               }

               QString txt1 = QInputDialog::getText(this, "Alterar Nota Avaliador 2", "Nota Avaliador 2", QLineEdit::Normal,"",&ok);
               if(ok and !txt1.isEmpty()){
                   a.setNota2(row,txt1.toFloat());
               }

                   a.find(row).CalcularMedia();
                   a.eraseNome(txt);
               inserirDadosNaTabela(a[row],row);
           }else{
              QMessageBox::critical(this, "Erro", "O objeto a ser editado está vazio.");
               }
           }

    if(column == 2){
        QMessageBox::StandardButton resp = QMessageBox::question(this, "Editar Itens", "Você deseja editar este item?");
    if(resp == QMessageBox::Yes){
        bool ok;
        QString txt = QInputDialog::getText(this, "Alterar Valor", "Digite o novo valor", QLineEdit::Normal,"",&ok);
        if(ok and !txt.isEmpty()){

            Caes temp;
                temp.setNome(a[row].getNome());
              //  temp.setMedia(a[row].CalcularMedia());
                temp.setRaca(txt);
                temp.setIdade(a[row].getIdade());
                temp.setSexo(a[row].getSexo());
                temp.setResponsavel(a[row].getResponsavel());
                temp.setAdestrador(a[row].getAdestrador());
                a.eraseNome(txt);
                a.btn_inserirDados(temp);
            ui->tabela_provarealizada->setItem(row, column, new QTableWidgetItem(temp.getRaca()));
        }else{
           QMessageBox::critical(this, "Erro", "O objeto a ser editado está vazio.");
            }
        }
    }
    if(column == 3){
        QMessageBox::StandardButton resp = QMessageBox::question(this, "Editar Itens", "Você deseja editar este item?");
    if(resp == QMessageBox::Yes){
        bool ok;
        QString txt = QInputDialog::getText(this, "Alterar Data de Postagem", "Digite a nova data:",QLineEdit::Normal,"",&ok);
        if(ok and !txt.isEmpty()){

            Caes temp;
                temp.setNome(a[row].getNome());
              //  temp.setMedia(a[row].CalcularMedia());
                temp.setRaca(a[row].getRaca());
                temp.setIdade(txt);
                temp.setSexo(a[row].getSexo());
                temp.setResponsavel(a[row].getResponsavel());
                temp.setAdestrador(a[row].getAdestrador());
                a.eraseNome(txt);
                a.btn_inserirDados(temp);
            ui->tabela_provarealizada->setItem(row, column, new QTableWidgetItem(temp.getIdade()));
        }else{
           QMessageBox::critical(this, "Erro", "O objeto a ser editado está vazio.");
            }
        }
    }
    if(column == 4){
        QMessageBox::StandardButton resp = QMessageBox::question(this, "Editar Itens", "Você deseja editar este item?");
    if(resp == QMessageBox::Yes){
        bool ok;
        QString txt = QInputDialog::getText(this, "Alterar Status do objeto", "Digite o novo status:", QLineEdit::Normal,"",&ok);
        if(ok and !txt.isEmpty()){

            Caes temp;
                temp.setNome(a[row].getNome());
              //  temp.setMedia(a[row].CalcularMedia());
                temp.setRaca(a[row].getRaca());
                temp.setIdade(a[row].getIdade());
                temp.setSexo(txt);
                temp.setResponsavel(a[row].getResponsavel());
                temp.setAdestrador(a[row].getAdestrador());
                a.eraseNome(txt);
                a.btn_inserirDados(temp);
            ui->tabela_provarealizada->setItem(row, column, new QTableWidgetItem(temp.getSexo()));
        }else{
           QMessageBox::critical(this, "Erro", "O objeto a ser editado está vazio.");
            }
        }
    }
    if(column == 5){
        QMessageBox::StandardButton resp = QMessageBox::question(this, "Editar Itens", "Você deseja editar este item?");
    if(resp == QMessageBox::Yes){
        bool ok;
        QString txt = QInputDialog::getText(this, "Alterar Destino", "Digite o novo destino", QLineEdit::Normal,"",&ok);
        if(ok and !txt.isEmpty()){

            Caes temp;
                temp.setNome(a[row].getNome());
              //  temp.setMedia(a[row].CalcularMedia());
                temp.setRaca(a[row].getRaca());
                temp.setIdade(a[row].getIdade());
                temp.setSexo(a[row].getSexo());
                temp.setResponsavel(txt);
                temp.setAdestrador(a[row].getAdestrador());
                a.eraseNome(txt);
                a.btn_inserirDados(temp);
            ui->tabela_provarealizada->setItem(row, column, new QTableWidgetItem(temp.getResponsavel()));
        }else{
           QMessageBox::critical(this, "Erro", "O objeto a ser editado está vazio.");
            }
        }
    }
    if(column == 6){
        QMessageBox::StandardButton resp = QMessageBox::question(this, "Editar Itens", "Você deseja editar este item?");
    if(resp == QMessageBox::Yes){
        bool ok;
        QString txt = QInputDialog::getText(this, "Alterar Valor", "Digite o novo valor", QLineEdit::Normal,"",&ok);
        if(ok and !txt.isEmpty()){
            Caes temp;
                temp.setNome(a[row].getNome());
              //  temp.setMedia(a[row].CalcularMedia());
                temp.setRaca(a[row].getRaca());
                temp.setIdade(a[row].getIdade());
                temp.setSexo(a[row].getSexo());
                temp.setResponsavel(a[row].getResponsavel());
                temp.setAdestrador(txt);
                a.eraseNome(txt);
                a.btn_inserirDados(temp);
           ui->tabela_provarealizada->setItem(row, column, new QTableWidgetItem(temp.getAdestrador()));
        }else{
           QMessageBox::critical(this, "Erro", "O objeto a ser editado está vazio.");
            }
        }
    }
}


void MainWindow::on_btn_atualizar_clicked()
{
    if(ui->tabela_provarealizada->rowCount() == 0){
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
      //    ui->txt_racadestaque->setText(a.racaDestaque());
         }
        }
}


