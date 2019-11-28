#include "clientes.h"
#include "ui_clientes.h"

QString Clientes::getNome() const
{
    return nome;
}

void Clientes::setNome(const QString &value)
{
    if(value.size()>2)
        nome = value;
}

QString Clientes::getSexo() const
{
    return sexo;
}

void Clientes::setSexo(const QString &value)
{
    sexo = value;
}

QString Clientes::getIdade() const
{
    return idade;
}

void Clientes::setIdade(const QString &value)
{
    idade = value;
}

QString Clientes::getRaca() const
{
    return raca;
}

void Clientes::setRaca(const QString &value)
{
    raca = value;
}

QString Clientes::getResponsavel() const
{
    return responsavel;
}

void Clientes::setResponsavel(const QString &value)
{
    if(value.size()>2)
        responsavel = value;
}

QString Clientes::getFone() const
{
    return fone;
}

void Clientes::setFone(const QString &value)
{
    fone = value;
}

QString Clientes::getEmail() const
{
    return email;
}

void Clientes::setEmail(const QString &value)
{
    email = value;
}

Clientes::Clientes()
{

}
