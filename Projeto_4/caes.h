#ifndef CAES_H
#define CAES_H
#include <QObject>

class Caes
{
private:
    QString nome;
    QString sexo;
    QString raca;
    QString idade;
    QString responsavel;
    QString adestrador;
    QString avaliador1;
    QString avaliador2;
    float nota1;
    float nota2;
    float media;

public:
    Caes();
    Caes(QString name, QString sex, QString raca, QString idad, QString resp, QString adest, QString avali1, QString avali2, float nota1, float nota2 /*, bool a*/);

    QString getNome()const;
    void setNome(const QString &value);

    QString getSexo()const;
    void setSexo(const QString &value);

    QString getRaca()const;
    void setRaca(const QString &value);

    QString getIdade()const;
    void setIdade(const QString &value);

    QString getResponsavel()const;
    void setResponsavel(const QString &value);

    QString getAdestrador()const;
    void setAdestrador(const QString &value);

    QString getAvaliador1()const;
    void setAvaliador1(const QString &value);

    QString getAvaliador2()const;
    void setAvaliador2(const QString &value);

    float getNota1()const;
    void setNota1(float value);

    float getNota2()const;
    void setNota2(float value);

    float CalcularMedia()const;
   float setMedia() const;


signals:

public slots:
};

#endif // CAES_H
