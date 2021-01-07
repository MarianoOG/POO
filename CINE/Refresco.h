#ifndef REFRESCO_H
#define REFRESCO_H
#include <iostream>
using namespace std;

#include "Articulos.h"


class Refresco : public Articulos
{
        int Tamano[10];
        int Sabor[10];
    public:
        Refresco();
        void ImprimirDatos();
        void Menu();
        int CalcularPrecio();
        void EstablecerValores(int Ta,int Sa,int i);
};

#endif // REFRESCO_H
