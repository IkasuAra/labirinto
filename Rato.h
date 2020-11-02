#ifndef RATO_H
#define RATO_H

struct cenario{
    char matriz[5][5] = {{'X','X','X','X','X'},
                         {'X','X','X','X','X'},
                         {'X','X','X','X','X'},
                         {'X','X','X','X','X'},
                         {'X','X','X','X','X'}};
};

struct Personagem {
    int movX;
    int movY;
    char forma;
};

#endif