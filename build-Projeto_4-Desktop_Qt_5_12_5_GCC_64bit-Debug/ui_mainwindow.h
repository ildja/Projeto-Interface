/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSalvar;
    QAction *actionCarregar;
    QAction *actionSair;
    QAction *actionLimpar_Tabela;
    QWidget *centralwidget;
    QTabWidget *Dados;
    QWidget *tab;
    QLabel *nome;
    QLabel *responsavel;
    QLabel *adestrador;
    QLabel *nota1;
    QLineEdit *txt_nome;
    QLineEdit *txt_responsavel;
    QLineEdit *txt_nota1;
    QLabel *avaliador;
    QLineEdit *txt_avaliador1;
    QLabel *avaliador2;
    QLineEdit *txt_avaliador2;
    QLabel *nota2;
    QLineEdit *txt_nota2;
    QLineEdit *txt_adestrador;
    QLabel *senha_acesso_2;
    QFrame *frame;
    QGroupBox *groupBox;
    QRadioButton *sel_nome;
    QRadioButton *sel_media;
    QRadioButton *sel_raca;
    QPushButton *btn_ordenar;
    QFrame *frame_5;
    QLabel *sexo;
    QComboBox *combo_sexo;
    QLabel *raca;
    QComboBox *combo_raca;
    QLabel *idade;
    QLineEdit *txt_idade;
    QLineEdit *txt_senha_acesso;
    QPushButton *btn_inserirDados;
    QPushButton *btn_limpardados;
    QFrame *plano_fundo_geral;
    QFrame *frame_2;
    QFrame *frame_3;
    QLabel *txt_provarealizada;
    QTableWidget *tabela_provarealizada;
    QFrame *frame_4;
    QLabel *logo_imagem;
    QLabel *label_2;
    QWidget *tab_2;
    QFrame *frame_6;
    QFrame *frame_7;
    QLabel *categoriaAptidao;
    QFrame *frame_8;
    QLabel *txt_vencedorPrimeiro;
    QLabel *label;
    QLabel *txt_racavencedora;
    QLabel *label_5;
    QLabel *Primeirolugar;
    QLabel *txt_vencedorCaoLocaliza;
    QFrame *frame_15;
    QFrame *frame_19;
    QLabel *txt_vencedorTerceiro;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *txt_racaTerceiro;
    QLabel *TerceiroLugar;
    QFrame *frame_13;
    QLabel *Segundolugar;
    QFrame *frame_17;
    QLabel *txt_vencedorSegundo;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *txt_racaSegunda;
    QFrame *frame_12;
    QFrame *frame_21;
    QLabel *txt_racadestaque;
    QLabel *racadestaque;
    QPushButton *btn_atualizar;
    QMenuBar *menubar;
    QMenu *menuarquivo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(921, 743);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        actionCarregar = new QAction(MainWindow);
        actionCarregar->setObjectName(QString::fromUtf8("actionCarregar"));
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        actionLimpar_Tabela = new QAction(MainWindow);
        actionLimpar_Tabela->setObjectName(QString::fromUtf8("actionLimpar_Tabela"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Dados = new QTabWidget(centralwidget);
        Dados->setObjectName(QString::fromUtf8("Dados"));
        Dados->setGeometry(QRect(30, 20, 1247, 681));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Dados->sizePolicy().hasHeightForWidth());
        Dados->setSizePolicy(sizePolicy);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        nome = new QLabel(tab);
        nome->setObjectName(QString::fromUtf8("nome"));
        nome->setGeometry(QRect(60, 70, 111, 24));
        nome->setStyleSheet(QString::fromUtf8("font: 75 12pt \"URW Bookman L\";\n"
"color: rgb(0, 0, 0);"));
        responsavel = new QLabel(tab);
        responsavel->setObjectName(QString::fromUtf8("responsavel"));
        responsavel->setGeometry(QRect(60, 130, 101, 24));
        responsavel->setStyleSheet(QString::fromUtf8("font: 75 12pt \"URW Bookman L\";\n"
"color: rgb(0, 0, 0);"));
        adestrador = new QLabel(tab);
        adestrador->setObjectName(QString::fromUtf8("adestrador"));
        adestrador->setGeometry(QRect(60, 160, 101, 24));
        adestrador->setStyleSheet(QString::fromUtf8("font: 75 12pt \"URW Bookman L\";\n"
"color: rgb(0, 0, 0);"));
        nota1 = new QLabel(tab);
        nota1->setObjectName(QString::fromUtf8("nota1"));
        nota1->setGeometry(QRect(470, 190, 41, 24));
        nota1->setStyleSheet(QString::fromUtf8("font: 75 12pt \"URW Bookman L\";\n"
"color: rgb(0, 0, 0);"));
        txt_nome = new QLineEdit(tab);
        txt_nome->setObjectName(QString::fromUtf8("txt_nome"));
        txt_nome->setGeometry(QRect(180, 70, 181, 24));
        txt_responsavel = new QLineEdit(tab);
        txt_responsavel->setObjectName(QString::fromUtf8("txt_responsavel"));
        txt_responsavel->setGeometry(QRect(180, 130, 381, 24));
        txt_nota1 = new QLineEdit(tab);
        txt_nota1->setObjectName(QString::fromUtf8("txt_nota1"));
        txt_nota1->setGeometry(QRect(520, 190, 41, 24));
        avaliador = new QLabel(tab);
        avaliador->setObjectName(QString::fromUtf8("avaliador"));
        avaliador->setGeometry(QRect(60, 190, 101, 24));
        avaliador->setStyleSheet(QString::fromUtf8("font: 75 12pt \"URW Bookman L\";\n"
"color: rgb(0, 0, 0);"));
        txt_avaliador1 = new QLineEdit(tab);
        txt_avaliador1->setObjectName(QString::fromUtf8("txt_avaliador1"));
        txt_avaliador1->setGeometry(QRect(180, 190, 281, 24));
        avaliador2 = new QLabel(tab);
        avaliador2->setObjectName(QString::fromUtf8("avaliador2"));
        avaliador2->setGeometry(QRect(60, 220, 101, 21));
        avaliador2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"URW Bookman L\";\n"
"color: rgb(0, 0, 0);"));
        txt_avaliador2 = new QLineEdit(tab);
        txt_avaliador2->setObjectName(QString::fromUtf8("txt_avaliador2"));
        txt_avaliador2->setGeometry(QRect(180, 220, 281, 24));
        nota2 = new QLabel(tab);
        nota2->setObjectName(QString::fromUtf8("nota2"));
        nota2->setGeometry(QRect(470, 220, 41, 21));
        nota2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"URW Bookman L\";\n"
