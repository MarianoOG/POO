#include <iostream.h>
#include <windows.h>
//clases
class celular {
//atributos
char modelo[15];
char marca[15];
float precio;
float saldo;
//métodos
public:
celular();
void pedir_info();
void dibujo();
void recarga();
float llamar();
float enviar_msn();
void imprimir();
};

celular::celular(){
saldo=0;
}

void celular::recarga(){
int recarga;
cout<<"****************************************** " <<endl;
cout<<"¿Que monto desea recargar? " <<endl;
cout<<"     1)  $500.00 " <<endl;
cout<<"     2)  $200.00 " <<endl;
cout<<"     3)  $100.00 " <<endl;
cout<<"     4)  $ 50.00 " <<endl;
cout<<"     5)  $ 20.00 " <<endl;
cout<<"****************************************** " <<endl;
cin>>recarga;
switch (recarga) {
       case 1:
            saldo=saldo+500;
            cout<<"Se han abonado $500.00 exitosamente " <<endl;
            break;
       case 2:
            saldo=saldo+200;
            cout<<"Se han abonado $200.00 exitosamente " <<endl;
            break;
       case 3:
            saldo=saldo+100;
            cout<<"Se han abonado $100.00 exitosamente " <<endl;
            break;
       case 4:
            saldo=saldo+50;
            cout<<"Se han abonado $50.00 exitosamente " <<endl;
            break;
       case 5:
            saldo=saldo+20;
            cout<<"Se han abonado $20.00 exitosamente " <<endl;
            break;
       default: cout<<"  ***OPCION NO VALIDA*** " <<endl;
}
cout<<"Su saldo actual es de: " <<saldo <<" pesos." <<endl;
}


void celular::pedir_info(){
cout<<"****************************************** " <<endl;
cout<<"Introduzca los datos de su nuevo celular... " <<endl;
cout<<"Modelo: ";
gets(modelo);
cout<<"Marca: ";
gets(marca);
fflush(stdin);
cout<<"Precio: ";
cin>>precio;
cout<<"Saldo: ";
cin>>saldo;
cout<<"****************************************** " <<endl;
}

void celular::dibujo(){
cout<<"***                 " <<endl;
cout<<"***                 " <<endl;
cout<<"***                 " <<endl;
cout<<"******************* " <<endl;
cout<<"******************* " <<endl;
cout<<"***             *** " <<endl;
cout<<"***             *** " <<endl;
cout<<"***             *** " <<endl;
cout<<"***             *** " <<endl;
cout<<"***             *** " <<endl;
cout<<"******************* " <<endl;
cout<<"******************* " <<endl;
cout<<"*** 1 ** 2 ** 3 *** " <<endl;
cout<<"**** **** ********* " <<endl;
cout<<"*** 4 ** 5 ** 6 *** " <<endl;
cout<<"**** **** ********* " <<endl;
cout<<"*** 7 ** 8 ** 9 *** " <<endl;
cout<<"******************* " <<endl;
cout<<"******************* " <<endl;
}

float celular::llamar(){
char otra;
do {
if (saldo>=3.80) {
   saldo=saldo-3.80;
   cout<<"¿Desea hacer otra llamada (s/n)? ";
   cin>>otra; }
else {
    cout<<"         ***SALDO INSUFICIENTE*** " <<endl;
    cout<<"  (Se recomienda realizar una recarga) " <<endl;
    otra='n';
}
}while (otra=='s'|otra=='S');
return saldo;
}

float celular::enviar_msn(){
char otra2;
do {
if (saldo>=1.50) {
   saldo=saldo-1.50;
   cout<<"¿Desea mandar otro mensaje (s/n)? ";
   cin>>otra2; }
else {
    cout<<"         ***SALDO INSUFICIENTE*** " <<endl;
    cout<<"  (Se recomienda realizar una recarga) " <<endl;
    otra2='n';
}
}while (otra2=='s'|otra2=='S');
return saldo;
}

void celular::imprimir(){
cout<<"****************************************** " <<endl;
cout<<"Modelo: ";
puts(modelo);
cout<<"Marca: ";
puts(marca);
cout<<"Precio: " <<precio <<endl;
cout<<"Saldo: " <<saldo <<endl;
cout<<"****************************************** " <<endl;
}

//Funciones

