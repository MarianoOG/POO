#include "Ice.h"

Ice::Ice()
{
    for(int i=0;i<=9;i++)
    {
    Tamano[i]=0;
    Sabor[i]=0;
    }
}
void Ice::ImprimirDatos()
{
    if(Cantidad!=0)
    {
    cout<<"seleccion de Ice : "<<endl;
    for(int i=0;i<=Cantidad-1;i++)
    {
    cout<<"Ice tamano "<<Tamano[i]<<" sabor  "<<Sabor[i] <<endl;
    }
    cout<<"                    "<<"Precio: $" <<CalcularPrecio()<<endl;
    }
}

void Ice::Menu()
{
    int a,b,i=0,z;
    do
    {

        EstablecerCantidad();
        cout<<endl<<"ESCOGE EL TAMAÑO DE TU ICE"<<endl;
        cout<<endl<<"1.Grande $100";
        cout<<endl<<"2.Mediano $75";
        cout<<endl<<"3.Chico $50"<<endl;
        cin>>a;
        Tamano[i]=a;
        cout<<"\nESCOGE EL SABOR DE TU ICE";
        cout<<"\n1.Limon";
        cout<<"\n2.Cereza";
        cout<<"\n3.Uva";
        cout<<"\n4.Mora"<<endl;
        cin>>b;
        Sabor[i]=b;


        cout<<endl<<"¿DESEA OTRO ICE? INTRODUCE 0 PARA SALIR Y 1 PARA ACEPTAR"<<endl;
        cin>>z;
        i++;

    }
    while (z);
}
int Ice::CalcularPrecio()
{
    int preciototal=0;
    for (int i=0;i<=Cantidad-1;i++)
    {
        preciototal=125-Tamano[i]*25+preciototal;
    }
    return preciototal;
}
void Ice::EstablecerValores(int  Tam,int Sab, int i)
{
    Tamano[i]=Tam;
    Sabor[i]=Sab;
}
