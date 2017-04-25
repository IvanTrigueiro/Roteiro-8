#include "Apartamento.h"

Apartamento::Apartamento(string posicao, double valorDoCondominio, int numeroDeVagasNaGaragem)
{
    setPosicao(posicao);
    setValorDoCondominio(valorDoCondominio);
    setNumeroDeVagasNaGaragem(numeroDeVagasNaGaragem);
}

        void Apartamento::setPosicao(string posicao){
            this-> posicao = posicao;
        }
        void Apartamento::setValorDoCondominio(double valorDoCondominio){
            this-> valorDoCondominio = valorDoCondominio;
        }
        void Apartamento::setNumeroDeVagasNaGaragem(int numeroDeVagasNaGaragem){
            this-> numeroDeVagasNaGaragem = numeroDeVagasNaGaragem;
        }

        string Apartamento::getPosicao(){return posicao;}
        double Apartamento::getValorDoCondominio(){return valorDoCondominio;}
        int Apartamento::getNumeroDeVagasNaGaragem(){return numeroDeVagasNaGaragem;}
