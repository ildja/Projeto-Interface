#ifndef REGISTROCLIENTES_H
#define REGISTROCLIENTES_H

#include <QDialog>
#include <QVector>
#include <algorithm>
#include "clientes.h"

class RegistroClientes
{

private:
    QVector<Clientes> registroclientes;

public:
    RegistroClientes();
    void inserirCliente(Clientes a);
    void ordenarPorNome();
    void ordenarPorIdade();
    void ordenarPorResponsavel();
    int size();
    Clientes operator[](int indice);
};

bool compararPorMedia(Clientes a, Clientes b);

#endif // REGISTROCLIENTES_H
