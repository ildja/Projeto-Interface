#include "arquivo.h"



Arquivo::Arquivo()
{

}

bool Arquivo::salvarLista(QString &arquivo, Classificador a)
{
    QFile arq(arquivo + ".csv");

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



/*bool Arquivo::carregarLista(QString &arquivo, Classificador &b)
{
    QFile arq(arquivo + ".csv");

       if(arq.open(QIODevice::ReadOnly)){
           return 1;
       }

       QString linha;

       QStringList line;

       while(!arq.atEnd()){
           Caes temp;
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

bool Arquivo::carregarLista(QString &arquivo, Classificador &b)
{
    QFile arq(arquivo);

       if(!arq.open(QIODevice::ReadOnly)){
           return 1;
       }else{

       QTextStream opa(&arq);

       QString line;

       while(!opa.atEnd()){
           line = opa.readLine();

           QStringList separados = line.split(",");

           while(!opa.atEnd()){
                      line = opa.readLine();

                      QStringList separados = line.split(",");

                      while (separados.size() < 11){
                          Caes c(separados[0],separados[1],separados[2],separados[3],separados[4],separados[5],separados[6],separados[7],separados[8].toFloat(),separados[9].toFloat());
                          b.btn_inserirDados(c);
                      }

                  }
                  arq.close();
                  return 0;
           }
}*/

bool Arquivo::carregarLista(QString &arquivo, Classificador &b)
{

    QFile arq(arquivo);
//    if(arq.open(QIODevice::ReadOnly) == 1){
//            return 1;
//    }else{
        arq.open(QIODevice::ReadOnly);
        QString linha;
        QStringList dados;
        while(!arq.atEnd()){
            Caes temp;
            linha = arq.readLine();
            dados = linha.split(",");
            temp.setNome(dados[0]);
            //temp.CalcularMedia(dados[1].toFloat());
            temp.setRaca(dados[2]);
            temp.setIdade(dados[3]);
            temp.setSexo(dados[4]);
            temp.setResponsavel(dados[5]);
            temp.setAdestrador(dados[6]);
            temp.setNota1(dados[8].toFloat());
            temp.setNota2(dados[9].toFloat());
            if(b.NomeExiste(temp) == 0)
            b.btn_inserirDados(temp);
        }
        arq.close();
        return 0;
  //  }

}

/*bool Arquivo::carregarLista(QString file)
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
            //temp.CalcularMedia(dados[1].toFloat());
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

}*/
