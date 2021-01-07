#include <stdio.h>
#include <iostream.h>
#include <windows.h>

//Clases

class tarot{
//atributos
int d,m,a,t;
//métodos
public:
tarot();
void calcular();
void imprimir();
};

tarot::tarot(){
d=0;
m=0;
a=0;
t=0;
}

void tarot::calcular(){
cout<<"****************************************** " <<endl;
cout<<"Ingrese fecha de nacimiento: " <<endl;
do {
cout<<"Dia: ";
cin>>d;
if (d<=0|d>31){
   cout<<"Fecha no valida. Introduzcala de nuevo. " <<endl; }
} while(d<=0|d>31);
do {
cout<<"Mes: ";
cin>>m;
if (m<=0|m>12){
   cout<<"Fecha no valida. Introduzcala de nuevo. " <<endl; }
} while(m<=0|m>12);
do {
cout<<"Ano: ";
cin>>a;
if (a<=1900|a>=3000){
   cout<<"Fecha no valida. Introduzcala de nuevo. " <<endl; }
} while(a<=1900|a>=3000);
t=d/10+d%10+m/10+m%10+a/1000+(a/100)%10+(a/10)%10+a%10;
do {
if (t>=10){
           t=t%10+t/10; }
} while(t>=10);
cout<<"Y su numero de tarot es: " <<t <<endl;
}

void tarot::imprimir(){
char suerte[10][70]={" ", "Moriras manana. ","No olvides tu paraguas, llovera. ","Usa este numero y ganaras la loteria. ",
"Ocurrira algo incleible con esa persona que amas. ","Encontraras dinero en la calle. ",
"Tendras oportunidades invaluables no las desaproveches. ","El profesor que odias no dara clase. ",
"Eres lo que piensas, piensa positivamente. ","El mayor peligro puede ser tu propia estupidez. "};    
cout<<"****************************************** " <<endl;
cout<<"Usted nacio el " <<d <<" de " <<m <<" de " <<a <<endl;
cout<<"Y su numero de tarot es: " <<t <<endl;
cout<<suerte[t] <<endl;
cout<<"****************************************** " <<endl;
}

//variables generales
char op;
int o;

//Principal
int main(){
tarot uno;

do {
system("cls");
cout<<"****************************************** " <<endl;
cout<<"                   MENU                    " <<endl;
cout<<"****************************************** " <<endl;
cout<<"¿Que desea hacer?" <<endl;
cout<<"1. Calcular numero " <<endl;
cout<<"2. Ver datos " <<endl;
cout<<"3. Salir " <<endl;
cout<<"****************************************** " <<endl;
cin>>o;
switch (o) {
 case 1:
   uno.calcular();
   cout<<"¿Desea regresar al menu (s/n)? ";
   cin>>op;
   fflush(stdin);
   break;
 case 2:
   uno.imprimir();
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
