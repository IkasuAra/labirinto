#ifndef CENARIO_H
#define CENARIO_H

#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

#define ENTRADA 'E'
#define QUEIJO 'Q'
#define PAREDE '#'
#define VAZIO '.'
#define LINHA 5
#define COLUNA 5

using namespace std;

struct Cenario{
    char fundoLabirinto[LINHA][COLUNA];
};

void mostrarCenario(Cenario &fundo){
    Cenario novoCenario;
    
    //ALGUEM PODE RANDOMIZAR A ENTRADA PQ EU QUASE SOQUEI MEU PC KSKKKSK

    novoCenario.fundoLabirinto[3][2] = PAREDE;
    novoCenario.fundoLabirinto[3][1] = PAREDE;
    novoCenario.fundoLabirinto[3][0] = PAREDE;
    novoCenario.fundoLabirinto[3][3] = PAREDE;


    for (int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(novoCenario.fundoLabirinto[i][j] != PAREDE and fundo.fundoLabirinto[i][j] != ENTRADA){
                novoCenario.fundoLabirinto[i][j] = VAZIO;
            };
            cout << novoCenario.fundoLabirinto[i][j] << "\t";
        }
        cout << endl;
    }
}


#endif