#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include "Imovel.h"
#include <string>
using namespace std;

class Apartamento : public Imovel
{
    public:
        Apartamento(string posicao, double valorDoCondominio, int numeroDeVagasNaGaragem);

        void setPosicao(string posicao);
        void setValorDoCondominio(double valorDoCondominio);
        void setNumeroDeVagasNaGaragem(int numeroDeVagasNaGaragem);

        string getPosicao();
        double getValorDoCondominio();
        int getNumeroDeVagasNaGaragem();
    protected:
        string posicao;
        double valorDoCondominio;
        int numeroDeVagasNaGaragem;
};

#endif // APARTAMENTO_H
