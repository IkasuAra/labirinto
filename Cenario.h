#ifndef CENARIO_H
#define CENARIO_H

#define LINHA 5
#define COLUNA 5

#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

using namespace std;

struct Cenario{
    char labirintoPossivel[LINHA][COLUNA] = 
    {{'X','X','P','X','X'},
     {'X','X','P','X','X'},
     {'X','X','P','X','X'},
     {'X','X','P','X','X'},
     {'X','X','X','X','X'}};
    char labirintoImpossivel[LINHA][COLUNA] =
    {{'X','X','X','X','X'},
     {'X','X','X','X','X'},
     {'X','X','X','X','X'},
     {'X','X','X','X','X'},
     {'X','X','X','X','X'}};
};

struct Obstaculo{
    int posX;
    int posY;
    char forma;
};

struct Objetivo{
    int posX;
    int posY;
    char forma;
};

void mostrarCenario(Cenario &fundo){
    for (int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            cout << fundo.labirinto[i][j] << "\t" ;
        }
        cout << endl;
    }
}


#endif