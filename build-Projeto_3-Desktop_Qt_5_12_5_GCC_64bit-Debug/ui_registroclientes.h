/********************************************************************************
** Form generated from reading UI file 'registroclientes.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTROCLIENTES_H
#define UI_REGISTROCLIENTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_RegistroClientes
{
public:

    void setupUi(QDialog *RegistroClientes)
    {
        if (RegistroClientes->objectName().isEmpty())
            RegistroClientes->setObjectName(QString::fromUtf8("RegistroClientes"));
        RegistroClientes->resize(400, 300);

        retranslateUi(RegistroClientes);

        QMetaObject::connectSlotsByName(RegistroClientes);
    } // setupUi

    void retranslateUi(QDialog *RegistroClientes)
    {
        RegistroClientes->setWindowTitle(QApplication::translate("RegistroClientes", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistroClientes: public Ui_RegistroClientes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTROCLIENTES_H
