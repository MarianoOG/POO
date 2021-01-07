#ifndef CHOCOLATE_H
#define CHOCOLATE_H
#include "Articulos.h"
#include <iostream>
using namespace std;

class Chocolate : public Articulos
{
    protected:
    int marca[10];
    public:
        Chocolate();
        void ImprimirDatos();
        void Menu();
        int CalcularPrecio();
        void EstablecerValores(int Ma,int i);
};

#endif // CHOCOLATE_H
