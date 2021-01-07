#include <iostream>
#include "Palomitas.h"
#include "Refresco.h"
#include "Nachos.h"
#include "Hotdog.h"
#include "Ice.h"
#include "Chocolate.h"
#include "Paquete1.h"
#include "Paquete2.h"
#include "Paquete3.h"
#include "Paquete4.h"
#include "FormadePago.h"
#include <Windows.h>
using namespace std;

int main()
{
Sleep(20);cout<<"C ";Sleep(20);cout<<"A ";Sleep(20);cout<<"R ";Sleep(20);cout<<"G ";Sleep(20);cout<<"A "; Sleep(20);cout<<"N ";Sleep(20);cout<<"D ";Sleep(20);cout<<"O ";Sleep(20);cout<<"... ";Sleep(20);cout<<"... \n";
    Palomitas p;
    Refresco r;
    Nachos n;
    Hotdog hd;
    Ice i;
    Chocolate ch;
    FormadePago f;
    Paquete1 P1;
    Paquete2 P2;
    Paquete3 P3;
    Paquete4 P4;
    int salir=1,menu,total,x=1;
    int opcion,menu2,salir2=1;

    do{

    for(int j=0;j<=1;j++)
    {
    for(int i=0;i<=133;i++)
    {
    cout<<"\2";
    Sleep(5);
    }
    cout<<endl;
    }
    cout<<"\2\2                                                                                                                                  \2\2"<<endl;
    Sleep(50);
    cout<<"\2\2                                                       BIENVENIDO A CINEMEX                                                       \2\2"<<endl;
    Sleep(50);
    cout<<"\2\2                                                                                                                                  \2\2"<<endl;
    Sleep(50);
    for(int j=0;j<=1;j++)
    {
    for(int i=0;i<=133;i++)
    {
    cout<<"\2";
    Sleep(5);
    }
    cout<<endl;
    }
    cout<<endl<<endl;

    cout<<"Selecciona la opcion que prefieras"<<endl<<"1. Compra por Articulo    "<<"       2.Compra por Paquete "<<"   3. Ticket"<<endl;
    do{
    cout<<"Teclee: ";
    cin>>opcion;
    }
    while(opcion<1||opcion>3);

    switch(opcion){
case 1:
do{
    cout<<"1. Palomitas"<<endl;
    cout<<"2. Refrescos"<<endl;
    cout<<"3. Nachos"<<endl;
    cout<<"4. Hot-Dog"<<endl;
    cout<<"5. Ice"<<endl;
    cout<<"6. Chocolate"<<endl;
    cout<<"7. salir" <<endl;
    do{
        cout<<"teclee";
    cin>>menu;
    }while(opcion<1||opcion>7);



    switch(menu){
        case 1:
            p.Menu();
            p.ImprimirDatos();
            break;
        case 2:
            r.Menu();
            r.ImprimirDatos();
            break;
        case 3:
            n.Menu();
            n.ImprimirDatos();
            break;

        case 4:
           hd.Menu();
           hd.ImprimirDatos();
           break;
         case 5:
           i.Menu();
           i.ImprimirDatos();
           break;
         case 6:
           ch.Menu();
           ch.ImprimirDatos();
           break;

        case 7:
            salir=0;

            break;
    }
}while(salir);
break;
case 2:
do{
    cout<<"1. Paquete 1 "<<endl;
    cout<<"2. Paquete 2"<<endl;
    cout<<"3. Paquete 3"<<endl;
    cout<<"4. Crea Tu Paquete"<<endl;
    cout<<"5. salir" <<endl;
    do{
        cout<<"teclee";
    cin>>menu2;
    }while(opcion<1||opcion>5);
    switch(menu2){
        case 1:
    P1.Menu();
    P1.ImprimirDatos();
            break;
        case 2:
    P2.Menu();
    P2.ImprimirDatos();
            break;
        case 3:
    P3.Menu();
    P3.ImprimirDatos();
            break;
        case 4:
    P4.Menu();
    total=p.CalcularPrecio()+r.CalcularPrecio()+n.CalcularPrecio()+hd.CalcularPrecio()+i.CalcularPrecio()+ch.CalcularPrecio()+P1.CalcularPrecio()+P2.CalcularPrecio()+P3.CalcularPrecio();//+P4.CalcularPrecio();
    cout<<"Total $" <<total <<endl;
    f.Menu(total);
    salir2=0;
    x=0;
           break;
         case 5:
            salir2=0;
            break;
    }
}while(salir2);
break;

case 3:
            cout<<"**************************************************************************************************************************************"<<endl;
            p.ImprimirDatos();
            r.ImprimirDatos();
            n.ImprimirDatos();
            hd.ImprimirDatos();
            i.ImprimirDatos();
            ch.ImprimirDatos();
            cout<<"**************************************************************************************************************************************"<<endl;
            P1.ImprimirDatos();
            cout<<"**************************************************************************************************************************************"<<endl;
            P2.ImprimirDatos();
            cout<<"**************************************************************************************************************************************"<<endl;
            P3.ImprimirDatos();
            cout<<"**************************************************************************************************************************************"<<endl;
            total=p.CalcularPrecio()+r.CalcularPrecio()+n.CalcularPrecio()+hd.CalcularPrecio()+i.CalcularPrecio()+ch.CalcularPrecio()+P1.CalcularPrecio()+P2.CalcularPrecio()+P3.CalcularPrecio();//+P4.CalcularPrecio();
            cout<<"Total $" <<total <<endl;
            f.Menu(total);
            x=0;
break;
}
} while (x);
return 0;
}
