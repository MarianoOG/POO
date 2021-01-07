#include "FormadePago.h"

FormadePago::FormadePago()
{
    //ctor
}

void FormadePago::Menu(int total)
{
    int tipopago,pago,efectivo,tarjeta,s;
    cout<<"Tipo de Pago"<<endl;
    cout<<"1. Efectivo"<<endl;
    cout<<"2. tarjeta"<<endl;
    do{
        cout<<"teclee";
    cin>>tipopago;
    }while(tipopago<1||tipopago>2);


    pago=descuento(total);
    switch(tipopago)
    {
        case 1:
        do{
        cout<<"Ingrese cantidad" <<endl;
        cin>>efectivo;
        if(efectivo<pago){
            cout<<"Saldo insuficiente"<<endl;
            s=1;
            }
        else{
            cout<<"Cambio: " <<efectivo-pago <<"$"<<endl<<"!!!GRACIAS POR SU COMPRA!!!"<<endl<<"REGRESE PRONTO";
            s=0;
        }
        }while(s);
        break;
        case 2:
        do{
        cout<<"Ingrese numero de su tarjeta: ";
        cin>>tarjeta;
        if (tarjeta==123456||tarjeta==012345)
        {
            cout<<"Pago exitoso" <<endl<<"!!!GRACIAS POR SU COMPRA!!!"<<"REGRESE PRONTO"<<endl;
            s=0;
        }
        else
        {
            cout<<"Fondos insuficientes" <<endl;
            s=1;
        }
        }while(s);
        break;
    }
}
int FormadePago::descuento(int total)
{
    int tarjeta,condes;
    cout<<"¿cuentas con  tarjeta del cine?"<<endl;
    cout<<"1. si"<<endl;
    cout<<"2. no"<<endl;
    do{
        cout<<"teclee";
    cin>>tarjeta;
    }while(tarjeta<1||tarjeta>2);


    switch(tarjeta)
    {
        case 1:
            cout<<"Tienes descuento del 5% !!!"<<endl;
            condes=(total*95)/100;
            cout<<"ahora tu cuenta es de : "<<condes <<" $"<<endl;
            return condes;
            break;
        case 2:
            cout<<"Tu cuenta es de : "<<total<<" $"<<endl;
            return total;
            break;
    }
}
