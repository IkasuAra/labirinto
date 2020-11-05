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

        for(int i=0; i <=3; i++){
        fundo.labirinto[rand() % 4][rand() % 4] = parede.forma;
        }
        fundo.labirinto[rand() % 4][rand() % 4] = rato.forma;
    
    mostrarCenario(fundo);
    corridaRato(rato.acheiQueijo, rato, fundo);
    
    return 0;
}