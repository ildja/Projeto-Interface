#ifndef RACAS_H
#define RACAS_H

#include <QDialog>

namespace Ui {
class Racas;
}

class Racas : public QDialog
{
    Q_OBJECT

public:
    explicit Racas(QWidget *parent = nullptr);
    ~Racas();

private slots:
    void on_btn_akita_clicked();

private:
    Ui::Racas *ui;
};

#endif // RACAS_H
