#ifndef JASOUCLIENTE_H
#define JASOUCLIENTE_H

#include <QDialog>

namespace Ui {
class JaSouCliente;
}

class JaSouCliente : public QDialog
{
    Q_OBJECT

public:
    explicit JaSouCliente(QWidget *parent = nullptr);
    ~JaSouCliente();

private:
    Ui::JaSouCliente *ui;
};

#endif // JASOUCLIENTE_H