"color: rgb(0, 0, 0);"));
        txt_nota2 = new QLineEdit(tab);
        txt_nota2->setObjectName(QString::fromUtf8("txt_nota2"));
        txt_nota2->setGeometry(QRect(520, 220, 41, 24));
        txt_adestrador = new QLineEdit(tab);
        txt_adestrador->setObjectName(QString::fromUtf8("txt_adestrador"));
        txt_adestrador->setGeometry(QRect(180, 160, 381, 24));
        senha_acesso_2 = new QLabel(tab);
        senha_acesso_2->setObjectName(QString::fromUtf8("senha_acesso_2"));
        senha_acesso_2->setGeometry(QRect(60, 250, 111, 20));
        senha_acesso_2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"URW Bookman L\";\n"
"color: rgb(0, 0, 0);"));
        frame = new QFrame(tab);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(-10, 0, 891, 661));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(640, 350, 191, 231));
        groupBox->setStyleSheet(QString::fromUtf8("font: 75 12pt \"URW Bookman L\";\n"
"color: rgb(0, 0, 0);"));
        sel_nome = new QRadioButton(groupBox);
        sel_nome->setObjectName(QString::fromUtf8("sel_nome"));
        sel_nome->setGeometry(QRect(50, 50, 100, 22));
        sel_media = new QRadioButton(groupBox);
        sel_media->setObjectName(QString::fromUtf8("sel_media"));
        sel_media->setGeometry(QRect(50, 80, 100, 22));
        sel_raca = new QRadioButton(groupBox);
        sel_raca->setObjectName(QString::fromUtf8("sel_raca"));
        sel_raca->setGeometry(QRect(50, 110, 100, 22));
        btn_ordenar = new QPushButton(groupBox);
        btn_ordenar->setObjectName(QString::fromUtf8("btn_ordenar"));
        btn_ordenar->setGeometry(QRect(50, 160, 80, 24));
        frame_5 = new QFrame(groupBox);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(0, 20, 191, 211));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: rgb(252, 233, 79);"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        frame_5->raise();
        sel_nome->raise();
        sel_media->raise();
        sel_raca->raise();
        btn_ordenar->raise();
        sexo = new QLabel(frame);
        sexo->setObjectName(QString::fromUtf8("sexo"));
        sexo->setGeometry(QRect(380, 70, 41, 24));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sexo->sizePolicy().hasHeightForWidth());
        sexo->setSizePolicy(sizePolicy1);
        sexo->setStyleSheet(QString::fromUtf8("font: 75 12pt \"URW Bookman L\";\n"
"color: rgb(0, 0, 0);"));
        combo_sexo = new QComboBox(frame);
        combo_sexo->addItem(QString());
        combo_sexo->addItem(QString());
        combo_sexo->addItem(QString());
        combo_sexo->setObjectName(QString::fromUtf8("combo_sexo"));
        combo_sexo->setGeometry(QRect(430, 70, 141, 24));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(combo_sexo->sizePolicy().hasHeightForWidth());
        combo_sexo->setSizePolicy(sizePolicy2);
        raca = new QLabel(frame);
        raca->setObjectName(QString::fromUtf8("raca"));
        raca->setGeometry(QRect(70, 100, 101, 24));
        raca->setStyleSheet(QString::fromUtf8("font: 75 12pt \"URW Bookman L\";\n"
"color: rgb(0, 0, 0);"));
        combo_raca = new QComboBox(frame);
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->addItem(QString());
        combo_raca->setObjectName(QString::fromUtf8("combo_raca"));
        combo_raca->setGeometry(QRect(190, 100, 211, 24));
        idade = new QLabel(frame);
        idade->setObjectName(QString::fromUtf8("idade"));
        idade->setGeometry(QRect(410, 100, 101, 24));
        idade->setStyleSheet(QString::fromUtf8("font: 75 12pt \"URW Bookman L\";\n"
"color: rgb(0, 0, 0);"));
        txt_idade = new QLineEdit(frame);
        txt_idade->setObjectName(QString::fromUtf8("txt_idade"));
        txt_idade->setEnabled(true);
        txt_idade->setGeometry(QRect(460, 100, 111, 24));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(txt_idade->sizePolicy().hasHeightForWidth());
        txt_idade->setSizePolicy(sizePolicy3);
        txt_senha_acesso = new QLineEdit(frame);
        txt_senha_acesso->setObjectName(QString::fromUtf8("txt_senha_acesso"));
        txt_senha_acesso->setGeometry(QRect(190, 250, 171, 24));
        btn_inserirDados = new QPushButton(frame);
        btn_inserirDados->setObjectName(QString::fromUtf8("btn_inserirDados"));
        btn_inserirDados->setGeometry(QRect(370, 250, 101, 24));
        btn_limpardados = new QPushButton(frame);
        btn_limpardados->setObjectName(QString::fromUtf8("btn_limpardados"));
        btn_limpardados->setGeometry(QRect(480, 250, 91, 24));
        plano_fundo_geral = new QFrame(frame);
        plano_fundo_geral->setObjectName(QString::fromUtf8("plano_fundo_geral"));
        plano_fundo_geral->setGeometry(QRect(10, 10, 871, 641));
        plano_fundo_geral->setStyleSheet(QString::fromUtf8("background-color: rgb(65, 181, 175);"));
        plano_fundo_geral->setFrameShape(QFrame::StyledPanel);
        plano_fundo_geral->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(plano_fundo_geral);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(40, 40, 541, 241));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(171, 232, 230);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(plano_fundo_geral);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(40, 320, 541, 291));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(171, 232, 230);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        txt_provarealizada = new QLabel(frame_3);
        txt_provarealizada->setObjectName(QString::fromUtf8("txt_provarealizada"));
        txt_provarealizada->setGeometry(QRect(190, 10, 141, 20));
        txt_provarealizada->setStyleSheet(QString::fromUtf8("font: 75 12pt \"URW Bookman L\";\n"
"color: rgb(0, 0, 0);"));
        tabela_provarealizada = new QTableWidget(frame_3);
        if (tabela_provarealizada->columnCount() < 3)
            tabela_provarealizada->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabela_provarealizada->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabela_provarealizada->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabela_provarealizada->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tabela_provarealizada->setObjectName(QString::fromUtf8("tabela_provarealizada"));
        tabela_provarealizada->setGeometry(QRect(20, 41, 501, 231));
        tabela_provarealizada->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tabela_provarealizada->horizontalHeader()->setDefaultSectionSize(164);
        frame_4 = new QFrame(plano_fundo_geral);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(610, 330, 231, 261));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(171, 232, 230);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        logo_imagem = new QLabel(plano_fundo_geral);
        logo_imagem->setObjectName(QString::fromUtf8("logo_imagem"));
        logo_imagem->setGeometry(QRect(630, 10, 211, 161));
        logo_imagem->setStyleSheet(QString::fromUtf8("image: url(:/Imagens/husky-siberiano-2-768x512.png);"));
        logo_imagem->setScaledContents(true);
        label_2 = new QLabel(plano_fundo_geral);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(670, 210, 58, 16));
        plano_fundo_geral->raise();
        sexo->raise();
        combo_sexo->raise();
        raca->raise();
        combo_raca->raise();
        idade->raise();
        txt_idade->raise();
        txt_senha_acesso->raise();
        btn_inserirDados->raise();
        btn_limpardados->raise();
        groupBox->raise();
        Dados->addTab(tab, QString());
        frame->raise();
        nome->raise();
        responsavel->raise();
        adestrador->raise();
        nota1->raise();
        txt_nome->raise();
        txt_responsavel->raise();
        txt_nota1->raise();
        avaliador->raise();
        txt_avaliador1->raise();
        avaliador2->raise();
        txt_avaliador2->raise();
        nota2->raise();
        txt_nota2->raise();
        txt_adestrador->raise();
        senha_acesso_2->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        frame_6 = new QFrame(tab_2);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(0, 0, 871, 631));
        frame_6->setStyleSheet(QString::fromUtf8("background-color: rgb(65, 181, 175);"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        frame_7 = new QFrame(frame_6);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(260, 20, 361, 131));
        frame_7->setStyleSheet(QString::fromUtf8("background-color: rgb(171, 232, 230);"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        categoriaAptidao = new QLabel(frame_7);
        categoriaAptidao->setObjectName(QString::fromUtf8("categoriaAptidao"));
        categoriaAptidao->setGeometry(QRect(350, 190, 311, 131));
        frame_8 = new QFrame(frame_7);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setGeometry(QRect(20, 40, 321, 71));
        frame_8->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 212, 0);"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        txt_vencedorPrimeiro = new QLabel(frame_8);
        txt_vencedorPrimeiro->setObjectName(QString::fromUtf8("txt_vencedorPrimeiro"));
        txt_vencedorPrimeiro->setGeometry(QRect(60, 0, 261, 41));
        txt_vencedorPrimeiro->setStyleSheet(QString::fromUtf8("font: 75 16pt \"URW Bookman L\";\n"
"color: rgb(0, 0, 0);"));
        label = new QLabel(frame_8);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 50, 41, 16));
        label->setStyleSheet(QString::fromUtf8("font: 75 10pt \"URW Bookman L\";\n"
"color: rgb(0, 0, 0);"));
        txt_racavencedora = new QLabel(frame_8);
        txt_racavencedora->setObjectName(QString::fromUtf8("txt_racavencedora"));
        txt_racavencedora->setGeometry(QRect(60, 40, 261, 31));
        txt_racavencedora->setStyleSheet(QString::fromUtf8("font: 75 12pt \"URW Bookman L\";\n"
"color: rgb(0, 0, 0);"));
        label_5 = new QLabel(frame_8);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 10, 41, 16));
        label_5->setStyleSheet(QString::fromUtf8("font: 75 10pt \"URW Bookman L\";\n"
"color: rgb(0, 0, 0);"));
        Primeirolugar = new QLabel(frame_7);
        Primeirolugar->setObjectName(QString::fromUtf8("Primeirolugar"));
        Primeirolugar->setGeometry(QRect(120, 10, 121, 20));
        Primeirolugar->setStyleSheet(QString::fromUtf8("font: 75 12pt \"URW Bookman L\";\n"
"color: rgb(0, 0, 0);"));
        txt_vencedorCaoLocaliza = new QLabel(frame_6);
        txt_vencedorCaoLocaliza->setObjectName(QString::fromUtf8("txt_vencedorCaoLocaliza"));
        txt_vencedorCaoLocaliza->setGeometry(QRect(350, 350, 58, 16));
        frame_15 = new QFrame(frame_6);
        frame_15->setObjectName(QString::fromUtf8("frame_15"));
        frame_15->setGeometry(QRect(260, 320, 361, 131));
        frame_15->setStyleSheet(QString::fromUtf8("background-color: rgb(171, 232, 230);"));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        frame_19 = new QFrame(frame_15);
        frame_19->setObjectName(QString::fromUtf8("frame_19"));
        frame_19->setGeometry(QRect(20, 40, 321, 71));
        frame_19->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 212, 0);"));
        frame_19->setFrameShape(QFrame::StyledPanel);
        frame_19->setFrameShadow(QFrame::Raised);
        txt_vencedorTerceiro = new QLabel(frame_19);
        txt_vencedorTerceiro->setObjectName(QString::fromUtf8("txt_vencedorTerceiro"));
        txt_vencedorTerceiro->setGeometry(QRect(60, 0, 261, 41));
        txt_vencedorTerceiro->setStyleSheet(QString::fromUtf8("font: 75 16pt \"URW Bookman L\";\n"
"color: rgb(0, 0, 0);"));
        label_11 = new QLabel(frame_19);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 10, 41, 16));
        label_11->setStyleSheet(QString::fromUtf8("font: 75 10pt \"URW Bookman L\";\n"
"color: rgb(0, 0, 0);"));
        label_12 = new QLabel(frame_19);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 50, 58, 16));
        label_12->setStyleSheet(QString::fromUtf8("font: 75 10pt \"URW Bookman L\";\n"
"color: rgb(0, 0, 0);"));
        txt_racaTerceiro = new QLabel(frame_19);
        txt_racaTerceiro->setObjectName(QString::fromUtf8("txt_racaTerceiro"));
        txt_racaTerceiro->setGeometry(QRect(60, 40, 261, 31));
        txt_racaTerceiro->setStyleSheet(QString::fromUtf8("font: 75 12pt \"URW Bookman L\";\n"
"color: rgb(0, 0, 0);"));
        TerceiroLugar = new QLabel(frame_15);
        TerceiroLugar->setObjectName(QString::fromUtf8("TerceiroLugar"));
        TerceiroLugar->setGeometry(QRect(130, 10, 121, 21));
        TerceiroLugar->setStyleSheet(QString::fromUtf8("font: 75 12pt \"URW Bookman L\";\n"
"color: rgb(0, 0, 0);"));
        frame_13 = new QFrame(frame_6);
        frame_13->setObjectName(QString::fromUtf8("frame_13"));
        frame_13->setGeometry(QRect(260, 170, 361, 131));
        frame_13->setStyleSheet(QString::fromUtf8("background-color: rgb(171, 232, 230);"));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        Segundolugar = new QLabel(frame_13);
        Segundolugar->setObjectName(QString::fromUtf8("Segundolugar"));
        Segundolugar->setGeometry(QRect(130, 10, 131, 21));
        Segundolugar->setStyleSheet(QString::fromUtf8("font: 75 12pt \"URW Bookman L\";\n"
"color: rgb(0, 0, 0);"));
        frame_17 = new QFrame(frame_13);
        frame_17->setObjectName(QString::fromUtf8("frame_17"));
        frame_17->setGeometry(QRect(20, 40, 321, 71));
        frame_17->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 212, 0);"));
        frame_17->setFrameShape(QFrame::StyledPanel);
        frame_17->setFrameShadow(QFrame::Raised);
        txt_vencedorSegundo = new QLabel(frame_17);
        txt_vencedorSegundo->setObjectName(QString::fromUtf8("txt_vencedorSegundo"));
        txt_vencedorSegundo->setGeometry(QRect(60, 0, 261, 41));
        txt_vencedorSegundo->setStyleSheet(QString::fromUtf8("font: 75 16pt \"URW Bookman L\";\n"
"color: rgb(0, 0, 0);"));
        label_9 = new QLabel(frame_17);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 10, 41, 16));
        label_9->setStyleSheet(QString::fromUtf8("font: 75 10pt \"URW Bookman L\";\n"
"color: rgb(0, 0, 0);"));
        label_10 = new QLabel(frame_17);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 50, 58, 16));
        label_10->setStyleSheet(QString::fromUtf8("font: 75 10pt \"URW Bookman L\";\n"
"color: rgb(0, 0, 0);"));
        txt_racaSegunda = new QLabel(frame_17);
        txt_racaSegunda->setObjectName(QString::fromUtf8("txt_racaSegunda"));
        txt_racaSegunda->setGeometry(QRect(60, 45, 261, 21));
        txt_racaSegunda->setStyleSheet(QString::fromUtf8("font: 75 12pt \"URW Bookman L\";\n"
"color: rgb(0, 0, 0);"));
        frame_12 = new QFrame(frame_6);
        frame_12->setObjectName(QString::fromUtf8("frame_12"));
        frame_12->setGeometry(QRect(260, 470, 361, 131));
        frame_12->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 212, 0);"));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        frame_21 = new QFrame(frame_12);
        frame_21->setObjectName(QString::fromUtf8("frame_21"));
        frame_21->setGeometry(QRect(20, 30, 321, 80));
        frame_21->setStyleSheet(QString::fromUtf8("background-color: rgb(171, 232, 230);"));
        frame_21->setFrameShape(QFrame::StyledPanel);
        frame_21->setFrameShadow(QFrame::Raised);
        txt_racadestaque = new QLabel(frame_21);
        txt_racadestaque->setObjectName(QString::fromUtf8("txt_racadestaque"));
        txt_racadestaque->setGeometry(QRect(10, 10, 301, 61));
        txt_racadestaque->setStyleSheet(QString::fromUtf8("font: 75 16pt \"URW Bookman L\";\n"
"color: rgb(0, 0, 0);"));
        racadestaque = new QLabel(frame_12);
        racadestaque->setObjectName(QString::fromUtf8("racadestaque"));
        racadestaque->setGeometry(QRect(60, 10, 251, 20));
        racadestaque->setStyleSheet(QString::fromUtf8("font: 75 12pt \"URW Bookman L\";\n"
"color: rgb(0, 0, 0);"));
        btn_atualizar = new QPushButton(frame_6);
        btn_atualizar->setObjectName(QString::fromUtf8("btn_atualizar"));
        btn_atualizar->setGeometry(QRect(30, 30, 131, 31));
        btn_atualizar->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 0, 0);\n"
