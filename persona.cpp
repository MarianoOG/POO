#include <stdio.h>
#include <iostream.h>
#include <windows.h>
#include <string.h>

//Clases

class persona {
//atributos
char *nombre;
int edad;
float peso;
//métodos
public:
persona(char *s,int x,float y);
void pedir_info();
void imprimir(); 
};

persona::persona(char *s,int x,float y){
nombre=s;
edad=x;
peso=y;
}

void persona::pedir_info(){

}

void persona::imprimir(){
cout<<"****************************************** " <<endl;
cout<<"Nombre: ";
puts(nombre);
cout<<"Edad: " <<edad <<endl;
cout<<"Peso: " <<peso <<endl;
cout<<"****************************************** " <<endl;
}

//variables generales
char op,n[2][25];
int o,a[2];
float p[2];


//Principal
int main(){
cout<<"****************************************** " <<endl;
cout<<"               PERSONA UNO                 " <<endl;
cout<<"****************************************** " <<endl;
cout<<"Introduce nombre: ";
gets(n[0]);
cout<<"Introduce edad: ";
cin>>a[0];
cout<<"Introduce peso: ";
cin>>p[0];
fflush(stdin);
cout<<"****************************************** " <<endl;
persona uno(n[0],a[0],p[0]);
cout<<"****************************************** " <<endl;
cout<<"               PERSONA DOS                 " <<endl;
cout<<"****************************************** " <<endl;
cout<<"Introduce nombre: ";
gets(n[1]);
cout<<"Introduce edad: ";
cin>>a[1];
cout<<"Introduce peso: ";
cin>>p[1];
fflush(stdin);
cout<<"****************************************** " <<endl;
persona dos(n[1],a[1],p[1]);

do {
system("cls");
cout<<"****************************************** " <<endl;
cout<<"                   MENU                    " <<endl;
cout<<"****************************************** " <<endl;
cout<<"¿Que desea hacer?" <<endl;
cout<<"1. Ver datos del primero " <<endl;
cout<<"2. Ver datos del segundo " <<endl;
cout<<"3. Salir " <<endl;
cout<<"****************************************** " <<endl;
cin>>o;
switch (o) {
 case 1:
   uno.imprimir();
   cout<<"¿Desea regresar al menu (s/n)? ";
   cin>>op;
   fflush(stdin);
   break;
 case 2:
   dos.imprimir();
   cout<<"¿Desea regresar al menu (s/n)? ";
   cin>>op;
   fflush(stdin);
   break;
 case 3:
   op='n';
   break;
 default:
   cout<<"OPCION NO VALIDA " <<endl;
   Sleep(500);
   op='n';
} }while (op=='s'|op=='S');
system("cls");
cout<<endl <<endl <<endl <<endl;
cout<<"****************************************** " <<endl;
cout<<"                  ADIOS                    " <<endl;
cout<<"****************************************** " <<endl;
Sleep(500);
return 0;
}
