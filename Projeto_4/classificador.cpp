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
            if(c.getNome() == lista[i].getNome() && c.getResponsavel() == lista[i].getResponsavel()){
                return 1;
            }
        }
    }else{return 0;
    }
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

