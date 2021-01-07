#ifndef HOTDOG_H
#define HOTDOG_H

#include "Articulos.h"
#include <iostream>
using namespace std;



class Hotdog : public Articulos
{
    protected:
    int tipo[10];
    public:
        Hotdog();
        void ImprimirDatos();
        void Menu();
        int CalcularPrecio();
        void EstablecerValores(int  Ti,int i);
};

#endif // HOTDOG_H
