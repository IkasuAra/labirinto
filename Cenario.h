#ifndef CENARIO_H
#define CENARIO_H

#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

#define QUEIJO 'Q'
#define ENTRADA 'E'
#define PAREDE '#'
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
void mostrarCenario(Cenario &fundo){
    Cenario novoCenario;

    novoCenario.fundoLabirinto[3][3] = PAREDE;
    novoCenario.fundoLabirinto[3][2] = PAREDE;
    novoCenario.fundoLabirinto[3][1] = PAREDE;
    novoCenario.fundoLabirinto[3][0] = PAREDE;
    novoCenario.fundoLabirinto[4][0] = QUEIJO;

    do{
        int x = randomX();
        int y = randomY();

        switch (novoCenario.fundoLabirinto[x][y]){
            case PAREDE:
                novoCenario.fazDenovo = true;
                break;

            case QUEIJO:
                novoCenario.fazDenovo = true;
                break;
            
            default:
                novoCenario.fundoLabirinto[x][y] = ENTRADA;
                novoCenario.fazDenovo = false;
                break;
        }

    }while(novoCenario.fazDenovo);


    for (int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(novoCenario.fundoLabirinto[i][j] != PAREDE and novoCenario.fundoLabirinto[i][j] != ENTRADA and novoCenario.fundoLabirinto[i][j] != QUEIJO){
                novoCenario.fundoLabirinto[i][j] = VAZIO;
            }
            cout << novoCenario.fundoLabirinto[i][j] << "\t";
        }
        cout << endl;
    }
    fflush(stdout);
}


#endif