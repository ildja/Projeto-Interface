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

Classificador::Classificador()
{

}

void Classificador::btn_inserirDados(const Caes c)
{
    lista.push_back(c);
}

void Classificador::ordenarListaNome() {
    std::stable_sort(lista.begin(), lista.end(), cimp);
}

void Classificador::ordenarListaRaca() {
    std::stable_sort(lista.begin(), lista.end(), camp);
}

QVector<Caes> Classificador::returnVector()
{
    return lista;
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

QString Classificador::racaDestaque()
{
    int raca[60] = {};


    for(int i = 0; i < lista.size(); i++){
        if(lista[i].getRaca() == "Akita")
            raca[1]++;
        else if(lista[i].getRaca() == "American staffordshire terrier")
            raca[2]++;
        else if(lista[i].getRaca() == "Basset hound")
            raca[3]++;
        else if(lista[i].getRaca() == "Beagle")
            raca[4]++;
        else if(lista[i].getRaca() == "Bichon frisé")
            raca[5]++;
        else if(lista[i].getRaca() == "Boiadeiro australiano")
            raca[6]++;
        else if(lista[i].getRaca() == "Border collie")
            raca[7]++;
        else if(lista[i].getRaca() == "Boston terrier")
            raca[8]++;
        else if(lista[i].getRaca() == "Boxer")
            raca[9]++;
        else if(lista[i].getRaca() == "Buldogue francês")
            raca[10]++;
        else if(lista[i].getRaca() == "Buldogue inglês")
            raca[11]++;
        else if(lista[i].getRaca() == "Bull terrier")
            raca[12]++;
        else if(lista[i].getRaca() == "Cane corso")
            raca[13]++;
        else if(lista[i].getRaca() == "Cavalier king charles spaniel")
            raca[14]++;
        else if(lista[i].getRaca() == "Chihuahua")
            raca[15]++;
        else if(lista[i].getRaca() == "Chow chow")
            raca[16]++;
        else if(lista[i].getRaca() == "Cocker spaniel inglês")
            raca[17]++;
        else if(lista[i].getRaca() == "Dachshund")
            raca[18]++;
        else if(lista[i].getRaca() == "Dálmata")
            raca[19]++;
        else if(lista[i].getRaca() == "Doberman")
            raca[20]++;
        else if(lista[i].getRaca() == "Dogo argentino")
            raca[21]++;
        else if(lista[i].getRaca() == "Dogue alemão")
            raca[22]++;
        else if(lista[i].getRaca() == "Fila brasileiro")
            raca[23]++;
        else if(lista[i].getRaca() == "Golden retriever")
            raca[24]++;
        else if(lista[i].getRaca() == "Husky siberiano")
            raca[25]++;
        else if(lista[i].getRaca() == "Jack russell terrier")
            raca[26]++;
        else if(lista[i].getRaca() == "Labrador retriever")
            raca[27]++;
        else if(lista[i].getRaca() == "Lhasa apso")
            raca[28]++;
        else if(lista[i].getRaca() == "Lulu da Pomerânia")
            raca[29]++;
        else if(lista[i].getRaca() == "Maltês")
            raca[30]++;
        else if(lista[i].getRaca() == "Mastiff inglês")
            raca[31]++;
        else if(lista[i].getRaca() == "Mastim tibetano")
            raca[32]++;
        else if(lista[i].getRaca() == "Pastor alemão")
            raca[33]++;
        else if(lista[i].getRaca() == "Pastor australiano")
            raca[34]++;
        else if(lista[i].getRaca() == "Pastor de Shetland")
            raca[35]++;
        else if(lista[i].getRaca() == "Pastor Maremano Abruzes")
            raca[36]++;
        else if(lista[i].getRaca() == "Pequinês")
            raca[37]++;
        else if(lista[i].getRaca() == "Pinscher miniatura")
            raca[38]++;
        else if(lista[i].getRaca() == "Pit bull")
            raca[39]++;
        else if(lista[i].getRaca() == "Poodle")
            raca[40]++;
        else if(lista[i].getRaca() == "Pug")
            raca[41]++;
        else if(lista[i].getRaca() == "Rottweiler")
            raca[42]++;
        else if(lista[i].getRaca() == "Samoieda")
            raca[43]++;
        else if(lista[i].getRaca() == "Schnauzer")
            raca[44]++;
        else if(lista[i].getRaca() == "Shar-pei")
            raca[45]++;
        else if(lista[i].getRaca() == "Shiba")
            raca[46]++;
        else if(lista[i].getRaca() == "Shih tzu")
            raca[47]++;
        else if(lista[i].getRaca() == "Staffordshire bull terrier")
            raca[48]++;
        else if(lista[i].getRaca() == "Terra nova")
            raca[49]++;
        else if(lista[i].getRaca() == "Vira-lata")
            raca[50]++;
        else if(lista[i].getRaca() == "Weimaraner")
            raca[51]++;
        else if(lista[i].getRaca() == "Whippet")
            raca[52]++;
        else if(lista[i].getRaca() == "Yorkshire terrier")
            raca[53]++;

        else
            raca[54]++;
    }

    int maxi = INT_MIN, imaxi = 0;

    for(int i = 1; i <= 53; i++){
        if(raca[i] > maxi and raca[i] != 0){
            maxi = raca[i];
            imaxi = i;
        }
    }

    switch (imaxi) {
    case 1:
        return "Akita";
    case 2:
        return "American staffordshire terrier";
    case 3:
        return "Basset hound";
    case 4:
        return "Beagle";
    case 5:
        return "Bichon frisé";
    case 6:
        return "Boiadeiro australiano";
    case 7:
        return "Border collie";
    case 8:
        return "Boston terrier";
    case 9:
        return "Boxer";
    case 10:
        return "Buldogue francês";
    case 11:
        return "Buldogue inglês";
    case 12:
        return "Bull terrier";
    case 13:
        return "Cane corso";
    case 14:
        return "Cavalier king charles spaniel";
    case 15:
        return "Chihuahua";
    case 16:
        return "Chow chow";
    case 17:
        return "Cocker spaniel inglês";
    case 18:
        return "Dachshund";
    case 19:
        return "Dálmata";
    case 20:
        return "Doberman";
    case 21:
        return "Dogo argentino";
    case 22:
        return "Dogue alemão";
    case 23:
        return "Fila brasileiro";
    case 24:
        return "Golden retriever";
    case 25:
        return "Husky siberiano";
    case 26:
        return "Jack russell terrier";
    case 27:
        return "Labrador retriever";
    case 28:
        return "Lhasa apso";
    case 29:
        return "Lulu da Pomerânia";
    case 30:
        return "Maltês";
    case 31:
        return "Mastiff inglês";
    case 32:
        return "Mastim tibetano";
    case 33:
        return "Pastor alemão";
    case 34:
        return "Pastor australiano";
    case 35:
        return "Pastor de Shetland";
    case 36:
        return "Pastor Maremano Abruzes";
    case 37:
        return "Pequinês";
    case 38:
        return "Pinscher miniatura";
    case 39:
        return "Pit bull";
    case 40:
        return "Poodle";
    case 41:
        return "Pug";
    case 42:
        return "Rottweiler";
    case 43:
        return "Samoieda";
    case 44:
        return "Schnauzer";
    case 45:
        return "Shar-pei";
    case 46:
        return "Shiba";
    case 47:
        return "Shih tzu";
    case 48:
        return "Staffordshire bull terrier";
    case 49:
        return "Terra nova";
    case 50:
        return "Vira-lata";
    case 51:
        return "Weimaraner";
    case 52:
        return "Whippet";
    case 53:
        return "Yorkshire terrier";

    case 0:
        return "-";
    }
}

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

void Classificador::erase(int index)
{
    lista.erase(lista.begin()+index);
}

Caes Classificador::find(int index)
{
    return lista[index];
}

Caes Classificador::operator[](int i)
{
    return lista[i];
}
