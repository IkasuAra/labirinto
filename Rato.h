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
        cout << "O rato chegou ate o queijo !" << endl << endl;
        return true;
    } else if(fundo.fundoLabirinto[posicaoX][posicaoY] == PAREDE or fundo.fundoLabirinto[posicaoX][posicaoY] == '+'){
        return false;
    } else{
        fundo.fundoLabirinto[posicaoX][posicaoY] = '+';
        exibirMapa(fundo);
        if(deOndeVeio != NORTE and corridaRato(fundo, posicaoX + 1, posicaoY, SUL)){
            exibirMapa(fundo);
            fundo.fundoLabirinto[posicaoX][posicaoY] = '*';
            return true;
        } else if(deOndeVeio != OESTE and corridaRato(fundo, posicaoX, posicaoY + 1, LESTE)){
            exibirMapa(fundo);
            fundo.fundoLabirinto[posicaoX][posicaoY] = '*';
            return true;
        } else if(deOndeVeio != LESTE and corridaRato(fundo, posicaoX, posicaoY - 1, OESTE)){
            exibirMapa(fundo);
            fundo.fundoLabirinto[posicaoX][posicaoY] = '*';
            return true;
        } else if(deOndeVeio != SUL and corridaRato(fundo, posicaoX - 1, posicaoY, NORTE)){
            exibirMapa(fundo);
            fundo.fundoLabirinto[posicaoX][posicaoY] = '*';
            return true;
        } else{
            fundo.fundoLabirinto[posicaoX][posicaoY] = '+';
            return false;
        }
    }
}

#endif