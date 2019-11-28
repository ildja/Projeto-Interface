/********************************************************************************
** Form generated from reading UI file 'clientes.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTES_H
#define UI_CLIENTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Clientes
{
public:

    void setupUi(QDialog *Clientes)
    {
        if (Clientes->objectName().isEmpty())
            Clientes->setObjectName(QString::fromUtf8("Clientes"));
        Clientes->resize(400, 300);

        retranslateUi(Clientes);

        QMetaObject::connectSlotsByName(Clientes);
    } // setupUi

    void retranslateUi(QDialog *Clientes)
    {
        Clientes->setWindowTitle(QApplication::translate("Clientes", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Clientes: public Ui_Clientes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTES_H
