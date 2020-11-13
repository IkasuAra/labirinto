#ifndef RATO_H
#define RATO_H

#include "Cenario.h"
#include <iostream>

using namespace std;

#define LINHA 5
#define COLUNA 5
#define BAIXO 0
#define CIMA 1
#define ESQUERDA 2
#define DIREITA 3
#define RATO 'R'


struct Personagem {
    int posX;
    int posY;
    int movX;
    int movY;
    bool acheiQueijo;
};

bool corridaRato(bool acheiQueijo, Personagem &rato, Cenario &fundo){
    Cenario novaMovimentacao;

    if(fundo.fundoLabirinto[LINHA][COLUNA] == 'Q')
        return acheiQueijo;
    else if(rato.movX < 0 or rato.movX >= LINHA or rato.movY < 0 or rato.movY >= COLUNA){
        return false;
        }
    else if(fundo.fundoLabirinto[LINHA][COLUNA] != VAZIO)
        return false;
    else
        if(fundo.fundoLabirinto[LINHA][COLUNA] != PAREDE){
                rato.movX - 1;
                return corridaRato(!acheiQueijo, rato, fundo);
            }
        if(fundo.fundoLabirinto[LINHA][COLUNA] != PAREDE){
                rato.movX + 1;
                return corridaRato(!acheiQueijo, rato, fundo);
            }
        if(fundo.fundoLabirinto[LINHA][COLUNA] != PAREDE){
                rato.movY + 1;
                return corridaRato(!acheiQueijo, rato, fundo);
            }
        if(fundo.fundoLabirinto[LINHA][COLUNA] != PAREDE){
                rato.movY - 1;
                return corridaRato(!acheiQueijo, rato, fundo);
        }else{
            return false;
        }
}


#endif