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
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *btn_formulario_cadastro;
    QPushButton *pushButton_2;
    QTableWidget *tabela;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 20, 371, 201));
        btn_formulario_cadastro = new QPushButton(centralwidget);
        btn_formulario_cadastro->setObjectName(QString::fromUtf8("btn_formulario_cadastro"));
        btn_formulario_cadastro->setGeometry(QRect(150, 260, 80, 24));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(400, 260, 80, 24));
        tabela = new QTableWidget(centralwidget);
        if (tabela->columnCount() < 7)
            tabela->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabela->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabela->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabela->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tabela->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tabela->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tabela->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tabela->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (tabela->rowCount() < 8)
            tabela->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tabela->setVerticalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tabela->setVerticalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tabela->setVerticalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tabela->setVerticalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tabela->setVerticalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tabela->setVerticalHeaderItem(5, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tabela->setVerticalHeaderItem(6, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tabela->setVerticalHeaderItem(7, __qtablewidgetitem14);
        tabela->setObjectName(QString::fromUtf8("tabela"));
        tabela->setGeometry(QRect(10, 340, 701, 192));
        tabela->setLineWidth(3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        btn_formulario_cadastro->setText(QApplication::translate("MainWindow", "Cadastrar", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tabela->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Cliente", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tabela->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Sexo", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tabela->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tabela->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Idade", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tabela->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Ra\303\247a", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tabela->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Respons\303\241vel", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tabela->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "E-mail", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tabela->verticalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tabela->verticalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tabela->verticalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tabela->verticalHeaderItem(3);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tabela->verticalHeaderItem(4);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tabela->verticalHeaderItem(5);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tabela->verticalHeaderItem(6);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tabela->verticalHeaderItem(7);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "8", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
