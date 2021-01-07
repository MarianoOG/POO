#include "Paquete3.h"

Paquete3::Paquete3()
{
    //ctor
}
void Paquete3:: Menu()
{
    int op,tam,sabor,tipo,tama;
    do{
    cout<<"\n\t\t\t*PAQUETE TRES*\t\t\t";
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

    cout<<"\nTU HOTDOG..";
    cout<<"\n1.Doble";
    cout<<"\n2. Sencillo"<<endl;
    do{
        cout<<"teclee";
    cin>>tama;
    }while(tama<1||tama>2);
    p.EstablecerValores(tam,tipo,CantidadPaquetes-1);
    r.EstablecerValores(tam,sabor,CantidadPaquetes-1);
    hd.EstablecerValores(tama,CantidadPaquetes-1);
    p.EstablecerCantidad(CantidadPaquetes);
    r.EstablecerCantidad(CantidadPaquetes);
    hd.EstablecerCantidad(CantidadPaquetes);
    cout<<"\n¿DESEA COMPRAR OTRO PAQUETE IGUAL? INTRODUCE 0 PARA SALIR Y 1 PARA ACEPTAR\n";
    cin>>op;
    }while(op);
}
void Paquete3:: ImprimirDatos()
{
    p.ImprimirDatos();
    r.ImprimirDatos();
    hd.ImprimirDatos();
    if(CantidadPaquetes!=0)
    {
    cout<<"                    Precio Paquete3: $" <<CalcularPrecio() <<endl;
    }
}
int Paquete3:: CalcularPrecio()
{
    int Suma;
    Suma=((r.CalcularPrecio()+p.CalcularPrecio()+hd.CalcularPrecio())*95)/100;
    return Suma;
}

