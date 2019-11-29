#include "classificador.h"
#include <algorithm>

bool comp(Caes a, Caes b)
{
    return a.CalcularMedia() > b.CalcularMedia();
}

bool cimp(Caes a, Caes b)
{
    return a.getNome() < b.getNome();
}

bool camp(Caes a, Caes b)
{
    return a.getRaca() < b.getRaca();
}

void Classificador::btn_inserirDados(const Caes c)
{
    lista.push_back(c);
}

bool Classificador::NomeExiste(Caes c)
{
    if(lista.size() >= 1){
        for(int i = 0; i < lista.size(); i++){
            if(c.getNome() == lista[i].getNome()){
                return 1;
            }
        }
    }
    return 0;
}

Classificador::Classificador()
{

}

QVector<Caes> Classificador::returnVector()
{
    return lista;
}

void Classificador::ordenarListaNome() {
    std::stable_sort(lista.begin(), lista.end(), cimp);
}

void Classificador::ordenarListaRaca() {
    std::stable_sort(lista.begin(), lista.end(), camp);
}

void Classificador::ordenarListaMedia(){
    std::stable_sort(lista.begin(), lista.end(), comp);
}

QString Classificador::primeirolugar()
{
    ordenarListaMedia();
    return lista[0].getNome();
}

QString Classificador::Racaprimeirolugar()
{
    ordenarListaMedia();
    return lista[0].getRaca();
}

QString Classificador::segundolugar()
{
    ordenarListaMedia();
    return lista[1].getNome();
}

QString Classificador::Racasegundolugar()
{
    ordenarListaMedia();
    return lista[1].getRaca();
}

QString Classificador::terceirolugar()
{
    ordenarListaMedia();
    return lista[2].getNome();
}

QString Classificador::Racaterceirolugar()
{
    ordenarListaMedia();
    return lista[2].getRaca();
}

//nicolas
bool Classificador::salvarArquivo(QString file)
{
    QFile arquivo(file);
    arquivo.open(QIODevice::WriteOnly);
    if(arquivo.isOpen() == 1){
        for(auto a:lista){
            QString linha = a.getNome() + "," + QString::number(a.CalcularMedia()) + "," + a.getRaca() + "," + a.getIdade() + "," + a.getSexo() +","+ a.getResponsavel() + "," + a.getAdestrador() +"\n";
            arquivo.write(linha.toLocal8Bit());
        }
        arquivo.close();
        return 1;
    }else{
        return 0;
    }

}
//nicolas
bool Classificador::carregarArquivo(QString file)
{

    QFile arquivo(file);
    if(arquivo.isOpen() == 1)return 1;
    else{
        arquivo.open(QIODevice::ReadOnly);
        QString linha;
        QStringList dados;
        while(!arquivo.atEnd()){
            Caes temp;
            linha = arquivo.readLine();
            dados = linha.split(",");
            temp.setNome(dados[0]);
           // temp.CalcularMedia(dados[1].toFloat());
            temp.setRaca(dados[2]);
            temp.setIdade(dados[3]);
            temp.setSexo(dados[4]);
            temp.setResponsavel(dados[5]);
            temp.setAdestrador(dados[6]);
            if(NomeExiste(temp) == 0)
                btn_inserirDados(temp);
        }
        arquivo.close();
        return 0;
    }

}
//nicolas
bool Classificador::apagarNome(QString txt)
{
    for(int i = 0; i<lista.size(); i++){
        if(lista[i].getNome() == txt){
            lista.erase(lista.begin()+i);
        }
    }return 1;
}

void Classificador::eraseNome(QString txt)
{
    for(int i = 0; i < lista.size(); i++){
        if(lista[i].getNome() != txt){
            lista.erase(lista.begin()+i);
        }
    }
}

void Classificador::eraseMedia(QString txt)
{
    for(int i = 0; i < lista.size(); i++){
        if(lista[i].CalcularMedia() != txt.toDouble()){
            lista.erase(lista.begin()+i);
        }
    }
}

void Classificador::eraseRaca(QString txt)
{
    for(int i = 0; i < lista.size(); i++){
        if(lista[i].getRaca() != txt){
            lista.erase(lista.begin()+i);
        }
    }
}

void Classificador::eraseIdade(QString txt)
{
    for(int i = 0; i < lista.size(); i++){
        if(lista[i].getIdade() != txt){
            lista.erase(lista.begin()+i);
        }
    }
}

void Classificador::eraseSexo(QString txt)
{
    for(int i = 0; i < lista.size(); i++){
        if(lista[i].getSexo() != txt){
            lista.erase(lista.begin()+i);
        }
    }
}

void Classificador::eraseResponsavel(QString txt)
{
    for(int i = 0; i < lista.size(); i++){
        if(lista[i].getResponsavel() != txt){
            lista.erase(lista.begin()+i);
        }
    }
}

void Classificador::eraseAdestrador(QString txt)
{
    for(int i = 0; i < lista.size(); i++){
        if(lista[i].getAdestrador() != txt){
            lista.erase(lista.begin()+i);
        }
    }
}
//ate aqui nicolas
void Classificador::setNota1(int index, float value)
{
    lista[index].setNota1(value);
}

void Classificador::setNota2(int index, float value)
{
    lista[index].setNota2(value);
}

void Classificador::setNome(int index, QString value)
{
    lista[index].setNome(value);
}

void Classificador::clear()
{
    lista.clear();
}

int Classificador::size()
{
    return lista.size();
}

/*void Classificador::erase(int index)
{
    lista.erase(lista.begin()+index);
}*/

Caes Classificador::find(int index)
{
    return lista[index];
}

Caes Classificador::operator[](int i)
{
    return lista[i];
}

