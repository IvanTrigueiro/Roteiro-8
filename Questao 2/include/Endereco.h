#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>
using namespace std;

class Endereco
{
    public:
        Endereco();
        Endereco(string logradouro, string bairro, string cidade, string cep, int numero);
        void setLogradouro(string logradouro);
        void setBairro(string bairro);
        void setCep(string cep);
        void setCidade(string cidade);
        void setNumero(int numero);
        string getLogradouro();
        string getBairro();
        string getCep();
        string getCidade();
        int getNumero();

    protected:
        string logradouro, bairro, cep, cidade;
        int numero;
};

#endif // ENDERECO_H
