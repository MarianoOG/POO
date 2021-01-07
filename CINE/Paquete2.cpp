#include "Paquete2.h"

Paquete2::Paquete2()
{
    //ctor
}
void Paquete2:: Menu()
{
    int op,tam,sabor,tipo,carne;
    do{
    cout<<"\n\t\t\t*PAQUETE DOS*\t\t\t";
    EstablecerCantidad();
    cout<<"\nESCOGE EL TAMAÑO DESEADO";
    cout<<"\n1.-Grande";
    cout<<"\n2.-Mediano";
    cout<<"\n3.-Chico"<<endl;

    do{
        cout<<"teclee";
    cin>>tam;
    }while(tam<1||tam>3);




    cout<<"\nESCOGE EL SABOR DE TU REFRESCO";
    cout<<"\n1.-Coca-cola";
    cout<<"\n2.-Sprite";
    cout<<"\n3.-Manzana";
    cout<<"\n4.-Fanta";
    cout<<"\n5.-Coca Liht"<<endl;
    do{
        cout<<"teclee";
    cin>>sabor;
    }while(sabor<1||sabor>5);


    cout<<"\nESCOGE EL TIPO DE PALOMITAS";
    cout<<"\n1.-Caramelo";
    cout<<"\n2.-Mantequilla"<<endl;
    do{
        cout<<"teclee";
        cin>>tipo;
    }while(tipo<1||tipo>2);
    cout<<"\nEDESEAS TUS NACHOS..";
    cout<<"\n1.Con Carne";
    cout<<"\n2. Sin Carne"<<endl;
    do{
        cout<<"teclee";
    cin>>carne;
    }while(carne<1||carne>2);
    p.EstablecerValores(tam,tipo,CantidadPaquetes-1);
    r.EstablecerValores(tam,sabor,CantidadPaquetes-1);
    n.EstablecerValores(carne,CantidadPaquetes-1);
    p.EstablecerCantidad(CantidadPaquetes);
    r.EstablecerCantidad(CantidadPaquetes);
    n.EstablecerCantidad(CantidadPaquetes);
    cout<<"\n¿DESEA COMPRAR OTRO PAQUETE IGUAL? INTRODUCE 0 PARA SALIR Y 1 PARA ACEPTAR\n";
    cin>>op;
    }while(op);
}
void Paquete2:: ImprimirDatos()
{
    p.ImprimirDatos();
    r.ImprimirDatos();
    n.ImprimirDatos();
    if(CantidadPaquetes!=0)
    {
    cout<<"                    Precio Paquete2: $" <<CalcularPrecio() <<endl;
    }

}
int Paquete2:: CalcularPrecio()
{
    int Suma;
    Suma=((r.CalcularPrecio()+p.CalcularPrecio()+n.CalcularPrecio())*95)/100;
    return Suma;
}
