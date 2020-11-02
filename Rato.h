#ifndef RATO_H
#define RATO_H

struct Cenario{
    char matriz[5][5] = {{'X','X','X','X','X'},
                         {'X','X','X','X','X'},
                         {'X','X','X','X','X'},
                         {'X','X','X','X','X'},
                         {'X','X','X','X','X'}};
};

struct Obstaculo{
    int posX;
    int posY;
    char forma;
};

struct Objetivo{
    int posX;
    int posY;
    char forma;
}

struct Personagem {
    int movX;
    int movY;
    char forma;
};

#endif