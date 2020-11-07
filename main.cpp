#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Rato.h"
#include "Cenario.h"

using namespace std;

int main(){

    srand(time(0));

    Cenario fundo;

    Personagem rato;
    rato.forma = 'R';
    rato.acheiQueijo = false;
    
    Obstaculo parede;
    parede.forma = 'P';
    
    Objetivo queijo;
    queijo.forma = 'Q';

    for(int i=0; i<=4; i++){
        for(int j=0; i<=4; i++){
            if(fundo.labirintoImpossivel[i][j] == 'E'){
                //Verificacao para ter base sobre como colocar as paredes
            }
        }
    }
    
    mostrarCenario(fundo);
    corridaRato(rato.acheiQueijo, rato, fundo);
    
    return 0;
}