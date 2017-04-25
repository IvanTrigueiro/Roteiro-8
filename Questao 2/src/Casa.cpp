#include "Casa.h"

Casa::Casa(int numeroDePavimentos, int quantidadeDeQuartos, double areaDoTerreno, double areaConstruida)
{
    setNumeroDePavimentos(numeroDePavimentos);
    setQuantidadeDeQuartos(quantidadeDeQuartos);
    setAreaDoTerreno(areaDoTerreno);
    setAreaConstruida(areaConstruida);
}

void Casa::setNumeroDePavimentos(int numeroDePavimentos){
    this-> numeroDePavimentos = numeroDePavimentos;
}
void Casa::setQuantidadeDeQuartos(int quantidadeDeQuartos){
    this-> quantidadeDeQuartos = quantidadeDeQuartos;
}
void Casa::setAreaDoTerreno(double areaDoTerreno){
    this-> areaDoTerreno = areaDoTerreno;
}
void Casa::setAreaConstruida(double areaConstruida){
    this-> areaConstruida = areaConstruida;
}

int Casa::getNumeroDePavimentos(){return numeroDePavimentos;}
int Casa::getQuantidadeDeQuartos(){return quantidadeDeQuartos;}
double Casa::getAreaDoTerreno(){return areaDoTerreno;}
double Casa::getAreaConstruida(){return areaConstruida;}
