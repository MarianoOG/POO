#include "Hotdog.h"

Hotdog::Hotdog()
{
    for(int i=0;i<=9;i++)
    {
    tipo[i]=0;
    }
}

void Hotdog:: ImprimirDatos()
{
    if(Cantidad!=0)
    {
    cout<<"seleccion de Hot-dog : "<<endl;
    for(int i=0;i<=Cantidad-1;i++)
    {
    cout<<"Hot-dog de tipo "<<tipo[i]<<endl;
    }
    cout<<"                    "<<"Precio: $" <<CalcularPrecio()<<endl;
    }
}
void Hotdog::Menu()
{
    int b,i=0,z;
    do
    {

        EstablecerCantidad();

        cout<<endl<<"ESCOGE EL TIPO DE TU HOT-DOG"<<endl;
        cout<<endl<<"1. Doble $75";
        cout<<endl<<"2. Sencillo $50"<<endl;
        cin>>b;
        tipo[i]=b;


        cout<<endl<<"¿DESEA OTRO HOT-DOG? (INTRODUCE 0 PARA SALIR Y 1 PARA ACEPTAR)"<<endl;
        cin>>z;
        i++;

    }
    while (z);



}
int Hotdog::CalcularPrecio()
{
    int preciototal=0;
    for (int i=0;i<=Cantidad-1;i++)
    {
        preciototal=100-tipo[i]*25+preciototal;
    }
    return preciototal;
}
void Hotdog::EstablecerValores(int  Ti,int i)
{
    tipo[i]=Ti;
}