void apagar(){
int x=320;
system("cls");
cout<<endl; cout<<endl; cout<<endl; cout<<endl; cout<<endl;
cout<<" #                    # " <<endl;
cout<<" #                    # " <<endl;
cout<<" #                    # " <<endl;
cout<<" #                    # " <<endl;
cout<<" #                  .-# " <<endl;
cout<<" #                 __|# " <<endl;
cout<<" #                o)__# " <<endl;
cout<<" #_____________ o (__(# " <<endl;
cout<<" #~ ~ ~ ~ ~ ~ ~< >~ ~ # " <<endl;
cout<<" #              |     # " <<endl;
Sleep(x);
system("cls");
cout<<endl; cout<<endl; cout<<endl; cout<<endl; cout<<endl;
cout<<" #                    # " <<endl;
cout<<" #                    # " <<endl;
cout<<" #                    # " <<endl;
cout<<" #                   (# " <<endl;
cout<<" #                 .--# " <<endl;
cout<<" #                __||# " <<endl;
cout<<" #               o)__ # " <<endl;
cout<<" #_____________ o __(*# " <<endl;
cout<<" #~ ~ ~ ~ ~ ~ ~< >~ ~ # " <<endl;
cout<<" #              |     # " <<endl;
Sleep(x);
system("cls");
cout<<endl; cout<<endl; cout<<endl; cout<<endl; cout<<endl;
cout<<" #                    # " <<endl;
cout<<" #                    # " <<endl;
cout<<" #                   (# " <<endl;
cout<<" #                  ()# " <<endl;
cout<<" #                .--.# " <<endl;
cout<<" #               __||_# " <<endl;
cout<<" #              ~)__ |# " <<endl;
cout<<" #_____________.o _(*)# " <<endl;
cout<<" #~ ~ ~ ~ ~ ~ ~< >~ ~ # " <<endl;
cout<<" #              |     # " <<endl;
Sleep(x);
system("cls");
cout<<endl; cout<<endl; cout<<endl; cout<<endl; cout<<endl;
cout<<" #                    # " <<endl;
cout<<" #                    # " <<endl;
cout<<" #                  ( # " <<endl;
cout<<" #                 (  # " <<endl;
cout<<" #               .--. # " <<endl;
cout<<" #              __||__# " <<endl;
cout<<" #             o)__ |_# " <<endl;
cout<<" #____________< o (*)_# " <<endl;
cout<<" #~ ~ ~ ~ ~ ~ ~< >~ ~ # " <<endl;
cout<<" #              |     # " <<endl;
Sleep(x);
system("cls");
cout<<endl; cout<<endl; cout<<endl; cout<<endl; cout<<endl;
cout<<" #                    # " <<endl;
cout<<" #                    # " <<endl;
cout<<" #                  ( # " <<endl;
cout<<" #                  ) # " <<endl;
cout<<" #              .--.  # " <<endl;
cout<<" #             __||___# " <<endl;
cout<<" #            o)__ |_ # " <<endl;
cout<<" #___________<( o *)_(# " <<endl;
cout<<" #~ ~ ~ ~ ~ ~ ~< >~ ~ # " <<endl;
cout<<" #              |     # " <<endl;
Sleep(x);
system("cls");
cout<<endl; cout<<endl; cout<<endl; cout<<endl; cout<<endl;
cout<<" #                    # " <<endl;
cout<<" #                   (# " <<endl;
cout<<" #                (   # " <<endl;
cout<<" #               ()   # " <<endl;
cout<<" #             .--.  -# " <<endl;
cout<<" #            __||___|# " <<endl;
cout<<" #           o)__ |_ |# " <<endl;
cout<<" #__________<(  o )_(*# " <<endl;
cout<<" #~ ~ ~ ~ ~ ~ ~< >~ ~ # " <<endl;
cout<<" #              |     # " <<endl;
Sleep(x);
system("cls");
cout<<endl; cout<<endl; cout<<endl; cout<<endl; cout<<endl;
cout<<" #                    # " <<endl;
cout<<" #                  ( # " <<endl;
cout<<" #                 ) )# " <<endl;
cout<<" #              (     # " <<endl;
cout<<" #            .--.  --# " <<endl;
cout<<" #           __||___|[# " <<endl;
cout<<" #          o)__ |_ | # " <<endl;
cout<<" #_________<(_  o _(*)# " <<endl;
cout<<" #~ ~ ~ ~ ~ ~ ~< >~ ~ # " <<endl;
cout<<" #              |     # " <<endl;
Sleep(x);
system("cls");
cout<<endl; cout<<endl; cout<<endl; cout<<endl; cout<<endl;
cout<<" #                    # " <<endl;
cout<<" #                    # " <<endl;
cout<<" #                 ) )# " <<endl;
cout<<" #              ()    # " <<endl;
cout<<" #           .--.  ---# " <<endl;
cout<<" #          __||___|[_# " <<endl;
cout<<" #         o)__ |_ | .# " <<endl;
cout<<" #________<(_ ( o (*)_# " <<endl;
cout<<" #~ ~ ~ ~ ~ ~ ~< >~ ~ # " <<endl;
cout<<" #              |     # " <<endl;
Sleep(x);
system("cls");
cout<<endl; cout<<endl; cout<<endl; cout<<endl; cout<<endl;
cout<<" #                  ( # " <<endl;
cout<<" #                (  )# " <<endl;
cout<<" #             ( ) )  # " <<endl;
cout<<" #            ()      # " <<endl;
cout<<" #          .--.  ----# " <<endl;
cout<<" #         __||___|[_]# " <<endl;
cout<<" #        o)__ |_ | ..# " <<endl;
cout<<" #_______<(__(* o *)_~# " <<endl;
cout<<" #~ ~ ~ ~ ~ ~ ~< >~ ~ # " <<endl;
cout<<" #              |     # " <<endl;
Sleep(x);
system("cls");
cout<<endl; cout<<endl; cout<<endl; cout<<endl; cout<<endl;
cout<<" #                  ( # " <<endl;
cout<<" #                   )# " <<endl;
cout<<" #             (   )  # " <<endl;
cout<<" #            (       # " <<endl;
cout<<" #         .--.  -----# " <<endl;
cout<<" #        __||___|[_]|# " <<endl;
cout<<" #       o)__ |_ | ..|# " <<endl;
cout<<" #______<(__(*) o )_~_# " <<endl;
cout<<" #~ ~ ~ ~ ~ ~ ~< >~ ~ # " <<endl;
cout<<" #              |     # " <<endl;
Sleep(x);
system("cls");
cout<<endl; cout<<endl; cout<<endl; cout<<endl; cout<<endl;
cout<<" #                    # " <<endl;
cout<<" #              (  )  # " <<endl;
cout<<" #           ( )      # " <<endl;
cout<<" #          (         # " <<endl;
cout<<" #        .--.  ----- # " <<endl;
cout<<" #       __||___|[_]| # " <<endl;
cout<<" #      o)__ |_ | ..|=# " <<endl;
cout<<" #_____<(__(*)_ o _~__# " <<endl;
cout<<" #~ ~ ~ ~ ~ ~ ~< >~ ~ # " <<endl;
cout<<" #              |     # " <<endl;
Sleep(x);
system("cls");
cout<<endl; cout<<endl; cout<<endl; cout<<endl; cout<<endl;
cout<<" #               (    # " <<endl;
cout<<" #                )  )# " <<endl;
cout<<" #            )       # " <<endl;
cout<<" #         ()        _# " <<endl;
cout<<" #       .--.  ----- |# " <<endl;
cout<<" #      __||___|[_]| |# " <<endl;
cout<<" #     o)__ |_ | ..|=|# " <<endl;
cout<<" #____<(__(*)_( o ~___# " <<endl;
cout<<" #~ ~ ~ ~ ~ ~ ~< >~ ~ # " <<endl;
cout<<" #              |     # " <<endl;
Sleep(x);
}

