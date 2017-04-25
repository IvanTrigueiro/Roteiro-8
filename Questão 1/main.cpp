#include <iostream>
#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"
using namespace std;

int main()
{
    Conta conta("Ivan", 5000, 241421, 10000);
    conta.definirLimite();
    cout << "Nome: " << conta.getCliente() << endl;
    cout << "Salario: " << conta.getMensal() << endl;
    cout << "N da conta: " << conta.getConta() << endl;
    cout << "Saldo da conta: " << conta.getSaldo() << endl;
    cout << "Limite da conta: " << conta.getLimite() << endl;

    conta.depositar(500);
    cout << "Saldo atual: " << conta.getSaldo() << endl;
    conta.sacar(1000);
    cout << "Saldo atual: " << conta.getSaldo() << endl;

    Conta *CE = new ContaEspecial();
    CE->definirLimite();
    CE->getLimite();
    cout << "Limite da conta: " << CE->getLimite() << endl;
    delete CE;

    return 0;
}
