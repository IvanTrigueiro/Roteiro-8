#include "Endereco.h"

Endereco::Endereco(){}

Endereco::Endereco(string logradouro, string bairro, string cidade, string cep, int numero)
{
    setLogradouro(logradouro);
    setBairro(bairro);
    setCep(cep);
    setCidade(cidade);
    setNumero(numero);
}

void Endereco::setLogradouro(string logradouro){
    this -> logradouro = logradouro;
}
void Endereco::setBairro(string bairro){
    this -> bairro = bairro;
}
void Endereco::setCep(string cep){
    this -> cep = cep;
}
void Endereco::setCidade(string cidade){
    this -> cidade = cidade;
}
void Endereco::setNumero(int numero){
    this -> numero = numero;
}

string Endereco::getLogradouro(){return logradouro;}
string Endereco::getBairro(){return bairro;}
string Endereco::getCep(){return cep;}
string Endereco::getCidade(){return cidade;}
int Endereco::getNumero(){return numero;}
