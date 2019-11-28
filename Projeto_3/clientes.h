#ifndef CLIENTES_H
#define CLIENTES_H

#include <QDialog>

class Clientes
{
private:
    QString nome;
    QString sexo;
    QString idade;
    QString raca;
    QString responsavel;
    QString fone;
    QString email;

public:
    Clientes();
    QString getNome() const;
    void setNome(const QString &value);
    QString getSexo() const;
    void setSexo(const QString &value);
    QString getIdade() const;
    void setIdade(const QString &value);
    QString getRaca() const;
    void setRaca(const QString &value);
    QString getResponsavel() const;
    void setResponsavel(const QString &value);
    QString getFone() const;
    void setFone(const QString &value);
    QString getEmail() const;
    void setEmail(const QString &value);

    QString definirStatus();
};

#endif // CLIENTES_H
