#ifndef PALOMITAS_H
#define PALOMITAS_H
#include "Articulos.h"
#include <iostream>
using namespace std;

class Palomitas : public Articulos
{
    int Tamano[10];
    int Tipo[10];
    public:
        Palomitas();
        void ImprimirDatos();
        void Menu();
        int CalcularPrecio();
        void EstablecerValores(int Ta,int Ti,int i);
};

#endif // PALOMITAS_H
