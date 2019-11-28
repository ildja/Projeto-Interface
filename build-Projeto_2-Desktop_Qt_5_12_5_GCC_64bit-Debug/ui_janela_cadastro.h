/********************************************************************************
** Form generated from reading UI file 'janela_cadastro.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELA_CADASTRO_H
#define UI_JANELA_CADASTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_janela_Cadastro
{
public:
    QLabel *label;
    QPushButton *btn_inserir;
    QPushButton *btn_limpar;
    QSplitter *splitter;
    QLabel *cliente_2;
    QLabel *raca_2;
    QLabel *idade;
    QLabel *responsavel;
    QLabel *email;
    QLabel *fone;
    QSplitter *splitter_2;
    QLineEdit *txt_cliente;
    QLineEdit *txt_raca;
    QLineEdit *txt_idade;
    QLineEdit *txt_responsavel;
    QLineEdit *txt_email;
    QLineEdit *txt_telefone;
    QTableWidget *tableWidget;

    void setupUi(QDialog *janela_Cadastro)
    {
        if (janela_Cadastro->objectName().isEmpty())
            janela_Cadastro->setObjectName(QString::fromUtf8("janela_Cadastro"));
        janela_Cadastro->resize(602, 467);
        label = new QLabel(janela_Cadastro);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 10, 181, 20));
        btn_inserir = new QPushButton(janela_Cadastro);
        btn_inserir->setObjectName(QString::fromUtf8("btn_inserir"));
        btn_inserir->setGeometry(QRect(110, 240, 80, 24));
        btn_limpar = new QPushButton(janela_Cadastro);
        btn_limpar->setObjectName(QString::fromUtf8("btn_limpar"));
        btn_limpar->setGeometry(QRect(220, 240, 80, 24));
        splitter = new QSplitter(janela_Cadastro);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(30, 50, 74, 161));
        splitter->setOrientation(Qt::Vertical);
        cliente_2 = new QLabel(splitter);
        cliente_2->setObjectName(QString::fromUtf8("cliente_2"));
        splitter->addWidget(cliente_2);
        raca_2 = new QLabel(splitter);
        raca_2->setObjectName(QString::fromUtf8("raca_2"));
        splitter->addWidget(raca_2);
        idade = new QLabel(splitter);
        idade->setObjectName(QString::fromUtf8("idade"));
        splitter->addWidget(idade);
        responsavel = new QLabel(splitter);
        responsavel->setObjectName(QString::fromUtf8("responsavel"));
        splitter->addWidget(responsavel);
        email = new QLabel(splitter);
        email->setObjectName(QString::fromUtf8("email"));
        splitter->addWidget(email);
        fone = new QLabel(splitter);
        fone->setObjectName(QString::fromUtf8("fone"));
        splitter->addWidget(fone);
        splitter_2 = new QSplitter(janela_Cadastro);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(110, 50, 191, 161));
        splitter_2->setOrientation(Qt::Vertical);
        txt_cliente = new QLineEdit(splitter_2);
        txt_cliente->setObjectName(QString::fromUtf8("txt_cliente"));
        splitter_2->addWidget(txt_cliente);
        txt_raca = new QLineEdit(splitter_2);
        txt_raca->setObjectName(QString::fromUtf8("txt_raca"));
        splitter_2->addWidget(txt_raca);
        txt_idade = new QLineEdit(splitter_2);
        txt_idade->setObjectName(QString::fromUtf8("txt_idade"));
        splitter_2->addWidget(txt_idade);
        txt_responsavel = new QLineEdit(splitter_2);
        txt_responsavel->setObjectName(QString::fromUtf8("txt_responsavel"));
        splitter_2->addWidget(txt_responsavel);
        txt_email = new QLineEdit(splitter_2);
        txt_email->setObjectName(QString::fromUtf8("txt_email"));
        splitter_2->addWidget(txt_email);
        txt_telefone = new QLineEdit(splitter_2);
        txt_telefone->setObjectName(QString::fromUtf8("txt_telefone"));
        splitter_2->addWidget(txt_telefone);
        tableWidget = new QTableWidget(janela_Cadastro);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(240, 280, 451, 111));

        retranslateUi(janela_Cadastro);

        QMetaObject::connectSlotsByName(janela_Cadastro);
    } // setupUi

    void retranslateUi(QDialog *janela_Cadastro)
    {
        janela_Cadastro->setWindowTitle(QApplication::translate("janela_Cadastro", "Dialog", nullptr));
        label->setText(QApplication::translate("janela_Cadastro", "Cadastro TOSA & BANHO", nullptr));
        btn_inserir->setText(QApplication::translate("janela_Cadastro", "Mostrar", nullptr));
        btn_limpar->setText(QApplication::translate("janela_Cadastro", "Limpar", nullptr));
        cliente_2->setText(QApplication::translate("janela_Cadastro", "Cliente", nullptr));
        raca_2->setText(QApplication::translate("janela_Cadastro", "Ra\303\247a", nullptr));
        idade->setText(QApplication::translate("janela_Cadastro", "Idade", nullptr));
        responsavel->setText(QApplication::translate("janela_Cadastro", "Respons\303\241vel", nullptr));
        email->setText(QApplication::translate("janela_Cadastro", "E-mail", nullptr));
        fone->setText(QApplication::translate("janela_Cadastro", "Fone Cont.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class janela_Cadastro: public Ui_janela_Cadastro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELA_CADASTRO_H
