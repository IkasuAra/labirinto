#ifndef RATO_H
#define RATO_H

#include <iostream>
#include "Cenario.h"

#define LINHA 5
#define COLUNA 5
#define NORTE 4
#define SUL 2
#define LESTE 3
#define OESTE 1
#define INICIO 0

using namespace std;

struct Objetivo{
    char forma;
    int movX;
    int movY;
};

struct Personagem {
    int movX;
    int movY;
    bool acheiQueijo;
};

bool corridaRato(Cenario &fundo, int posicaoX, int posicaoY, char deOndeVeio){

    if(posicaoX < 0 or posicaoX >= LINHA or posicaoY < 0 or posicaoY >= COLUNA){
        return false;
    } else if(fundo.fundoLabirinto[posicaoX][posicaoY] == QUEIJO){
        fundo.fundoLabirinto[posicaoX][posicaoY] = '+';
        cout << "Voce encontrou o queijo!" << endl;
        return true;
    } else if(fundo.fundoLabirinto[posicaoX][posicaoY] == PAREDE or fundo.fundoLabirinto[posicaoX][posicaoY] == '+'){
        return false;
    } else{
        fundo.fundoLabirinto[posicaoX][posicaoY] = '+';
        exibirMapa(fundo);
        if(deOndeVeio != NORTE and corridaRato(fundo, posicaoX + 1, posicaoY, SUL)){
            exibirMapa(fundo);
            return true;
        } else if(deOndeVeio != LESTE and corridaRato(fundo, posicaoX, posicaoY - 1, OESTE)){
            exibirMapa(fundo);
            return true;
        } else if(deOndeVeio != SUL and corridaRato(fundo, posicaoX - 1, posicaoY, NORTE)){
            exibirMapa(fundo);
            return true;
        } else if(deOndeVeio != OESTE and corridaRato(fundo, posicaoX, posicaoY + 1, LESTE)){
            exibirMapa(fundo);
            return true;
        } else{
            fundo.fundoLabirinto[posicaoX][posicaoY] = VAZIO;
            return false;
        }
        cout << "Nao foi possivel chegar ao queijo" << endl;
    }
}


#endif