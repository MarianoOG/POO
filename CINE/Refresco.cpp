#include "Refresco.h"

Refresco::Refresco()
{
   for(int i=0;i<=9;i++)
    {
    Tamano[i]=0;
    Sabor[i]=0;
    } //ctor
}
void Refresco::ImprimirDatos()
{
    if(Cantidad!=0)
    {
    cout<<"seleccion de bebida : "<<endl;
    for(int i=0;i<=Cantidad-1;i++)
    {
    cout<<"Refresco tamano "<<Tamano[i]<<" sabor  "<<Sabor[i]<<endl;
    }
    cout<<"                    "<<"Precio: " <<CalcularPrecio()<<"$"<<endl;
    }

}

void Refresco::Menu()
{
    int a,b,i=0,z;
    do
    {

        EstablecerCantidad();
        cout<<endl<<"ESCOGE EL TAMAÑO DE TU REFRESCO\n";
        cout<<"\n1.Grande $100";
        cout<<"\n2.Mediano $75";
        cout<<"\n3.Chico $50"<<endl;
        cin>>a;
        Tamano[i]=a;
        cout<<"\nESCOGE EL SABOR DE TU REFRESCO";
        cout<<"\n1.-Coca-cola";
        cout<<"\n2.-Sprite";
        cout<<"\n3.-Manzana";
        cout<<"\n4.-Fanta";
        cout<<"\n5.-Coca Liht"<<endl;

        cin>>b;
        Sabor[i]=b;


        cout<<"\n¿DESEA OTRO REFRESCO? INTRODUCE 0 PARA SALIR Y 1 PARA ACEPTAR\n";
        cin>>z;
        i++;

    }
    while (z);



}
int Refresco::CalcularPrecio()
{
    int preciototal=0;
    for (int i=0;i<=Cantidad-1;i++)
    {
        preciototal=125-Tamano[i]*25+preciototal;
    }
    return preciototal;
}

void Refresco::EstablecerValores(int Ta,int Sa,int i)
{
Tamano[i]=Ta;
Sabor[i]=Sa;
}
