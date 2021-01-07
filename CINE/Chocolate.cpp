#include "Chocolate.h"


Chocolate::Chocolate()
{
    for(int i=0;i<=9;i++)
    {
    marca[i]=0;
    }
}
void Chocolate:: ImprimirDatos()
{
    if(Cantidad!=0)
    {
    cout<<"seleccion de Chocolate : "<<endl;
    for(int i=0;i<=Cantidad-1;i++)
    {
    cout<<"Chocolate de marca "<<marca[i]<<endl;
    }
    cout<<"                    "<<"Precio: $" <<CalcularPrecio()<<endl;
    }
}
void Chocolate::Menu()
{
    int b,i=0,z;
    do
    {

        EstablecerCantidad();

        cout<<endl<<"\nESCOGE LA MARCA DE TU CHOCOLATE";
        cout<<endl<<"\n1.-SNICKERS $10";
        cout<<endl<<"\n2.-MILKY-WAY $10";
        cout<<endl<<"\n3.-m&m´s $10";
        cout<<endl<<"\n4.-HERSHEY´S $10"<<endl;
        cin>>b;
        marca[i]=b;


        cout<<endl<<"DESEA COMPRAR OTRO CHOCOLATE? (INTRODUCE 0 PARA SALIR Y 1 PARA ACEPTAR)"<<endl;
        cin>>z;
        i++;

    }
    while (z);



}
int Chocolate::CalcularPrecio()
{
    int preciototal=0;
    for (int i=0;i<=Cantidad-1;i++)
    {
        preciototal=10+preciototal;
    }
    return preciototal;
}

void Chocolate::EstablecerValores(int  Ma,int i)
{
    marca[i]=Ma;
}
