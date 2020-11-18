#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Rato.h"
#include "Cenario.h"

using namespace std;

int main(){
    int posicaoX = 0, posicaoY = 0;
    char deOndeVeio = INICIO;

    srand(time(NULL));

    Cenario fundo;

    Objetivo queijo;
    queijo.forma = QUEIJO;

    Personagem rato;
    rato.acheiQueijo = false;
    
    /*mostrarCenarioImpossivel(fundo, posicaoX, posicaoY);*/
    
    mostrarCenarioPossivel(fundo, posicaoX, posicaoY);
    corridaRato(fundo, posicaoX, posicaoY, deOndeVeio);
    

    return 0;
}