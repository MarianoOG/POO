#ifndef NACHOS_H
#define NACHOS_H

#include "Articulos.h"
#include <iostream>
using namespace std;


class Nachos : public Articulos
{
    protected:
    int Tipo[10];
    public:
        Nachos();
        void ImprimirDatos();
        void Menu();
        int CalcularPrecio();
        void EstablecerValores(int  Ti, int i);


};

#endif // NACHOS_H
