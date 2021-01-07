#ifndef PAQUETE4_H
#define PAQUETE4_H
#include "Paquetes.h"


class Paquete4 : public Paquetes
{
    protected:
    Palomitas p;
    Refresco r;
    Chocolate ch;
    Hotdog hd;
    Ice i;
    Nachos n;
    public:
        Paquete4();
        int Menu();
};

#endif // PAQUETE4_H
