#ifndef ARTICULOS_H
#define ARTICULOS_H
#include <iostream>
using namespace std;

class Articulos
{
    protected:
    int Cantidad;

    public:
        Articulos();
        int EstablecerCantidad();
        int EstablecerCantidad(int sale);
};

#endif // ARTICULOS_H
