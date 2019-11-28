/********************************************************************************
** Form generated from reading UI file 'cadastro.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRO_H
#define UI_CADASTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cadastro
{
public:
    QLabel *formulario_cadastro;
    QPushButton *btn_cadastrar;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *nome;
    QLineEdit *txt_nome;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *sexo;
    QComboBox *current_sexo;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *comboBox;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *raca;
    QComboBox *comboBox_2;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *responsavel;
    QLineEdit *txt_responsavel;
    QWidget *widget5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *contato;
    QLineEdit *txt_contato;
    QWidget *widget6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QLineEdit *txt_email;

    void setupUi(QDialog *Cadastro)
    {
        if (Cadastro->objectName().isEmpty())
            Cadastro->setObjectName(QString::fromUtf8("Cadastro"));
        Cadastro->resize(400, 300);
        formulario_cadastro = new QLabel(Cadastro);
        formulario_cadastro->setObjectName(QString::fromUtf8("formulario_cadastro"));
        formulario_cadastro->setGeometry(QRect(100, 10, 221, 20));
        btn_cadastrar = new QPushButton(Cadastro);
        btn_cadastrar->setObjectName(QString::fromUtf8("btn_cadastrar"));
        btn_cadastrar->setGeometry(QRect(80, 270, 80, 24));
        pushButton_2 = new QPushButton(Cadastro);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 270, 80, 24));
        pushButton_3 = new QPushButton(Cadastro);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 270, 80, 24));
        widget = new QWidget(Cadastro);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 50, 341, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        nome = new QLabel(widget);
        nome->setObjectName(QString::fromUtf8("nome"));

        horizontalLayout->addWidget(nome);

        txt_nome = new QLineEdit(widget);
        txt_nome->setObjectName(QString::fromUtf8("txt_nome"));

        horizontalLayout->addWidget(txt_nome);

        widget1 = new QWidget(Cadastro);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(30, 80, 341, 26));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        sexo = new QLabel(widget1);
        sexo->setObjectName(QString::fromUtf8("sexo"));

        horizontalLayout_2->addWidget(sexo);

        current_sexo = new QComboBox(widget1);
        current_sexo->addItem(QString());
        current_sexo->addItem(QString());
        current_sexo->addItem(QString());
        current_sexo->setObjectName(QString::fromUtf8("current_sexo"));

        horizontalLayout_2->addWidget(current_sexo);

        widget2 = new QWidget(Cadastro);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(30, 110, 341, 26));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        comboBox = new QComboBox(widget2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_3->addWidget(comboBox);

        widget3 = new QWidget(Cadastro);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(30, 140, 341, 26));
        horizontalLayout_4 = new QHBoxLayout(widget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        raca = new QLabel(widget3);
        raca->setObjectName(QString::fromUtf8("raca"));

        horizontalLayout_4->addWidget(raca);

        comboBox_2 = new QComboBox(widget3);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_4->addWidget(comboBox_2);

        widget4 = new QWidget(Cadastro);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        widget4->setGeometry(QRect(30, 170, 341, 26));
        horizontalLayout_5 = new QHBoxLayout(widget4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        responsavel = new QLabel(widget4);
        responsavel->setObjectName(QString::fromUtf8("responsavel"));

        horizontalLayout_5->addWidget(responsavel);

        txt_responsavel = new QLineEdit(widget4);
        txt_responsavel->setObjectName(QString::fromUtf8("txt_responsavel"));

        horizontalLayout_5->addWidget(txt_responsavel);

        widget5 = new QWidget(Cadastro);
        widget5->setObjectName(QString::fromUtf8("widget5"));
        widget5->setGeometry(QRect(30, 200, 341, 26));
        horizontalLayout_6 = new QHBoxLayout(widget5);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        contato = new QLabel(widget5);
        contato->setObjectName(QString::fromUtf8("contato"));

        horizontalLayout_6->addWidget(contato);

        txt_contato = new QLineEdit(widget5);
        txt_contato->setObjectName(QString::fromUtf8("txt_contato"));

        horizontalLayout_6->addWidget(txt_contato);

        widget6 = new QWidget(Cadastro);
        widget6->setObjectName(QString::fromUtf8("widget6"));
        widget6->setGeometry(QRect(30, 230, 341, 26));
        horizontalLayout_7 = new QHBoxLayout(widget6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget6);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_7->addWidget(label_2);

        txt_email = new QLineEdit(widget6);
        txt_email->setObjectName(QString::fromUtf8("txt_email"));

        horizontalLayout_7->addWidget(txt_email);


        retranslateUi(Cadastro);

        QMetaObject::connectSlotsByName(Cadastro);
    } // setupUi

    void retranslateUi(QDialog *Cadastro)
    {
        Cadastro->setWindowTitle(QApplication::translate("Cadastro", "Dialog", nullptr));
        formulario_cadastro->setText(QApplication::translate("Cadastro", "Cadastro Adestramento de C\303\243es", nullptr));
        btn_cadastrar->setText(QApplication::translate("Cadastro", "Cadastrar", nullptr));
        pushButton_2->setText(QApplication::translate("Cadastro", "Apagar", nullptr));
        pushButton_3->setText(QApplication::translate("Cadastro", "Selecionar", nullptr));
        nome->setText(QApplication::translate("Cadastro", "Nome Dog", nullptr));
        txt_nome->setText(QString());
        sexo->setText(QApplication::translate("Cadastro", "Sexo Dog", nullptr));
        current_sexo->setItemText(0, QApplication::translate("Cadastro", "-", nullptr));
        current_sexo->setItemText(1, QApplication::translate("Cadastro", "Feminino", nullptr));
        current_sexo->setItemText(2, QApplication::translate("Cadastro", "Masculino", nullptr));

        label->setText(QApplication::translate("Cadastro", "Idade Dog", nullptr));
        comboBox->setItemText(0, QApplication::translate("Cadastro", "-", nullptr));
        comboBox->setItemText(1, QApplication::translate("Cadastro", "2 meses", nullptr));
        comboBox->setItemText(2, QApplication::translate("Cadastro", "3 meses", nullptr));
        comboBox->setItemText(3, QApplication::translate("Cadastro", "4 meses", nullptr));
        comboBox->setItemText(4, QApplication::translate("Cadastro", "5 meses", nullptr));
        comboBox->setItemText(5, QApplication::translate("Cadastro", "6 meses", nullptr));
        comboBox->setItemText(6, QApplication::translate("Cadastro", "7 meses", nullptr));
        comboBox->setItemText(7, QApplication::translate("Cadastro", "8 meses", nullptr));
        comboBox->setItemText(8, QApplication::translate("Cadastro", "9 meses", nullptr));
        comboBox->setItemText(9, QApplication::translate("Cadastro", "10 meses", nullptr));
        comboBox->setItemText(10, QApplication::translate("Cadastro", "11 meses", nullptr));
        comboBox->setItemText(11, QApplication::translate("Cadastro", "1 ano", nullptr));
        comboBox->setItemText(12, QApplication::translate("Cadastro", "2 anos", nullptr));
        comboBox->setItemText(13, QApplication::translate("Cadastro", "3 anos", nullptr));
        comboBox->setItemText(14, QApplication::translate("Cadastro", "4 anos", nullptr));
        comboBox->setItemText(15, QApplication::translate("Cadastro", "5 anos", nullptr));
        comboBox->setItemText(16, QApplication::translate("Cadastro", "6 anos", nullptr));
        comboBox->setItemText(17, QApplication::translate("Cadastro", "7 anos", nullptr));
        comboBox->setItemText(18, QApplication::translate("Cadastro", "8 anos", nullptr));
        comboBox->setItemText(19, QApplication::translate("Cadastro", "9 anos", nullptr));
        comboBox->setItemText(20, QApplication::translate("Cadastro", "10 anos", nullptr));
        comboBox->setItemText(21, QApplication::translate("Cadastro", "11 anos", nullptr));
        comboBox->setItemText(22, QApplication::translate("Cadastro", "12 anos", nullptr));
        comboBox->setItemText(23, QApplication::translate("Cadastro", "13 anos", nullptr));
        comboBox->setItemText(24, QApplication::translate("Cadastro", "acima de 13 anos", nullptr));

        raca->setText(QApplication::translate("Cadastro", "Ra\303\247a", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("Cadastro", "-", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("Cadastro", "Akita", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("Cadastro", "American staffordshire terrier", nullptr));
        comboBox_2->setItemText(3, QApplication::translate("Cadastro", "Basset hound", nullptr));
        comboBox_2->setItemText(4, QApplication::translate("Cadastro", "Beagle", nullptr));
        comboBox_2->setItemText(5, QApplication::translate("Cadastro", "Bichon fris\303\251", nullptr));
        comboBox_2->setItemText(6, QApplication::translate("Cadastro", "Boiadeiro australiano", nullptr));
        comboBox_2->setItemText(7, QApplication::translate("Cadastro", "Border collie", nullptr));
        comboBox_2->setItemText(8, QApplication::translate("Cadastro", "Boston terrier", nullptr));
        comboBox_2->setItemText(9, QApplication::translate("Cadastro", "Boxer", nullptr));
        comboBox_2->setItemText(10, QApplication::translate("Cadastro", "Buldogue franc\303\252s", nullptr));
        comboBox_2->setItemText(11, QApplication::translate("Cadastro", "Buldogue ingl\303\252s", nullptr));
        comboBox_2->setItemText(12, QApplication::translate("Cadastro", "Bull terrier", nullptr));
        comboBox_2->setItemText(13, QApplication::translate("Cadastro", "Cane corso", nullptr));
        comboBox_2->setItemText(14, QApplication::translate("Cadastro", "Cavalier king charles spaniel", nullptr));
        comboBox_2->setItemText(15, QApplication::translate("Cadastro", "\n"
"Chihuahua", nullptr));
        comboBox_2->setItemText(16, QApplication::translate("Cadastro", "Chow chow", nullptr));
        comboBox_2->setItemText(17, QApplication::translate("Cadastro", "Cocker spaniel ingl\303\252s", nullptr));
        comboBox_2->setItemText(18, QApplication::translate("Cadastro", "Dachshund", nullptr));
        comboBox_2->setItemText(19, QApplication::translate("Cadastro", "D\303\241lmata", nullptr));
        comboBox_2->setItemText(20, QApplication::translate("Cadastro", "Doberman", nullptr));
        comboBox_2->setItemText(21, QApplication::translate("Cadastro", "Dogo argentino", nullptr));
        comboBox_2->setItemText(22, QApplication::translate("Cadastro", "Dogue alem\303\243o", nullptr));
        comboBox_2->setItemText(23, QApplication::translate("Cadastro", "Fila brasileiro", nullptr));
        comboBox_2->setItemText(24, QApplication::translate("Cadastro", "Golden retriever", nullptr));
        comboBox_2->setItemText(25, QApplication::translate("Cadastro", "Husky siberiano", nullptr));
        comboBox_2->setItemText(26, QApplication::translate("Cadastro", "Jack russell terrier", nullptr));
        comboBox_2->setItemText(27, QApplication::translate("Cadastro", "Labrador retriever", nullptr));
        comboBox_2->setItemText(28, QApplication::translate("Cadastro", "Lhasa apso", nullptr));
        comboBox_2->setItemText(29, QApplication::translate("Cadastro", "Lulu da Pomer\303\242nia", nullptr));
        comboBox_2->setItemText(30, QApplication::translate("Cadastro", "Malt\303\252s", nullptr));
        comboBox_2->setItemText(31, QApplication::translate("Cadastro", "Mastiff ingl\303\252s", nullptr));
        comboBox_2->setItemText(32, QApplication::translate("Cadastro", "Mastim tibetano", nullptr));
        comboBox_2->setItemText(33, QApplication::translate("Cadastro", "Pastor alem\303\243o", nullptr));
        comboBox_2->setItemText(34, QApplication::translate("Cadastro", "Pastor australiano", nullptr));
        comboBox_2->setItemText(35, QApplication::translate("Cadastro", "Pastor de Shetland", nullptr));
        comboBox_2->setItemText(36, QApplication::translate("Cadastro", "Pastor Maremano Abruzes", nullptr));
        comboBox_2->setItemText(37, QApplication::translate("Cadastro", "Pequin\303\252s", nullptr));
        comboBox_2->setItemText(38, QApplication::translate("Cadastro", "Pinscher miniatura", nullptr));
        comboBox_2->setItemText(39, QApplication::translate("Cadastro", "Pit bull", nullptr));
        comboBox_2->setItemText(40, QApplication::translate("Cadastro", "Poodle", nullptr));
        comboBox_2->setItemText(41, QApplication::translate("Cadastro", "Pug", nullptr));
        comboBox_2->setItemText(42, QApplication::translate("Cadastro", "Rottweiler", nullptr));
        comboBox_2->setItemText(43, QApplication::translate("Cadastro", "Samoieda", nullptr));
        comboBox_2->setItemText(44, QApplication::translate("Cadastro", "Schnauzer", nullptr));
        comboBox_2->setItemText(45, QApplication::translate("Cadastro", "Shar-pei", nullptr));
        comboBox_2->setItemText(46, QApplication::translate("Cadastro", "Shiba", nullptr));
        comboBox_2->setItemText(47, QApplication::translate("Cadastro", "Shih tzu", nullptr));
        comboBox_2->setItemText(48, QApplication::translate("Cadastro", "Staffordshire bull terrier", nullptr));
        comboBox_2->setItemText(49, QApplication::translate("Cadastro", "Terra nova", nullptr));
        comboBox_2->setItemText(50, QApplication::translate("Cadastro", "Vira-lata", nullptr));
        comboBox_2->setItemText(51, QApplication::translate("Cadastro", "Weimaraner", nullptr));
        comboBox_2->setItemText(52, QApplication::translate("Cadastro", "Whippet", nullptr));
        comboBox_2->setItemText(53, QApplication::translate("Cadastro", "Yorkshire terrier", nullptr));

        responsavel->setText(QApplication::translate("Cadastro", "Respons\303\241vel", nullptr));
        contato->setText(QApplication::translate("Cadastro", "Fone", nullptr));
        label_2->setText(QApplication::translate("Cadastro", "E-mail", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cadastro: public Ui_Cadastro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRO_H
