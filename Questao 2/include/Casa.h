#ifndef CASA_H
#define CASA_H
#include "Imovel.h"


class Casa : public Imovel
{
    public:
        Casa(int numeroDePavimentos, int quantidadeDeQuartos, double areaDoTerreno, double areaConstruida);

        void setNumeroDePavimentos(int numeroDePavimentos);
        void setQuantidadeDeQuartos(int quantidadeDeQuartos);
        void setAreaDoTerreno(double areaDoTerreno);
        void setAreaConstruida(double areaConstruida);

        int getNumeroDePavimentos();
        int getQuantidadeDeQuartos();
        double getAreaDoTerreno();
        double getAreaConstruida();

    protected:
        int numeroDePavimentos, quantidadeDeQuartos;
        double areaDoTerreno, areaConstruida;
};

#endif // CASA_H
