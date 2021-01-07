#ifndef PAQUETES_H
#define PAQUETES_H
#include <iostream>
#include "Palomitas.h"
#include "Refresco.h"
#include "Chocolate.h"
#include "Hotdog.h"
#include "Ice.h"
#include "Nachos.h"
using namespace std;

class Paquetes
{
    protected:
    int CantidadPaquetes;
    public:
    Paquetes();
    int EstablecerCantidad();

};

#endif // PAQUETES_H
