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
void exibirMapa(Cenario fundo){
    for (int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            cout << fundo.fundoLabirinto[i][j] << "\t";
        }
        cout << endl;
    }
    fflush(stdout);
    cout << endl;
}
void mostrarCenarioPossivel(Cenario &fundo, int &posicaoX, int &posicaoY){
    Cenario novoCenario;

    novoCenario.fundoLabirinto[3][3] = PAREDE;
    novoCenario.fundoLabirinto[3][2] = PAREDE;
    novoCenario.fundoLabirinto[3][1] = PAREDE;
    novoCenario.fundoLabirinto[3][0] = PAREDE;
    novoCenario.fundoLabirinto[4][0] = QUEIJO;

    do{
        posicaoX = 0;
        posicaoY = 0;

        switch (novoCenario.fundoLabirinto[posicaoX][posicaoY]){
            case PAREDE:
                novoCenario.fazDenovo = true;
                break;

            case QUEIJO:
                novoCenario.fazDenovo = true;
                break;
            
            default:
                novoCenario.fundoLabirinto[posicaoX][posicaoY] = ENTRADA;
                novoCenario.fazDenovo = false;
                break;
        }

    }while(novoCenario.fazDenovo);


    for (int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(novoCenario.fundoLabirinto[i][j] != PAREDE and novoCenario.fundoLabirinto[i][j] != ENTRADA and novoCenario.fundoLabirinto[i][j] != QUEIJO){
                novoCenario.fundoLabirinto[i][j] = VAZIO;
            }
        }
    }
    exibirMapa(novoCenario);
}
void mostrarCenarioImpossivel(Cenario &fundo, int &posicaoX, int &posicaoY){
    Cenario novoCenario;

    novoCenario.fundoLabirinto[2][0] = PAREDE;
    novoCenario.fundoLabirinto[3][0] = PAREDE;
    novoCenario.fundoLabirinto[4][1] = PAREDE;
    novoCenario.fundoLabirinto[3][1] = PAREDE;
    novoCenario.fundoLabirinto[4][0] = QUEIJO;

    do{
        posicaoX = randomX();
        posicaoY = randomY();

        switch (novoCenario.fundoLabirinto[posicaoX][posicaoY]){
            case PAREDE:
                novoCenario.fazDenovo = true;
                break;

            case QUEIJO:
                novoCenario.fazDenovo = true;
                break;
            
            default:
                novoCenario.fundoLabirinto[posicaoX][posicaoY] = ENTRADA;
                novoCenario.fazDenovo = false;
                break;
        }

    }while(novoCenario.fazDenovo);

    for (int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(novoCenario.fundoLabirinto[i][j] != PAREDE and novoCenario.fundoLabirinto[i][j] != ENTRADA and novoCenario.fundoLabirinto[i][j] != QUEIJO){
                novoCenario.fundoLabirinto[i][j] = VAZIO;
            }
        }
    }
    exibirMapa(novoCenario);
}


#endif