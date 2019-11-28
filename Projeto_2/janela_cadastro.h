#ifndef JANELA_CADASTRO_H
#define JANELA_CADASTRO_H

#include <QDialog>
#include <QDebug>
#include <QString>
#include <QPixmap>

namespace Ui {
class janela_Cadastro;
}

class janela_Cadastro : public QDialog
{
    Q_OBJECT

public:
    explicit janela_Cadastro(QWidget *parent = nullptr);
    ~janela_Cadastro();

private slots:
    void on_btn_mostrar_clicked();

    void on_btn_limpar_clicked();

private:
    Ui::janela_Cadastro *ui;
};

#endif // JANELA_CADASTRO_H
