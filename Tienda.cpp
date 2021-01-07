//Bibliotecas
#include<stdio.h>
#include<iostream.h>
#include<windows.h>
#include"empleados.h"
#include"articulos.h"

//Variables:  
int a=0,la=0,li=0,r=0,x=500;
int op1,op2;
articulo refri("Refrigerador",3),licuadora("Licuadora",9),aspiradora("Aspiradora",4),lavadora("Lavadora",5);
administrador administrador("Pedro Picapiedra",41,"Administrador");
vendedor vendedor("Pablo Marmol",23,"Vendedor","Electrodomesticos");

//Funciones:
int comprobar(){
     if ((a+li+la+r)<5){return 1;}
     else {cout<<"****** NO ES POSIBLE VENDER MAS ARTICULOS ******" <<endl; return 0;}
}

void ventas(){
cout<<"***************************************************************" <<endl;
cout<<"                         VENTAS                                " <<endl;
cout<<"***************************************************************" <<endl;
cout<<"  CANTIDAD  ||                  ARTICULO                       " <<endl;
cout<<"---------------------------------------------------------------" <<endl;
cout<<"      " <<a <<"     ||               Aspiradora " <<endl;
cout<<"      " <<la <<"     ||               Lavadora " <<endl;
cout<<"      " <<li <<"     ||               Licuadora " <<endl;
cout<<"      " <<r <<"     ||               Refrigerador " <<endl;
cout<<"***************************************************************" <<endl;
}

void vender(){
int o;
cout<<"***************************************************************" <<endl;
cout<<"                          VENDER                               " <<endl;
cout<<"***************************************************************" <<endl;
cout<<"¿QUE DESEA VENDER?" <<endl;
cout<<"1. Aspiradora " <<endl;
cout<<"2. Lavadora " <<endl;
cout<<"3. Licuadora " <<endl;
cout<<"4. Refrigerador " <<endl;
cin>>o;
switch(o){
      case 1:
           if ((comprobar())&&(aspiradora.vender())){a++;}
           break;
      case 2:
           if ((comprobar())&&(lavadora.vender())){la++;} 
           break;
      case 3:
           if ((comprobar())&&(licuadora.vender())){li++;}
           break; 
      case 4:
           if ((comprobar())&&(refri.vender())){r++;}
           break;
      default:
           cout<<"************** OPCION NO VALIDA **************" <<endl;
}
}

//Main:
int main(){

do{
system("cls");
cout<<"***************************************************************" <<endl;
cout<<"                          USUARIO                              " <<endl;
cout<<"***************************************************************" <<endl;
cout<<"1. Vendedor " <<endl;
cout<<"2. Administrador " <<endl;
cout<<"3. Salir " <<endl;
cin>>op1;
switch (op1){
       case 1:
            do{
            system("cls");
            cout<<"***************************************************************" <<endl;
            cout<<"                      MENU - VENDEDOR                          " <<endl;
            cout<<"***************************************************************" <<endl;
            vendedor.imprimir();
            cout<<"***************************************************************" <<endl;
            cout<<"1. Vender" <<endl;
            cout<<"2. Ver ventas del dia" <<endl;
            cout<<"3. Regresar" <<endl;
            cin>>op2;
            switch (op2){
                   case 1:
                        system("cls");
                        vender();
                        system("Pause");
                        break;
                   case 2:
                        system("cls");
                        ventas();
                        system("Pause");
                        break;
                   case 3:
                        break;
                   default:
                        cout<<"************** OPCION NO VALIDA **************" <<endl;
                        Sleep(x);
                   
            }
            }while(op2!=3);
            break;
       case 2:
            do{
            system("cls");
            cout<<"***************************************************************" <<endl;
            cout<<"                  MENU - ADMINISTRADOR                         " <<endl;
            cout<<"***************************************************************" <<endl;
            administrador.imprimir();
            cout<<"***************************************************************" <<endl;
            cout<<"1. Vender" <<endl;
            cout<<"2. Ver Inventario" <<endl;
            cout<<"3. Ver Ventas" <<endl;
            cout<<"4. Regresar" <<endl;
            cin>>op2;
            switch (op2){
                   case 1:
                        system("cls");
                        vender();
                        system("Pause");
                        break;
                   case 2:
                        system("cls");
                        cout<<"***************************************************************" <<endl;
                        cout<<"                       INVENTARIO                              " <<endl;
                        cout<<"***************************************************************" <<endl;
                        cout<<"  CANTIDAD  ||                  ARTICULO                       " <<endl;
                        cout<<"---------------------------------------------------------------" <<endl;
                        aspiradora.imprimir();
                        lavadora.imprimir();
                        licuadora.imprimir();
                        refri.imprimir();
                        cout<<"***************************************************************" <<endl;
                        system("Pause");                        
                        break;
                   case 3:
                        system("cls");
                        ventas();
                        system("Pause");
                        break;
                   case 4:
                        break;
                   default:
                        cout<<"************** OPCION NO VALIDA **************" <<endl;
                        Sleep(x);
            }
            }while(op2!=4);
            break;
       case 3:
            break;
       default:
            cout<<"************** OPCION NO VALIDA **************" <<endl;
            Sleep(x);
}
}while(op1!=3);

return 0;
}
