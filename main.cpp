#include <iostream>
#include "Rato.h"
#include "Cenario.h"

using namespace std;

int main(){
    Personagem rato;
    rato.forma = 'R';
    rato.acheiQueijo = false;
    
    Obstaculo parede;
    parede.forma = 'P';
    
    Objetivo queijo;
    queijo.forma = 'Q';
    
    Cenario fundo;

    mostrarCenario(fundo);
    corridaRato(rato.acheiQueijo, rato, fundo);
    
    return 0;
}