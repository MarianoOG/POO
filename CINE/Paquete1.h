#ifndef PAQUETE1_H
#define PAQUETE1_H
#include "Paquetes.h"


class Paquete1 : public Paquetes
{
    Palomitas p;
    Refresco r;
    Chocolate ch;
    public:
        Paquete1();
        void Menu();
        void ImprimirDatos();
        int CalcularPrecio();


};

#endif // PAQUETE1_H
