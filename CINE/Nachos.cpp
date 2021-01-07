#include "Nachos.h"

Nachos::Nachos()
{
    for(int i=0;i<=9;i++)
    {
    Tipo[i]=0;
    }

}

void Nachos:: ImprimirDatos()
{
    if(Cantidad!=0)
    {
    cout<<"seleccion de Nachos : "<<endl;
    for(int i=0;i<=Cantidad-1;i++)
    {
    cout<<"Nachos de tipo "<<Tipo[i]<<endl;
    }
    cout<<"                    "<<"Precio: $" <<CalcularPrecio()<<endl;
    }
}
void Nachos::Menu()
{
    int b,i=0,z;
    do
    {

        EstablecerCantidad();

        cout<<"\nDESEAS TUS NACHOS..";
        cout<<"\n1.Con Carne $75";
        cout<<"\n2. Sin Carne $50"<<endl;
        cin>>b;
        Tipo[i]=b;


        cout<<endl<<"DESEA COMPRAR OTROS NACHOS? (INTRODUCE 0 PARA SALIR Y 1 PARA ACEPTAR)"<<endl;
        cin>>z;
        i++;

    }
    while (z);



}
int Nachos::CalcularPrecio()
{
    int preciototal=0;
    for (int i=0;i<=Cantidad-1;i++)
    {
        preciototal=100-Tipo[i]*25+preciototal;
    }
    return preciototal;
}
void Nachos::EstablecerValores(int  Ti, int i)
{
    Tipo[i]=Ti;
}
