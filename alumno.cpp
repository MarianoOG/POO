#include <stdio.h>
#include <iostream.h>
#include <windows.h>

//Clases

class alumno{
//atributos
char nombre[25];
char boleta[15];
int semestre;
int calif[5];
//métodos
public:
alumno();
void pedir_info();
void imprimir();
void graficar();
};

alumno::alumno(){
strcpy(nombre,"Default");
strcpy(boleta,"Default");
semestre=0;
for(int i=0;i<=4;i++){
        calif[i]=0;}
}

void alumno::pedir_info(){
int a;
cout<<"****************************************** " <<endl;
cout<<"Introduzca sus datos... " <<endl;
fflush(stdin);
cout<<"Nombre: ";
gets(nombre);
cout<<"Boleta: ";
gets(boleta);
fflush(stdin);
cout<<"Semestre: ";
cin>>semestre;

for (int i=0; i<=4; i++) {
do {
cout<<"Calificacion " <<i+1 <<": ";
cin>>a;
       if (a<=10&a>=0) {
          calif[i]=a;}
       else {
            cout<<"CALIFICACION NO VALIDA, INTRODUZCA DE NUEVO SU CALIFICACION" <<endl;}
} while (a>10|a<0);
}
cout<<"****************************************** " <<endl;
cout<<"Su informacion ha sido guardada con exito... " <<endl;
fflush(stdin);
}

void alumno::imprimir(){    
cout<<"****************************************** " <<endl;
cout<<"            DATOS DEL ALUMNO               " <<endl;
cout<<"****************************************** " <<endl;
cout<<"Nombre: ";
puts(nombre);
cout<<"Boleta: ";
puts(boleta);
cout<<"Semestre: " <<semestre <<endl;
for (int i=0; i<=4; i++) {
cout<<"Calificacion " <<i+1 <<": " <<calif[i] <<endl;}
cout<<"****************************************** " <<endl;
}

void alumno::graficar(){
int max=calif[0];
for (int i=1; i<=4; i++) {
    if (calif[i]>max){
       max=calif[i]; }
}
cout<<"****************************************** " <<endl;
cout<<"             CALIFICACIONES                " <<endl;
cout<<"****************************************** " <<endl;
cout<<"Nombre: ";
puts(nombre);
cout<<"Boleta: ";
puts(boleta);
cout<<"Semestre: " <<semestre <<endl;
cout<<"****************************************** " <<endl;
for (int a=max;a>=1;a--){
    cout<<"                ";
    for (int j=0;j<=4;j++) {
        if (a>calif[j]){
           cout<<"   "; }
        else {
            cout<<" * "; }
    }
    cout<<endl;    
}
cout<<"Calificaciones: ";
for (int k=0;k<=4;k++) {
    if (calif[k]==10) {
       cout<<calif[k] <<" ";}
    else {
       cout<<" " <<calif[k] <<" ";}
}
cout<<endl;
cout<<"****************************************** " <<endl;
}

//variables generales
char op;
int o,op2;

//Principal
int main(){
alumno uno;
//cout<<"****************************************** " <<endl;
//cout<<"                BIENVENIDO...              " <<endl;
//uno.pedir_info();
//system("pause");

do {
system("cls");
cout<<"****************************************** " <<endl;
cout<<"                   MENU                    " <<endl;
cout<<"****************************************** " <<endl;
cout<<"¿Que desea hacer?" <<endl;
cout<<"1. Ver datos del alumno " <<endl;
cout<<"2. Graficar calificaciones " <<endl;
cout<<"3. Editar datos " <<endl;
cout<<"4. Salir " <<endl;
cout<<"****************************************** " <<endl;
cin>>o;
switch (o) {
 case 1:
   system("cls");
   uno.imprimir();
   cout<<"¿Desea regresar al menu (s/n)? ";
   cin>>op;
   fflush(stdin);
   break;
 case 2:
   system("cls");
   uno.graficar();
   cout<<"¿Desea regresar al menu (s/n)? ";
   cin>>op;
   fflush(stdin);
   break;
 case 3:
   system("cls");
   cout<<"****************************************** " <<endl;
   cout<<"                   EDITAR                  " <<endl;
   uno.pedir_info();
   cout<<"¿Desea regresar al menu (s/n)? ";
   cin>>op;
   fflush(stdin);
   break;
 case 4:
   op='n';
   break;
 default:
   cout<<"OPCION NO VALIDA " <<endl;
   Sleep(500);
   op='S';
} } while (op=='s'|op=='S');

system("cls");
cout<<endl <<endl <<endl <<endl;
cout<<"****************************************** " <<endl;
cout<<"                  ADIOS                    " <<endl;
cout<<"****************************************** " <<endl;
Sleep(500);
return 0;
}
