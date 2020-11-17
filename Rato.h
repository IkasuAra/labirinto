#ifndef RATO_H
#define RATO_H

#include "Cenario.h"
#include <iostream>

using namespace std;

#define LINHA 5
#define COLUNA 5
#define NORTE 4
#define SUL 2
#define LESTE 3
#define OESTE 1

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

/*bool acharCaminhoAutomaticamente(Cenario &fundo, int posicaoX, int posicaoY, char deOndeVeio){

    mostrarCenarioPossivel(fundo);

    if(posicaoX < 0 or posicaoX >= LINHA or posicaoY < 0 or posicaoY >= COLUNA){
        return false;
    } else if(fundo.fundoLabirinto[posicaoX][posicaoY] == QUEIJO){
        cout << "Voce encontrou o queijo!" << endl;
        return true;
    } else if(fundo.fundoLabirinto[posicaoX][posicaoY] == PAREDE or fundo.fundoLabirinto[posicaoX][posicaoY] == '+'){
        return false;
    } else{
        fundo.fundoLabirinto[posicaoX][posicaoY] = '+';
        if(acharCaminhoAutomaticamente(fundo, posicaoX - 1, posicaoY, deOndeVeio) && deOndeVeio != NORTE){
            return true;
        } else if(acharCaminhoAutomaticamente(fundo, posicaoX, posicaoY + 1, deOndeVeio) && deOndeVeio != LESTE){
            return true;
        } else if(acharCaminhoAutomaticamente(fundo, posicaoX + 1, posicaoY, deOndeVeio) && deOndeVeio != SUL){
            return true;
        } else if(acharCaminhoAutomaticamente(fundo, posicaoX, posicaoY - 1, deOndeVeio) && deOndeVeio != OESTE){
            return true;
        } else{
            fundo.fundoLabirinto[posicaoX][posicaoY] = VAZIO;
            return false;
        }
        cout << "Nao foi possivel chegar ao queijo" << endl;
    }
}*/


#endif