#include "Palomitas.h"
using namespace std;

Palomitas::Palomitas()
{
    for(int i=0;i<=9;i++)
    {
    Tamano[i]=0;
    Tipo[i]=0;
    }
    //ctor
}

void Palomitas:: ImprimirDatos()
{
    if(Cantidad!=0)
    {
    cout<<"seleccion de palomitas : "<<endl;
    for(int i=0;i<=Cantidad-1;i++)
    {
    cout<<"Palomitas tamano"<<Tamano[i]<<"  de sabor "<<Tipo[i]<<endl;
    }
    cout<<"                    "<<"Precio: " <<CalcularPrecio()<<"$"<<endl;
    }
}
void Palomitas::Menu()
{
    int a,b,i,z;
    do
    {
        EstablecerCantidad();
        i=Cantidad-1;
        cout<<"ESCOGE EL TAMAÑO DE TUS PALOMITAS\n";
        cout<<"\n1.Grandes $100";
        cout<<"\n2.Medianas $75";
        cout<<"\n3.Chicas $50"<<endl;
        cin>>a;
        Tamano[i]=a;
        cout<<"\nESCOGE EL TIPO DE PALOMITAS";
        cout<<"\n1.Caramelo";
        cout<<"\n2.Mantequilla"<<endl;
        cin>>b;
        Tipo[i]=b;
        cout<<"\nDESEA COMPRAR OTRAS PALOMITAS? INTRODUCE 0 PARA SALIR Y 1 PARA ACEPTAR\n";
        cin>>z;
    }
    while (z);



}
int Palomitas::CalcularPrecio()
{
    int preciototal=0;
    for (int i=0;i<=Cantidad-1;i++)
    {
        preciototal=125-Tamano[i]*25+preciototal;
    }
    return preciototal;
}

void Palomitas::EstablecerValores(int Ta,int Ti,int i)
{
Tamano[i]=Ta;
Tipo[i]=Ti;
}
