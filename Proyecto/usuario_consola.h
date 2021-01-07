#ifndef _usuario_consola_h_
#define _usuario_consola_h_

#include <iostream.h>
#include <stdlib.h>
#include <fstream.h>

//Clase usuario:
class usuario_consola {
/*****************************************************/
/*PARA AÑADIR NUEVO JUEGO:
-crear: int juego[8]. 
-modificar: todos los metodos.
-Definir nuevo juego (#define y enlistar abajo).
-Modificar en menu: crear char de logros (juego[5][50]), summenulogros/siguiente y anterior (valor de juego maximo).
/*****************************************************/
protected:
//Datos:
    char *nombre;
    char *archivo;
    int total;
//Juegos:
    int tetris[8];
    int sigueme[8];
    int nave[8];
/*****************************************************/
/*DEFINICION:
juego[0]=puntuacion;
juego[1]=numero de partidas;
juego[2-6]=logros; (Cumplido 1/Faltante 0)
juego[7]=total_de_logros;
/*****************************************************/
public:
    usuario_consola();
    usuario_consola(char *file);
    void actualizar();
};

usuario_consola::usuario_consola(){}

usuario_consola::usuario_consola(char *file){
//Variables locales:
FILE *datos;
char info[19][50]; //Modificar para nuevo juego
int a=0,logros=0;

archivo=file; //define archivo

//Lee datos del archivo:
datos=fopen(archivo,"r");
if (datos!=NULL){
   while(!feof(datos)){
     fgets(info[a],50,datos);
     fflush(stdin);
     if(!feof(datos)){info[a][strlen(info[a])-1]='\0';}
     //puts(info[a]);
     a++;
   }
fclose(datos);

//Copia datos obtenidos:
nombre=info[2]; //Nombre
total=atoi(info[5]); //Total
tetris[0]=atoi(info[7]); //Puntuacion
tetris[1]=atoi(info[8]); //Numero de partidas
logros=atoi(info[9]);
tetris[2]=logros/10000;
tetris[3]=(logros/1000)%10;
tetris[4]=(logros/100)%10;
tetris[5]=(logros/10)%10;
tetris[6]=logros%10;
tetris[7]=tetris[2]+tetris[3]+tetris[4]+tetris[5]+tetris[6]; //Logros totales.
sigueme[0]=atoi(info[11]); //Puntuacion
sigueme[1]=atoi(info[12]); //Numero de partidas
logros=atoi(info[13]);
sigueme[2]=logros/10000;
sigueme[3]=(logros/1000)%10;
sigueme[4]=(logros/100)%10;
sigueme[5]=(logros/10)%10;
sigueme[6]=logros%10;
sigueme[7]=logros/10000+(logros/1000)%10+(logros/100)%10+(logros/10)%10+logros%10; //Logros totales.
nave[0]=atoi(info[15]); //Puntuacion
nave[1]=atoi(info[16]); //Numero de partidas
logros=atoi(info[17]);
nave[2]=logros/10000;
nave[3]=(logros/1000)%10;
nave[4]=(logros/100)%10;
nave[5]=(logros/10)%10;
nave[6]=logros%10;
nave[7]=logros/10000+(logros/1000)%10+(logros/100)%10+(logros/10)%10+logros%10; //Logros totales.
//Agregar info para lectura de nuevo juego:
}
else {cout<<"Error al abrir el archivo" <<endl;}
}