"alternate-background-color: rgb(237, 212, 0);\n"
"font: 14pt \"Ubuntu\";\n"
"color: rgb(255, 255, 255);"));
        frame_13->raise();
        frame_7->raise();
        txt_vencedorCaoLocaliza->raise();
        frame_15->raise();
        frame_12->raise();
        btn_atualizar->raise();
        Dados->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 921, 21));
        menuarquivo = new QMenu(menubar);
        menuarquivo->setObjectName(QString::fromUtf8("menuarquivo"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuarquivo->menuAction());
        menuarquivo->addAction(actionSalvar);
        menuarquivo->addAction(actionCarregar);
        menuarquivo->addAction(actionSair);
        menuarquivo->addAction(actionLimpar_Tabela);

        retranslateUi(MainWindow);

        Dados->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSalvar->setText(QApplication::translate("MainWindow", "Salvar", nullptr));
        actionCarregar->setText(QApplication::translate("MainWindow", "Carregar", nullptr));
        actionSair->setText(QApplication::translate("MainWindow", "Sair", nullptr));
        actionLimpar_Tabela->setText(QApplication::translate("MainWindow", "Limpar Tabela", nullptr));
        nome->setText(QApplication::translate("MainWindow", "Nome:", nullptr));
        responsavel->setText(QApplication::translate("MainWindow", "Respons\303\241vel:", nullptr));
        adestrador->setText(QApplication::translate("MainWindow", "Adestrador:", nullptr));
        nota1->setText(QApplication::translate("MainWindow", "Nota:", nullptr));
        txt_nota1->setText(QString());
        avaliador->setText(QApplication::translate("MainWindow", "Avaliador 1:", nullptr));
        avaliador2->setText(QApplication::translate("MainWindow", "Avaliador 2:", nullptr));
        nota2->setText(QApplication::translate("MainWindow", "Nota:", nullptr));
        senha_acesso_2->setText(QApplication::translate("MainWindow", "Senha Ident.:", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Ordena\303\247\303\243o:", nullptr));
        sel_nome->setText(QApplication::translate("MainWindow", "Nome", nullptr));
        sel_media->setText(QApplication::translate("MainWindow", "M\303\251dia", nullptr));
        sel_raca->setText(QApplication::translate("MainWindow", "Ra\303\247a", nullptr));
        btn_ordenar->setText(QApplication::translate("MainWindow", "Ordenar", nullptr));
        sexo->setText(QApplication::translate("MainWindow", "Sexo:", nullptr));
        combo_sexo->setItemText(0, QApplication::translate("MainWindow", "Selecione o sexo", nullptr));
        combo_sexo->setItemText(1, QApplication::translate("MainWindow", "Feminino", nullptr));
        combo_sexo->setItemText(2, QApplication::translate("MainWindow", "Masculino", nullptr));

        raca->setText(QApplication::translate("MainWindow", "Ra\303\247a:", nullptr));
        combo_raca->setItemText(0, QApplication::translate("MainWindow", "Selecione a ra\303\247a", nullptr));
        combo_raca->setItemText(1, QApplication::translate("MainWindow", "Akita", nullptr));
        combo_raca->setItemText(2, QApplication::translate("MainWindow", "American staffordshire terrier", nullptr));
        combo_raca->setItemText(3, QApplication::translate("MainWindow", "Basset hound", nullptr));
        combo_raca->setItemText(4, QApplication::translate("MainWindow", "Beagle", nullptr));
        combo_raca->setItemText(5, QApplication::translate("MainWindow", "Bichon fris\303\251", nullptr));
        combo_raca->setItemText(6, QApplication::translate("MainWindow", "Boiadeiro australiano", nullptr));
        combo_raca->setItemText(7, QApplication::translate("MainWindow", "Border collie", nullptr));
        combo_raca->setItemText(8, QApplication::translate("MainWindow", "Boston terrier", nullptr));
        combo_raca->setItemText(9, QApplication::translate("MainWindow", "Boxer", nullptr));
        combo_raca->setItemText(10, QApplication::translate("MainWindow", "Buldogue franc\303\252s", nullptr));
        combo_raca->setItemText(11, QApplication::translate("MainWindow", "Buldogue ingl\303\252s", nullptr));
        combo_raca->setItemText(12, QApplication::translate("MainWindow", "Bull terrier", nullptr));
        combo_raca->setItemText(13, QApplication::translate("MainWindow", "Cane corso", nullptr));
        combo_raca->setItemText(14, QApplication::translate("MainWindow", "Cavalier king charles spaniel", nullptr));
        combo_raca->setItemText(15, QApplication::translate("MainWindow", "Chihuahua", nullptr));
        combo_raca->setItemText(16, QApplication::translate("MainWindow", "Chow chow", nullptr));
        combo_raca->setItemText(17, QApplication::translate("MainWindow", "Cocker spaniel ingl\303\252s", nullptr));
        combo_raca->setItemText(18, QApplication::translate("MainWindow", "Dachshund", nullptr));
        combo_raca->setItemText(19, QApplication::translate("MainWindow", "D\303\241lmata", nullptr));
        combo_raca->setItemText(20, QApplication::translate("MainWindow", "Doberman", nullptr));
        combo_raca->setItemText(21, QApplication::translate("MainWindow", "Dogo argentino", nullptr));
        combo_raca->setItemText(22, QApplication::translate("MainWindow", "Dogue alem\303\243o", nullptr));
        combo_raca->setItemText(23, QApplication::translate("MainWindow", "Fila brasileiro", nullptr));
        combo_raca->setItemText(24, QApplication::translate("MainWindow", "Golden retriever", nullptr));
        combo_raca->setItemText(25, QApplication::translate("MainWindow", "Husky siberiano", nullptr));
        combo_raca->setItemText(26, QApplication::translate("MainWindow", "Jack russell terrier", nullptr));
        combo_raca->setItemText(27, QApplication::translate("MainWindow", "Labrador retriever", nullptr));
        combo_raca->setItemText(28, QApplication::translate("MainWindow", "Lhasa apso", nullptr));
        combo_raca->setItemText(29, QApplication::translate("MainWindow", "Lulu da Pomer\303\242nia", nullptr));
        combo_raca->setItemText(30, QApplication::translate("MainWindow", "Malt\303\252s", nullptr));
        combo_raca->setItemText(31, QApplication::translate("MainWindow", "Mastiff ingl\303\252s", nullptr));
        combo_raca->setItemText(32, QApplication::translate("MainWindow", "Mastim tibetano", nullptr));
        combo_raca->setItemText(33, QApplication::translate("MainWindow", "Pastor alem\303\243o", nullptr));
        combo_raca->setItemText(34, QApplication::translate("MainWindow", "Pastor australiano", nullptr));
        combo_raca->setItemText(35, QApplication::translate("MainWindow", "Pastor de Shetland", nullptr));
        combo_raca->setItemText(36, QApplication::translate("MainWindow", "Pastor Maremano Abruzes", nullptr));
        combo_raca->setItemText(37, QApplication::translate("MainWindow", "Pequin\303\252s", nullptr));
        combo_raca->setItemText(38, QApplication::translate("MainWindow", "Pinscher miniatura", nullptr));
        combo_raca->setItemText(39, QApplication::translate("MainWindow", "Pit bull", nullptr));
        combo_raca->setItemText(40, QApplication::translate("MainWindow", "Poodle", nullptr));
        combo_raca->setItemText(41, QApplication::translate("MainWindow", "Pug", nullptr));
        combo_raca->setItemText(42, QApplication::translate("MainWindow", "Rottweiler", nullptr));
        combo_raca->setItemText(43, QApplication::translate("MainWindow", "Samoieda", nullptr));
        combo_raca->setItemText(44, QApplication::translate("MainWindow", "Schnauzer", nullptr));
        combo_raca->setItemText(45, QApplication::translate("MainWindow", "Shiba", nullptr));
        combo_raca->setItemText(46, QApplication::translate("MainWindow", "Shih tzu", nullptr));
        combo_raca->setItemText(47, QApplication::translate("MainWindow", "Staffordshire bull terrier", nullptr));
        combo_raca->setItemText(48, QApplication::translate("MainWindow", "Vira-lata", nullptr));
        combo_raca->setItemText(49, QApplication::translate("MainWindow", "Weimaraner", nullptr));
        combo_raca->setItemText(50, QApplication::translate("MainWindow", "Whippet", nullptr));
        combo_raca->setItemText(51, QApplication::translate("MainWindow", "Yorkshire terrier", nullptr));

        idade->setText(QApplication::translate("MainWindow", "Idade:", nullptr));
        btn_inserirDados->setText(QApplication::translate("MainWindow", "Inserir dados", nullptr));
        btn_limpardados->setText(QApplication::translate("MainWindow", "Limpar dados", nullptr));
        txt_provarealizada->setText(QApplication::translate("MainWindow", "Prova Realizada", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tabela_provarealizada->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tabela_provarealizada->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "M\303\251dia", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tabela_provarealizada->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Ra\303\247a", nullptr));
        logo_imagem->setText(QString());
        label_2->setText(QString());
        Dados->setTabText(Dados->indexOf(tab), QApplication::translate("MainWindow", "Dados", nullptr));
        categoriaAptidao->setText(QApplication::translate("MainWindow", "Categoria Aptid\303\243o para C\303\243o de Salvamento", nullptr));
        txt_vencedorPrimeiro->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label->setText(QApplication::translate("MainWindow", "Ra\303\247a", nullptr));
        txt_racavencedora->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Nome", nullptr));
        Primeirolugar->setText(QApplication::translate("MainWindow", "Primeiro lugar", nullptr));
        txt_vencedorCaoLocaliza->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        txt_vencedorTerceiro->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Nome", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Ra\303\247a", nullptr));
        txt_racaTerceiro->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        TerceiroLugar->setText(QApplication::translate("MainWindow", "Terceiro Lugar", nullptr));
        Segundolugar->setText(QApplication::translate("MainWindow", "Segundo Lugar", nullptr));
        txt_vencedorSegundo->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Nome", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Ra\303\247a", nullptr));
        txt_racaSegunda->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        txt_racadestaque->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        racadestaque->setText(QApplication::translate("MainWindow", "Ra\303\247a Destaque em Participa\303\247\303\243o", nullptr));
        btn_atualizar->setText(QApplication::translate("MainWindow", "Atualizar", nullptr));
        Dados->setTabText(Dados->indexOf(tab_2), QApplication::translate("MainWindow", "Resultados Camp\341\272\275os", nullptr));
        menuarquivo->setTitle(QApplication::translate("MainWindow", "arquivo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
