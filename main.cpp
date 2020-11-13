#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Rato.h"
#include "Cenario.h"

using namespace std;

int main(){

    srand(time(NULL));

    Cenario fundo;

    Personagem rato;
    rato.acheiQueijo = false;

    mostrarCenario(fundo);
    corridaRato(rato.acheiQueijo, rato, fundo);
    
    return 0;
}