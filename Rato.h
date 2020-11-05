#ifndef RATO_H
#define RATO_H

#include "Cenario.h"

#define LINHA 5
#define COLUNA 5

struct Personagem {
    int movX;
    int movY;
    char forma;
    bool acheiQueijo;
};

bool corridaRato(bool acheiQueijo, Personagem &rato, Cenario &fundo){
    if(fundo.labirinto[LINHA][COLUNA] == 'Q')
        return acheiQueijo;
    else if(rato.movX < 0 or rato.movX >= LINHA or rato.movY < 0 or rato.movY >= COLUNA)
        return false;
    else if(fundo.labirinto[LINHA][COLUNA] != 'X')
        return false;
    else
        if(fundo.labirinto[LINHA][COLUNA] != 'P'){
                rato.movX - 1;
                return corridaRato(!acheiQueijo, rato, fundo);
            }
        if(fundo.labirinto[LINHA][COLUNA] != 'P'){
                rato.movX + 1;
                return corridaRato(!acheiQueijo, rato, fundo);
            }
        if(fundo.labirinto[LINHA][COLUNA] != 'P'){
                rato.movY + 1;
                return corridaRato(!acheiQueijo, rato, fundo);
            }
        if(fundo.labirinto[LINHA][COLUNA] != 'P'){
                rato.movY - 1;
                return corridaRato(!acheiQueijo, rato, fundo);
        }else{
            return false;
        }
}

#endif