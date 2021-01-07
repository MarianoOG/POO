#ifndef PAQUETE2_H
#define PAQUETE2_H
#include "Paquetes.h"


class Paquete2 : public Paquetes
{
    Palomitas p;
    Refresco r;
    Nachos n;
    public:
        Paquete2();
        void Menu();
        void ImprimirDatos();
        int CalcularPrecio();

};

#endif // PAQUETE2_H
