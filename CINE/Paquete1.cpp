#include "Paquete1.h"

Paquete1::Paquete1()
{
   //ctor
}
void Paquete1:: Menu()
{
    int op,tam,sabor,tipo,marca;
    do{
    cout<<"\n\t\t\t*PAQUETE UNO*\t\t\t";
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
    cout<<"\nESCOGE LA MARCA DE TU CHOCOLATE";
    cout<<"\n1.-SNICKERS";
    cout<<"\n2.-MILKY-WAY";
    cout<<"\n3.-m&m´s";
    cout<<"\n4.-HERSHEY´S"<<endl;
    do{
        cout<<"teclee";
    cin>>marca;
    }while(marca<1||marca>4);
    p.EstablecerValores(tam,tipo,CantidadPaquetes-1);
    r.EstablecerValores(tam,sabor,CantidadPaquetes-1);
    ch.EstablecerValores(marca,CantidadPaquetes-1);
    p.EstablecerCantidad(CantidadPaquetes);
    r.EstablecerCantidad(CantidadPaquetes);
    ch.EstablecerCantidad(CantidadPaquetes);
    cout<<"\n¿DESEA COMPRAR OTRO PAQUETE IGUAL? INTRODUCE 0 PARA SALIR Y 1 PARA ACEPTAR\n";
    cin>>op;
    }while(op);
}
void Paquete1:: ImprimirDatos()
{
    p.ImprimirDatos();
    r.ImprimirDatos();
    ch.ImprimirDatos();
    if(CantidadPaquetes!=0)
    {
    cout<<"                    Precio Paquete1: $" <<CalcularPrecio() <<endl;
    }
}
int Paquete1:: CalcularPrecio()
{
    int Suma;
    Suma=((r.CalcularPrecio()+p.CalcularPrecio()+ch.CalcularPrecio())*95)/100;
    return Suma;
}