//variables generales
char op;
int n;
float s;

//Principal
int main(){
celular uno;
uno.pedir_info();

do {
system("cls");
uno.imprimir();
cout<<"¿Qué desea hacer con su nuevo celular? " <<endl;
cout<<"   1. Visualizar modelo " <<endl;
cout<<"   2. Llamar " <<endl;
cout<<"   3. Enviar mensaje " <<endl;
cout<<"   4. Recarga " <<endl;
cout<<"   5. Apagar " <<endl;
cin>>n;
cout<<"****************************************** " <<endl;
switch (n) {
case 1:
     system("cls");
     uno.dibujo();
     cout<<"¿Desea apagar su celular (s/n)? ";
     cin>>op;
     break;
case 2:
     s=uno.llamar();
     cout<<"Su saldo actual es: " <<s <<". " <<endl;
     cout<<"¿Desea apagar su celular (s/n)? ";
     cin>>op;
     break;
case 3:
     s=uno.enviar_msn();
     cout<<"Su saldo actual es: " <<s <<". " <<endl;
     cout<<"¿Desea apagar su celular (s/n)? ";
     cin>>op;
     break;
case 4:
     system("cls");
     uno.recarga();
     cout<<"¿Desea apagar su celular (s/n)? ";
     cin>>op;
     break;
case 5:
     op='s';
     break;
default:
    cout<<"   ***OPCION NO VALIDA*** " <<endl;
    cout<<"¿Desea apagar su celular (s/n)? ";
    cin>>op;
}
}while (op=='n'|op=='N');
apagar();
return 0;
}
