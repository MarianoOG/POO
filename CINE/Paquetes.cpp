#include "Paquetes.h"

Paquetes::Paquetes()
{
   CantidadPaquetes=0; //ctor
}
int Paquetes:: EstablecerCantidad()
{
    CantidadPaquetes++;
    return CantidadPaquetes;

}
