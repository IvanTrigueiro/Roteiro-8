#ifndef IMOVEL_H
#define IMOVEL_H
#include "Endereco.h"
#include <string>
using namespace std;

class Imovel : public Endereco
{
    public:
        Imovel();
        void setDescricao(string descricao);
        string getDescricao();
        void setAdress(Endereco adress);
        Endereco getAdress();
    protected:
    string descricao;
    Endereco adress;
};

#endif // IMOVEL_H