void usuario_consola::actualizar(){
FILE *file; 
char info[19][50]; //modificar
int a=0;

total=tetris[0]+sigueme[0]+nave[0]; //Agregar nuevos juegos
tetris[7]=tetris[2]+tetris[3]+tetris[4]+tetris[5]+tetris[6];
sigueme[7]=sigueme[2]+sigueme[3]+sigueme[4]+sigueme[5]+sigueme[6];
nave[7]=nave[2]+nave[3]+nave[4]+nave[5]+nave[6];
//Agregar totales de logros de nuevos juegos.

file=fopen(archivo,"r");
if (file!=NULL){
   while(!feof(file)){
     fgets(info[a],50,file);
     fflush(stdin);
     if(!feof(file)){info[a][strlen(info[a])-1]='\0';}
     a++;
   }
}
fclose(file);

strcat(info[2],"\n");

file=fopen(archivo,"w");
if (file!=NULL){
   fprintf(file,"----------------------------------------\n");
   fprintf(file,"NOMBRE\n");
   fputs(info[2],file);
   fprintf(file,"----------------------------------------\n");
   fprintf(file,"PUNTACION TOTAL:\n");
   fprintf(file,"%i\n",total);
   fprintf(file,"TETRIS:\n");
   fprintf(file,"%i\n",tetris[0]);
   fprintf(file,"%i\n",tetris[1]);
   fprintf(file,"%i%i%i%i%i\n",tetris[2],tetris[3],tetris[4],tetris[5],tetris[6]);
   fprintf(file,"SIGUEME:\n");
   fprintf(file,"%i\n",sigueme[0]);
   fprintf(file,"%i\n",sigueme[1]);
   fprintf(file,"%i%i%i%i%i\n",sigueme[2],sigueme[3],sigueme[4],sigueme[5],sigueme[6]);
   fprintf(file,"NAVE:\n");
   fprintf(file,"%i\n",nave[0]);
   fprintf(file,"%i\n",nave[1]);
   fprintf(file,"%i%i%i%i%i\n",nave[2],nave[3],nave[4],nave[5],nave[6]);
   //Agregar nuevos juegos:
   fprintf(file,"----------------------------------------");
}
else {cout<<"Error al abrir el archivo" <<endl;}
fclose(file);
}

//*******************************************************************************************************************************************//
//Nave:

class usuario_nave:public usuario_consola {
public:
    usuario_nave();
    usuario_nave(char *file);
    int puntos();
    void fin(int pts);
    int logros();
    void logros(int L);
};

usuario_nave::usuario_nave(){}

usuario_nave::usuario_nave(char *file){
//Variables locales:
FILE *datos;
char info[19][50]; //Modificar para nuevo juego
int a=0,logros=0;

archivo=file; //define archivo

//Lee datos del archivo:
datos=fopen(archivo,"r");
if (datos!=NULL){
   while(!feof(datos)){
     fgets(info[a],50,datos);
     fflush(stdin);
     if(!feof(datos)){info[a][strlen(info[a])-1]='\0';}
     //puts(info[a]);
     a++;
   }
fclose(datos);

//Copia datos obtenidos:
nombre=info[2]; //Nombre
total=atoi(info[5]); //Total
tetris[0]=atoi(info[7]); //Puntuacion
tetris[1]=atoi(info[8]); //Numero de partidas
logros=atoi(info[9]);
tetris[2]=logros/10000;
tetris[3]=(logros/1000)%10;
tetris[4]=(logros/100)%10;
tetris[5]=(logros/10)%10;
tetris[6]=logros%10;
tetris[7]=tetris[2]+tetris[3]+tetris[4]+tetris[5]+tetris[6]; //Logros totales.
sigueme[0]=atoi(info[11]); //Puntuacion
sigueme[1]=atoi(info[12]); //Numero de partidas
logros=atoi(info[13]);
sigueme[2]=logros/10000;
sigueme[3]=(logros/1000)%10;
sigueme[4]=(logros/100)%10;
sigueme[5]=(logros/10)%10;
sigueme[6]=logros%10;
sigueme[7]=logros/10000+(logros/1000)%10+(logros/100)%10+(logros/10)%10+logros%10; //Logros totales.
nave[0]=atoi(info[15]); //Puntuacion
nave[1]=atoi(info[16]); //Numero de partidas
logros=atoi(info[17]);
nave[2]=logros/10000;
nave[3]=(logros/1000)%10;
nave[4]=(logros/100)%10;
nave[5]=(logros/10)%10;
nave[6]=logros%10;
nave[7]=logros/10000+(logros/1000)%10+(logros/100)%10+(logros/10)%10+logros%10; //Logros totales.
//Agregar info para lectura de nuevo juego:
}
else {cout<<"Error al abrir el archivo" <<endl;}
}

int usuario_nave::puntos(){
int pts;
pts=nave[0];
return pts;
}

void usuario_nave::fin(int pts){
int p;
p=puntos();
if(pts>p){nave[0]=pts;}
nave[1]++;
actualizar();
}

int usuario_nave::logros(){
int a=0;
a=100000+nave[2]*10000+nave[3]*1000+nave[4]*100+nave[5]*10+nave[6];
return a;
}

