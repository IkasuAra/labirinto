#include <iostream>
#include "Rato.h"

using namespace std;

int main(){
    Personagem rato;
    rato.forma = 'R';
    Obstaculo parede;
    parede.forma = 'P';
    Objetivo queijo;
    queijo.forma = 'Q';
    
    Cenario mostrarCenario;
    for (int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout << mostrarCenario.matriz[i][j] << "\t" ;
        }
        cout << endl;
    }
    
    return 0;
}