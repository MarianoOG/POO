#ifndef PAQUETE3_H
#define PAQUETE3_H

#include "Paquetes.h"


class Paquete3 : public Paquetes
{
    protected:
    Palomitas p;
    Refresco r;
    Hotdog hd;
    public:
        Paquete3();
        void Menu();
        void ImprimirDatos();
        int CalcularPrecio();
};

#endif // PAQUETE3_H
