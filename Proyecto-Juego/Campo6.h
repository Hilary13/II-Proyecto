#pragma once
#include "Tablero.h"
class Campo6 :
    public Tablero
{
private:

    Ficha* celda[3][2];

public:

    Campo6();
    string dibujarCelda();

};

