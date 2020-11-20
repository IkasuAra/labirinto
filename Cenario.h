#ifndef CENARIO_H
#define CENARIO_H

#include <string>
#include <time.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <cstdlib>
#include "Rato.h"

#define QUEIJO 'Q'
#define ENTRADA 'E'
#define PAREDE '#'
#define RATO 'R'
#define VAZIO '.'
#define LINHA 5
#define COLUNA 5

using namespace std;

struct Cenario{
    char fundoLabirinto[LINHA][COLUNA];
    bool fazDenovo = false;
};
int randomX(){
    return rand() % 5;  
}

int randomY(){
    return rand() % 5;
}
void exibirMapa(Cenario &fundo){
    for (int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            cout << fundo.fundoLabirinto[i][j] << "\t";
        }
        cout << endl;
    }
    fflush(stdout);
    cout << endl;
    Sleep(1200);
}
void mostrarCenarioPossivel(Cenario &fundo, int &posicaoX, int &posicaoY){

    fundo.fundoLabirinto[3][3] = PAREDE;
    fundo.fundoLabirinto[3][2] = PAREDE;
    fundo.fundoLabirinto[3][1] = PAREDE;
    fundo.fundoLabirinto[3][0] = PAREDE;
    fundo.fundoLabirinto[4][0] = QUEIJO;

    do{
        posicaoX = randomX();
        posicaoY = randomY();

        switch (fundo.fundoLabirinto[posicaoX][posicaoY]){
            case PAREDE:
                fundo.fazDenovo = true;
                break;

            case QUEIJO:
                fundo.fazDenovo = true;
                break;
            
            default:
                fundo.fundoLabirinto[posicaoX][posicaoY] = ENTRADA;
                fundo.fazDenovo = false;
                break;
        }

    }while(fundo.fazDenovo);


    for (int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(fundo.fundoLabirinto[i][j] != PAREDE and fundo.fundoLabirinto[i][j] != ENTRADA and fundo.fundoLabirinto[i][j] != QUEIJO){
                fundo.fundoLabirinto[i][j] = VAZIO;
            }
        }
    }
    exibirMapa(fundo);
}
void mostrarCenarioImpossivel(Cenario &fundo, int &posicaoX, int &posicaoY){

    fundo.fundoLabirinto[4][2] = PAREDE;
    fundo.fundoLabirinto[3][0] = PAREDE;
    fundo.fundoLabirinto[4][1] = PAREDE;
    fundo.fundoLabirinto[3][1] = PAREDE;
    fundo.fundoLabirinto[4][0] = QUEIJO;

    do{
        posicaoX = randomX();
        posicaoY = randomY();

        switch (fundo.fundoLabirinto[posicaoX][posicaoY]){
            case PAREDE:
                fundo.fazDenovo = true;
                break;

            case QUEIJO:
                fundo.fazDenovo = true;
                break;
            
            default:
                fundo.fundoLabirinto[posicaoX][posicaoY] = ENTRADA;
                fundo.fazDenovo = false;
                break;
        }

    }while(fundo.fazDenovo);

    for (int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(fundo.fundoLabirinto[i][j] != PAREDE and fundo.fundoLabirinto[i][j] != ENTRADA and fundo.fundoLabirinto[i][j] != QUEIJO){
                fundo.fundoLabirinto[i][j] = VAZIO;
            }
        }
    }
    exibirMapa(fundo);
}


#endif