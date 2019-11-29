#ifndef CLASSIFICADOR_H
#define CLASSIFICADOR_H

#include <QObject>
#include <QVector>
#include <algorithm>
#include <QFile>
#include <QFileDialog>
#include <QStringList>
#include <QMessageBox>
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
    bool NomeExiste(Caes c);
    bool salvarArquivo(QString arquivo);
    bool carregarArquivo(QString arquivo);
    void setNota1(int index, float value);
    void setNota2(int index, float value);
    void setNome(int index, QString value);
    void clear();
    int size();
    //void erase(int index);
    Caes find(int index);
    Caes operator[](int i);
    void eraseNome(QString txt);
    bool apagarNome(QString txt);
    void eraseMedia(QString txt);
    void eraseRaca(QString txt);
    void eraseIdade(QString txt);
    void eraseSexo(QString txt);
    void eraseResponsavel(QString txt);
    void eraseAdestrador(QString txt);

signals:

public slots:
};

#endif // CLASSIFICADOR_H
