#ifndef CLASSIFICADOR_H
#define CLASSIFICADOR_H

#include <QObject>
#include <QVector>
#include "caes.h"

class Classificador
{

    protected:
    QVector <Caes> lista;

public:
    explicit Classificador();
    void btn_inserirDados (const Caes c);
    void ordenarListaMedia ();
    void ordenarListaNome ();
    void ordenarListaRaca();
    QVector <Caes> returnVector();
    QString primeirolugar();
    QString Racaprimeirolugar();
    QString segundolugar();
    QString Racasegundolugar();
    QString terceirolugar();
    QString Racaterceirolugar();
    QString racaDestaque();
    void setNota1(int index, float value);
    void setNota2(int index, float value);
    void setNome(int index, QString value);

    void clear();
    int size();
    void erase(int index);
    Caes find(int index);

    Caes operator[](int i);

signals:

public slots:
};

#endif // CLASSIFICADOR_H