void usuario_nave::logros(int L){
       nave[2]=(L/10000)%10;
       nave[3]=(L/1000)%10;
       nave[4]=(L/100)%10;
       nave[5]=(L/10)%10;
       nave[6]=L%10;
actualizar();
}

//*******************************************************************************************************************************************//
//Tetris:

class usuario_tetris:public usuario_consola {
public:     
    usuario_tetris();
    usuario_tetris(char *file);
    int puntos();
    void fin(int pts);
    int logros();
    void logros(int L);
};

usuario_tetris::usuario_tetris(){}

usuario_tetris::usuario_tetris(char *file){
//Variables locales:
FILE *datos;
char info[19][50]; //Modificar para nuevo juego
int a=0,logros=0;

archivo=file; //define archivo

//Lee datos del archivo:
datos=fopen(archivo,"r");
if (datos!=NULL){
   while(!feof(datos)){
     fgets(info[a],50,datos);
     fflush(stdin);
     if(!feof(datos)){info[a][strlen(info[a])-1]='\0';}
     //puts(info[a]);
     a++;
   }
fclose(datos);

//Copia datos obtenidos:
nombre=info[2]; //Nombre
total=atoi(info[5]); //Total
tetris[0]=atoi(info[7]); //Puntuacion
tetris[1]=atoi(info[8]); //Numero de partidas
logros=atoi(info[9]);
tetris[2]=logros/10000;
tetris[3]=(logros/1000)%10;
tetris[4]=(logros/100)%10;
tetris[5]=(logros/10)%10;
tetris[6]=logros%10;
tetris[7]=tetris[2]+tetris[3]+tetris[4]+tetris[5]+tetris[6]; //Logros totales.
sigueme[0]=atoi(info[11]); //Puntuacion
sigueme[1]=atoi(info[12]); //Numero de partidas
logros=atoi(info[13]);
sigueme[2]=logros/10000;
sigueme[3]=(logros/1000)%10;
sigueme[4]=(logros/100)%10;
sigueme[5]=(logros/10)%10;
sigueme[6]=logros%10;
sigueme[7]=logros/10000+(logros/1000)%10+(logros/100)%10+(logros/10)%10+logros%10; //Logros totales.
nave[0]=atoi(info[15]); //Puntuacion
nave[1]=atoi(info[16]); //Numero de partidas
logros=atoi(info[17]);
nave[2]=logros/10000;
nave[3]=(logros/1000)%10;
nave[4]=(logros/100)%10;
nave[5]=(logros/10)%10;
nave[6]=logros%10;
nave[7]=logros/10000+(logros/1000)%10+(logros/100)%10+(logros/10)%10+logros%10; //Logros totales.
//Agregar info para lectura de nuevo juego:
}
else {cout<<"Error al abrir el archivo" <<endl;}
}

int usuario_tetris::puntos(){
int pts;
pts=tetris[0];
return pts;
}

void usuario_tetris::fin(int pts){
int p;
p=puntos();
if(pts>p){tetris[0]=pts;}
tetris[1]++;
actualizar();
}

int usuario_tetris::logros(){
int a=0;
a=100000+tetris[2]*10000+tetris[3]*1000+tetris[4]*100+tetris[5]*10+tetris[6];
return a;
}

void usuario_tetris::logros(int L){
       tetris[2]=(L/10000)%10;
       tetris[3]=(L/1000)%10;
       tetris[4]=(L/100)%10;
       tetris[5]=(L/10)%10;
       tetris[6]=L%10;
actualizar();
}

//*******************************************************************************************************************************************//
//*******************************************************************************************************************************************//

int leer_usuario(){
FILE *datos;
char info[2][50]; //Modificar para nuevo juego
int a=0,u;

//Lee datos del archivo:
datos=fopen("usuario.txt","r");
if (datos!=NULL){
   while(!feof(datos)){
     fgets(info[a],50,datos);
     fflush(stdin);
     if(!feof(datos)){info[a][strlen(info[a])-1]='\0';}
     //puts(info[a]);
     a++;
   };
   fclose(datos);
}
else {cout<<"Error al abrir el archivo" <<endl;}
u=atoi(info[0]);
//cout<<u;
return u; 
}

#endif
