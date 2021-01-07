#include <iostream.h>
#include <stdio.h>
#include <windows.h>

class radio {
int volumen;
char* genero;
float estacion;
public:
radio();
void cambiar_estacion();
void subir_vol();
void bajar_vol();
void imprimir();
};

radio::radio(){
volumen=5;
estacion=71.7;
strcpy(genero,"Pop");
}

void radio::cambiar_estacion(){
float est[6]={71.7,82.3,89.5,99.3,101.3,123.5};
char gen[6][10]={"Pop","Noticias","Rock","Pop","Disco","Noticias"};
int k=0,t;

do {
system("cls");
if (k==5){
    k=0;}
else {    
     k++;}
estacion=est[k];
strcpy(genero,gen[k]);
cout<<"La estacion se ha cambiado" <<endl;
cout<<"Estas escuchando: ";
puts(genero);
cout<<"en tu estacion: " <<estacion <<endl;
cout<<"¿Desea volver a cambiar la estacion (1/0)?" <<endl;
cin>>t;
fflush(stdin);
} while (t==1);
}


void radio::subir_vol(){
int t;
do {
volumen++;
cout<<"El volumen es: " <<volumen <<endl;
cout<<"¿Desea volver a subir el volumen (1/0)?" <<endl;
cin>>t;
fflush(stdin);
} while (t==1);
}

void radio::bajar_vol(){
int t;
do {
volumen--;
cout<<"El volumen es: " <<volumen <<endl;
cout<<"¿Desea volver a bajar el volumen (1/0)?" <<endl;
cin>>t;
fflush(stdin);
} while (t==1);
}

void radio::imprimir(){
cout<<"*********************************************************" <<endl;
cout<<"                           RADIO                         " <<endl;
cout<<"*********************************************************" <<endl;
cout<<"Estas escuchando: ";
puts(genero);
cout<<"en tu estacion: " <<estacion <<endl;
cout<<"Volumen: " <<volumen <<endl;
cout<<"*********************************************************" <<endl;
}

char op='s';
int o;

int main (){
radio A;

do {
op='s';
system("cls");
A.imprimir();
cout<<"¿Que desea hacer?" <<endl;
cout<<"1. Subir el volumen" <<endl;
cout<<"2. Bajar el volumen" <<endl;
cout<<"3. Sintonizar estacion" <<endl;
cout<<"4. Apagar" <<endl;
cin>>o;
fflush(stdin);
switch (o){
       case 1:
            A.subir_vol();
            system ("pause");
            break;
       case 2:
            A.bajar_vol();
            system ("pause");
            break;
       case 3:
            A.cambiar_estacion();
            system ("pause");
            break;
       case 4:
            op='n';
            break;
       default:   
            cout<<endl<<endl <<"OPCION NO VALIDA. ";
            Sleep(700);
}    
} while (op=='s');
return 0;
}
