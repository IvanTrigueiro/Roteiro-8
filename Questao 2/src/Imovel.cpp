#include "Imovel.h"

Imovel::Imovel()
{

}


void Imovel::setDescricao(string descricao){
    this-> descricao = descricao;
}
void Imovel::setAdress(Endereco adress){
    this-> adress = adress;
}
string Imovel::getDescricao(){return descricao;}
Endereco Imovel::getAdress(){return adress;}

