/********************************************************************************
** Form generated from reading UI file 'jasoucliente.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JASOUCLIENTE_H
#define UI_JASOUCLIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_JaSouCliente
{
public:

    void setupUi(QDialog *JaSouCliente)
    {
        if (JaSouCliente->objectName().isEmpty())
            JaSouCliente->setObjectName(QString::fromUtf8("JaSouCliente"));
        JaSouCliente->resize(400, 300);

        retranslateUi(JaSouCliente);

        QMetaObject::connectSlotsByName(JaSouCliente);
    } // setupUi

    void retranslateUi(QDialog *JaSouCliente)
    {
        JaSouCliente->setWindowTitle(QApplication::translate("JaSouCliente", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JaSouCliente: public Ui_JaSouCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JASOUCLIENTE_H
