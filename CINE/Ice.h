#ifndef ICE_H
#define ICE_H

#include "Articulos.h"
#include <iostream>
using namespace std;


class Ice : public Articulos
{
    protected:
    int Tamano[10];
    int Sabor[10];

    public:
        Ice();
        void ImprimirDatos();
        void Menu();
        int CalcularPrecio();
        void EstablecerValores(int  Tam, int Sab, int i);


};

#endif // ICE_H


