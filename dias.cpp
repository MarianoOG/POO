#include <stdio.h>
using namespace std;
#include <iostream.h>
#include <time.h>

//Calula dias vividos
//Supone meses de 31 dias y años de 365 dias

int d,m,a,n,k,ds,ms,as,av,mv,dv,nd;
int dias(int x, int y,int z);
char op;
void mes();
void dia();

int main (){
do {
system("cls");
//Pedir datos de fecha de nacimiento
cout<<"******************************************************* " <<endl;
cout<<"Calcular dias de vida. " <<endl;
cout<<"Introduce el a~o en el que naciste (Formato: 'aaaa'): ";
cin>>a;
cout<<"Introduce el mes en el que naciste (Formato: 'mm'): ";
cin>>m;
cout<<"Introduce el dia en el que naciste (Formato: 'dd'): ";
cin>>d;
cout<<"******************************************************* " <<endl;

//Calcula dias de vida
k=dias(d,m,a);

//Define el dia de hoy
cout<<"Hoy ";
dia();
cout<<" " <<ds <<" de ";
mes();
cout<<" de " <<as <<". " <<endl;

//Imprime resultado:
cout<<"Haz vivido: " <<n <<" dias. " <<endl;

//Resultado en años-dias-
cout<<"Es decir: " <<av <<" a~os, " <<mv <<" meses y " <<dv <<" dias. " <<endl;
cout<<"******************************************************* " <<endl;

//Bucle
cout<<"¿Desea volver a utilizar el programa (s/n)? " <<endl;
cin>>op;
} while ((op=='s')|(op=='S'));
cout<<endl;
cout<<"               ADIOS " <<endl;
cout<<endl;
system("pause");
return 0;
}




//Calcula dias de vida
int dias(int x, int y,int z) {
//Define variables en una manera utilizable...
   time_t tSac = time(NULL);  //Instante actual
   struct tm* pt1 = localtime(&tSac); //Estructura con todos los datos del instante actual
   ds = pt1->tm_mday; 
   ms = pt1->tm_mon+1;
   as = pt1->tm_year+1900;
   nd = pt1->tm_wday;

//Calcula años, meses y dias vividos
if (!(((d<1)|(d>31))|((m>12)|(m<1)))) {
     if (a<as){
               if (m<ms){
                    if (d<ds){
                      av=as-a;
                      mv=ms-m;
                      dv=ds-d;
                    }
                    else if (d>ds) {
                      av=as-a;
                      mv=ms-m-1;
                      dv=31+ds-d;
                    }
                    else {
                      av=as-a;
                      mv=ms-m;
                      dv=0;
                    }
               }
               else if (m>ms) {
                  av=as-a-1;  
                    if (d<ds){
                      mv=12+ms-m;
                      dv=ds-d;
                    }
                    else if (d>ds) {
                      mv=12+ms-m;
                      dv=31+ds-d;
                    }
                    else {
                      mv=12+ms-m;
                      dv=0;
                    }
               }
               else {
                    if (d<ds){
                      av=as-a;
                      mv=0;
                      dv=ds-d;
                    }
                    else if (d>ds) {
                      av=as-a-1;
                      mv=11;
                      dv=31+ds-d;
                    }
                    else {
                      av=as-a;
                      mv=0;
                      dv=0;
                    }
               }
     }
     else if (a>as) {
     cout<<"******************************************************* " <<endl;
     cout<<"*******************                ******************** " <<endl;
     cout<<"*******************  AUN NO NACES  ******************** " <<endl;
     cout<<"*******************                ******************** " <<endl;
     cout<<"******************************************************* " <<endl;
     cout<<"******************************************************* " <<endl;
     }
     else {
          av=0;
               if (m<ms){
                    if (d<ds){
                      mv=ms-m;
                      dv=ds-d;
                    }
                    else if (d>ds) {
                      mv=ms-m-1;
                      dv=31+ds-d;
                    }
                    else {
                      mv=ms-m;
                      dv=0;
                    }
               }
               else if (m>ms) {
                  cout<<"******************************************************* " <<endl;
                  cout<<"*******************                ******************** " <<endl;
                  cout<<"*******************  AUN NO NACES  ******************** " <<endl;
                  cout<<"*******************                ******************** " <<endl;
                  cout<<"******************************************************* " <<endl;
                  cout<<"******************************************************* " <<endl;
                  }
               else {
                  mv=0;
                    if (d<ds){
                      dv=ds-d;
                    }
                    else if (d>ds) {
                       cout<<"******************************************************* " <<endl;
                       cout<<"*******************                ******************** " <<endl;
                       cout<<"*******************  AUN NO NACES  ******************** " <<endl;
                       cout<<"*******************                ******************** " <<endl;
                       cout<<"******************************************************* " <<endl;
                       cout<<"******************************************************* " <<endl;
                    }
                    else {
                      dv=0;
                    }
               }
     }
}
else {
   cout<<"******************************************************* " <<endl;
   cout<<"*****************                   ******************* " <<endl;
   cout<<"*****************  FECHA NO VALIDA  ******************* " <<endl;
   cout<<"*****************                   ******************* " <<endl;
   cout<<"******************************************************* " <<endl;
   cout<<"******************************************************* " <<endl;
}

//Calcula numero de dias vividos
n=av*365+mv*31+dv;
return n;
}



//Nombres de mes y dia
void mes(){
switch (ms) {
       case 1: 
            cout<<"Enero";
            break;
       case 2: 
            cout<<"Febrero";
            break;
       case 3: 
            cout<<"Marzo";
            break;
       case 4: 
            cout<<"Abril";
            break;
       case 5: 
            cout<<"Mayo";
            break;
       case 6: 
            cout<<"Junio";
            break;
       case 7: 
            cout<<"Julio";
            break;
       case 8: 
            cout<<"Agosto";
            break;
       case 9: 
            cout<<"Septiembre";
            break;
       case 10: 
            cout<<"Octubre";
            break;
       case 11: 
            cout<<"Noviembre";
            break;
       case 12: 
            cout<<"Diciembre";
            break;
       default:
            cout<<"Este mensaje no se debe ver nunca" <<endl;
       }    
}

void dia(){
switch (nd){
       case 0: 
            cout<<"Domingo";
            break;
       case 1: 
            cout<<"Lunes";
            break;
       case 2: 
            cout<<"Martes";
            break;
       case 3: 
            cout<<"Miercoles";
            break;
       case 4: 
            cout<<"Jueves";
            break;
       case 5: 
            cout<<"Viernes";
            break;
       case 6: 
            cout<<"Sabado";
            break;
       default:
            cout<<"Este mensaje no se debe ver nunca" <<endl;
       }
}
