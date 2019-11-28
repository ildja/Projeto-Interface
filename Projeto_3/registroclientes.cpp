#include "registroclientes.h"
#include "ui_registroclientes.h"

RegistroClientes::RegistroClientes()
{

}

void RegistroClientes::inserirCliente(Clientes a)
{
    registroclientes.push_back(a);
}

void RegistroClientes::ordenarPorNome()
{
    std::sort(registroclientes.begin(),registroclientes.end(),[](Clientes a, Clientes b){
        return a.getNome()<b.getNome();
    });
}

void RegistroClientes::ordenarPorIdade()
{
    std::sort(registroclientes.begin(),registroclientes.end(),[](Clientes a, Clientes b){
        return a.getIdade()<b.getIdade();
    });
}
void RegistroClientes::ordenarPorResponsavel()
{
    std::sort(registroclientes.begin(),registroclientes.end(),[](Clientes a, Clientes b){
        return a.getResponsavel()<b.getResponsavel();
    });
}
int RegistroClientes::size()
{
    return registroclientes.size();
}

Clientes RegistroClientes::operator[](int indice)
{
    return registroclientes[indice];
}

/*bool compararPorMedia(Aluno a, Aluno b)
{
    return a.getMedia()<b.getMedia();
}*/
