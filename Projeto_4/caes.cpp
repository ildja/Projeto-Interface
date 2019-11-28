#include "caes.h"


void Caes::setNome(const QString &value)
{
    nome = value;
}

QString Caes::getNome() const
{
    return nome;
}

void Caes::setSexo(const QString &value)
{
    sexo = value;
}

QString Caes::getSexo() const
{
    return sexo;
}

void Caes::setIdade(const QString &value)
{
    idade = value;
}

QString Caes::getIdade() const
{
    return idade;
}

void Caes::setRaca(const QString &value)
{
    raca = value;
}

QString Caes::getRaca() const
{
    return raca;
}

void Caes::setResponsavel(const QString &value)
{
    responsavel = value;
}

QString Caes::getResponsavel() const
{
    return responsavel;
}

void Caes::setAdestrador(const QString &value)
{
    adestrador = value;
}

QString Caes::getAdestrador() const
{
    return adestrador;
}

void Caes::setAvaliador1(const QString &value)
{
    avaliador1 = value;
}

QString Caes::getAvaliador1() const
{
    return avaliador1;
}

void Caes::setAvaliador2(const QString &value)
{
    avaliador2 = value;
}

QString Caes::getAvaliador2() const
{
    return avaliador2;
}

void Caes::setNota1(float value)
{
    nota1 = value;
}

float Caes::getNota1() const
{
    return nota1;
}

void Caes::setNota2(float value)
{
    nota2 = value;
}

float Caes::getNota2() const
{
    return nota2;
}

float Caes::CalcularMedia() const
{
    return ((getNota1()*5.0)+(getNota2()*5.0))/10.0;
}

Caes::Caes(QString name, QString sex, QString raca, QString idad, QString resp, QString adest, QString avali1, QString avali2, float nota1, float nota2)
{
    setNome(name);
    setSexo(sex);
    setRaca(raca);
    setIdade(idad);
    setResponsavel(resp);
    setAdestrador(adest);
    setAvaliador1(avali1);
    setAvaliador2(avali2);
    setNota1(nota1);
    setNota2(nota2);
}

Caes::Caes()
{

}

