#include "Terreno.h"

Terreno::Terreno(double area)
{
    setArea(area);
}
void Terreno::setArea(double area){
   this -> area = area;
}
double Terreno::getArea(){return area;}
