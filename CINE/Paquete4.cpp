#include "Paquete4.h"

Paquete4::Paquete4()
{
    //ctor
}

int Paquete4::Menu()
{   cout<<"\n\t\t\t*PAQUETE CUATRO*\t\t\t\n";
    int menu,salir=1,total;
    do
    {
    cout<<"1. Palomitas"<<endl;
    cout<<"2. Refrescos"<<endl;
    cout<<"3. Nachos"<<endl;
    cout<<"4. Hot-Dog"<<endl;
    cout<<"5. Ice"<<endl;
    cout<<"6. Chocolate"<<endl;
    cout<<"7. Ticket" <<endl;
    cout<<"8. Confirmar" <<endl;
    do{
        cout<<"teclee";
        cin>>menu;
        }while(menu<1||menu>8);


    if (menu>0&&menu<7){EstablecerCantidad();}
    switch(menu)
    {
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
            cout<<"**************************************************************************************************************************************"<<endl;
            p.ImprimirDatos();
            r.ImprimirDatos();
            n.ImprimirDatos();
            hd.ImprimirDatos();
            i.ImprimirDatos();
            ch.ImprimirDatos();
            cout<<"**************************************************************************************************************************************"<<endl;
            total=p.CalcularPrecio()+r.CalcularPrecio()+n.CalcularPrecio()+hd.CalcularPrecio()+i.CalcularPrecio()+ch.CalcularPrecio();
            cout<<"Total: $" <<total<<endl;
            if(CantidadPaquetes<3)
            {
            cout<<"Tu compra será por articulo" <<endl;
            }
            else
            {
            cout<<"Tienes un 5% de descuento" <<endl;
            total=(total*95)/100;
            }
            break;
        case 8:
            if(CantidadPaquetes<3)
            {
            cout<<"Tu compra es por articulo" <<endl;
            total=p.CalcularPrecio()+r.CalcularPrecio()+n.CalcularPrecio()+hd.CalcularPrecio()+i.CalcularPrecio()+ch.CalcularPrecio();
            cout<<"Total " <<total<<"$"<<endl;
            }
            else
            {
            cout<<"Tu compra es por paquete." <<endl;
            total=p.CalcularPrecio()+r.CalcularPrecio()+n.CalcularPrecio()+hd.CalcularPrecio()+i.CalcularPrecio()+ch.CalcularPrecio();
            cout<<"Subtotal " <<total<<"$"<<endl;
            cout<<"Tienes un 5% de descuento" <<endl;
            total=(total*95)/100;
            cout<<"Total " <<total<<"$"<<endl;
            }
            salir=0;
            break;
    }
}
while(salir);
return total;
}

