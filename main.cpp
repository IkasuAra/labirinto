#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Rato.h"
#include "Cenario.h"

using namespace std;

int main(){
    int posicaoX = 0, posicaoY = 0;
    int opcao;
    char deOndeVeio = INICIO;

    srand(time(NULL));

    Cenario fundo;

    Objetivo queijo;
    queijo.forma = QUEIJO;

    Personagem rato;
    rato.acheiQueijo = false;

    cout << "Digite uma das opcoes: " << endl;
    cout << "1 - Cenario possivel \n2 - Cenario impossivel ";
    cin >> opcao;

    switch(opcao){
        case 1:
            mostrarCenarioPossivel(fundo, posicaoX, posicaoY);
            break;
        case 2:
            mostrarCenarioImpossivel(fundo, posicaoX, posicaoY);
            break;
        default:
            cout << "Opcao invalida";
    }

    if(corridaRato(fundo, posicaoX, posicaoY, deOndeVeio)){
        cout << "O rato retornou para a entrada!" << endl;
    }else{
        cout << "Impossivel chegar no queijo!" << endl;
    }


    return 0;
}