#include "Articulos.h"

Articulos::Articulos()
{
    Cantidad=0;//ctor
}

int Articulos::EstablecerCantidad()
{
    Cantidad++;
    return Cantidad;


}
int Articulos :: EstablecerCantidad(int sale)
{
        Cantidad=sale;
        return Cantidad;
}
