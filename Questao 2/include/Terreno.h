#ifndef TERRENO_H
#define TERRENO_H
#include "Imovel.h"

class Terreno : public Imovel
{
    public:
        Terreno(double area);
        void setArea(double area);
        double getArea();
    protected:
        double area;
};

#endif // TERRENO_H
