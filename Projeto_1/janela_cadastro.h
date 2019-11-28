#ifndef JANELA_CADASTRO_H
#define JANELA_CADASTRO_H

#include <QDialog>

namespace Ui {
class Janela_Cadastro;
}

class Janela_Cadastro : public QDialog
{
    Q_OBJECT

public:
    explicit Janela_Cadastro(QWidget *parent = nullptr);
    ~Janela_Cadastro();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Janela_Cadastro *ui;
};

#endif // JANELA_CADASTRO_H
