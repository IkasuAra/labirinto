#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Rato.h"
#include "Cenario.h"

using namespace std;

int main(){
    int posicaoX, posicaoY;
    char deOndeVeio;

    srand(time(NULL));

    Cenario fundo;

    Objetivo queijo;
    queijo.forma = QUEIJO;

    Personagem rato;
    rato.acheiQueijo = false;

    mostrarCenarioPossivel(fundo);

    return 0;
}