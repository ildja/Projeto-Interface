#include "arquivo.h"



Arquivo::Arquivo()
{

}

bool Arquivo::salvarLista(QString &arquivo, Classificador a)
{
    QFile arq(arquivo);

        arq.open(QIODevice::WriteOnly);
        if(arq.isOpen() == 1){
            for(auto d : a.returnVector()){
                QString linha = d.getNome() + "," + d.getSexo() + "," + d.getRaca() + "," + d.getIdade() + "," + d.getResponsavel() + "," + d.getAdestrador() + "," + d.getAvaliador1() + "," + d.getAvaliador2() + "," + QString::number(d.getNota1()) + "," + QString::number(d.getNota2()) + "\n";
                arq.write(linha.toLocal8Bit());
            }
            arq.close();
            return 1;
        }else{
            return 0;
        }
}

bool Arquivo::carregarLista(QString &arquivo)
{
    QFile arq(arquivo);

       if(arq.open(QIODevice::ReadOnly)){
           return 1;
       }

       QString linha;

       QStringList line;

       while(!arq.atEnd()){
           Caes temp;
           Classificador b;
           linha = arq.readLine();
           line = linha.split(",");
           temp.setNome(line[0]);
           temp.setSexo(line[1]);
           temp.setRaca(line[2]);
           temp.setIdade(line[3]);
           temp.setResponsavel(line[4]);
           temp.setAdestrador(line[5]);
           temp.setAvaliador1(line[6]);
           temp.setAvaliador2(line[7]);
           temp.setNota1(line[8].toFloat());
           temp.setNota2(line[9].toFloat());
           b.btn_inserirDados(temp);
       }
       arq.close();
       return 0;
}
