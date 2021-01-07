#ifndef _usuarios_h_
#define _usuarios_h_

#define TETRIS 1
#define SIGUEME 2
#define NAVE 3
//Agregar nuevos juegos:
#define GLOBAL 100

#define APAGADO 0
#define PRENDIDO 1

#include <winbgim.h>
#include <iostream.h>
#include <stdlib.h>
#include <fstream.h>

//*******************************************************************************************************************************************//
//*******************************************************************************************************************************************//

//FUNCIONES:
void Click();
int ClickOn(int x1,int y1,int x2,int y2);
void telarana();
void instrucciones();
int menu_usuarios();
//BOTONES:
void b_cambiar_nombre(int x,int y,int estado);
void b_ver_detalles(int x,int y,int estado);
void b_iniciar_sesion(int x,int y,int estado);
void b_regresar(int x,int y,int estado);
void b_salir(int x,int y,int estado);
void b_aceptar(int x,int y,int estado);
void b_cancelar(int x,int y,int estado);
void b_anterior(int x,int y,int estado);
void b_siguiente(int x,int y,int estado);

//*******************************************************************************************************************************************//
//*******************************************************************************************************************************************//

//Clase usuario:
class usuario {

/*****************************************************/
/*PARA AÑADIR NUEVO JUEGO:
-crear: int juego[8]. 
-modificar: todos los metodos.
-Definir nuevo juego (#define y enlistar abajo).
-Modificar en menu: crear char de logros (juego[5][50]), summenulogros/siguiente y anterior (valor de juego maximo).
/*****************************************************/
/*JUEGOS:
TETRIS (1)
SIGUEME (2)
NAVE (3)
//Agregar nuevos juegos.
GLOBAL (100)
/*****************************************************/
/*ESTADO:
APAGADO (0)
PRENDIDO (1)
/*****************************************************/

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
    usuario(char *file);
    void actualizar();
    void dibujar(int x,int y);
    void dibujar_nombre(int x,int y,int estado);
    void cambiar_nombre(char *n);
    int puntos(int juego);
    int partidas(int juego);
    void fin(int juego,int pts);
    int logros(int juego);
    void logros(int juego,int L);
};

usuario::usuario(char *file){
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

void usuario::actualizar(){
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

void usuario::dibujar(int x,int y){
/*Crea rectángulo de 300x200 con origen en esquina superior izquierda*/

//Variables locales:
FILE *datos;
int a=0,b;
char info[19][50],logros[3][2]; //Modificar para nuevos juegos.

//Obtiene datos:
datos=fopen(archivo,"r");
if (datos!=NULL){
   while(!feof(datos)){
     fgets(info[a],50,datos);
     fflush(stdin);
     if(!feof(datos)){info[a][strlen(info[a])-1]='\0';}
     a++;
   }
}
fclose(datos);
itoa(tetris[7],logros[0],10);
itoa(sigueme[7],logros[1],10);
itoa(nave[7],logros[2],10);
//Agregar para nuevo juego

//Dibuja encabezado:
setcolor(0);
setfillstyle(1,1);
setbkcolor(1);
bar3d(x,y,x+300,y+200,5,1);
setcolor(2);
settextstyle(10,0,2);
outtextxy(x+150-(textwidth(info[2])/2),y+5,info[2]); //Nombre
setcolor(0);
line(x,y+35,x+300,y+35);

//Dibuja otros datos:
settextstyle(3,0,2);
setcolor(3);
outtextxy(x+10,y+40,"TOTAL DE PUNTOS:");
outtextxy(x+280-textwidth(info[5]),y+40,info[5]); //Total
settextstyle(8,0,1);
outtextxy(x+30,y+75,"Tetris:"); 
outtextxy(x+280-textwidth(info[7]),y+75,info[7]); //Puntuacion tetris
outtextxy(x+30,y+100,"Sigueme:"); 
outtextxy(x+280-textwidth(info[11]),y+100,info[11]); //Puntuacion sigueme
outtextxy(x+30,y+125,"Nave:"); 
outtextxy(x+280-textwidth(info[15]),y+125,info[15]); //Puntuacion sigueme
//Agregar nuevos juegos (subir 25 px en y)
}

void usuario::dibujar_nombre(int x,int y,int estado){
/*Dibuja rectangulo de 200x35 con origen en la esquina superior izquierda*/

//Variables locales:
FILE *datos;
int a=0;
char info[19][50]; //Subir 4 con nuevo juego

//Obtiene datos:
datos=fopen(archivo,"r");
if (datos!=NULL){
   while(!feof(datos)){
     fgets(info[a],50,datos);
     fflush(stdin);
     if(!feof(datos)){info[a][strlen(info[a])-1]='\0';}
     //puts(info[a]);
     a++;
   }
}
fclose(datos);
setcolor(0);
switch (estado){
   case 0: //APAGADO
     setbkcolor(2);
     setfillstyle(1,2);
     break;
   case 1: //PRENDIDO
     setbkcolor(4);
     setfillstyle(1,4);
     break;
   default:
     cout<<"Este mensaje nunca deberia aparecer (usuario::dibujar_nombre)" <<endl;
}
bar3d(x,y,x+200,y+35,5,1);
settextstyle(10,0,2);
outtextxy(x+10,y+5,info[2]); //Nombre
}

void usuario::cambiar_nombre(char *n){
FILE *file; 
char nom[50];
nombre=n;

total=tetris[0]+sigueme[0]+nave[0]; //Agregar nuevos juegos
tetris[7]=tetris[2]+tetris[3]+tetris[4]+tetris[5]+tetris[6];
sigueme[7]=sigueme[2]+sigueme[3]+sigueme[4]+sigueme[5]+sigueme[6];
nave[7]=nave[2]+nave[3]+nave[4]+nave[5]+nave[6];
//Agregar totales de logros de nuevos juegos.

strcpy(nom,nombre);
strcat(nom,"\n");
file=fopen(archivo,"w");
if (file!=NULL){
   fprintf(file,"----------------------------------------\n");
   fprintf(file,"NOMBRE\n");
   fputs(nom,file);
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

int usuario::puntos(int juego){
int pts;
switch (juego){
  case 1:
     pts=tetris[0];
     break;
  case 2:
     pts=sigueme[0];
     break;
  case 3:
     pts=nave[0];
     break;
  //Agregar casos para juegos nuevos.
  case 100:
     pts=total;
     break;
  default:
     cout<<"Este mensaje nunca debe verse (int usuario::puntos)" <<endl;
}
return pts;
}

int usuario::partidas(int juego){
int n;
switch (juego){
  case 1:
     n=tetris[1];
     break;
  case 2:
     n=sigueme[1];
     break;
  case 3:
     n=nave[1];
     break;
  //Agregar casos para juegos nuevos.
  default:
     cout<<"Este mensaje nunca debe verse (int usuario::puntos)" <<endl;
}
return n;
}


void usuario::fin(int juego,int pts){
int p;
p=puntos(juego);
switch (juego){
    case 1:
      if(pts>p){
         tetris[0]=pts;
      }
      tetris[1]++;
      break;
    case 2:
      if(pts>p){
         sigueme[0]=pts;
      }
      sigueme[1]++;
      break;
    case 3:
      if(pts>p){
         nave[0]=pts;
      }
      nave[1]++;
      break;
    //Anadir informacion para nuevos juegos.  
    default:
      cout<<"Este mensaje nunca debe verse (void usuario::fin)" <<endl;
}
actualizar();
}

int usuario::logros(int juego){
int a=0;
switch (juego){
  case 1:
     a=100000+tetris[2]*10000+tetris[3]*1000+tetris[4]*100+tetris[5]*10+tetris[6];
     break;
  case 2:
     a=100000+sigueme[2]*10000+sigueme[3]*1000+sigueme[4]*100+sigueme[5]*10+sigueme[6];
     break;
  case 3:
     a=100000+nave[2]*10000+nave[3]*1000+nave[4]*100+nave[5]*10+nave[6];
     break;
  //Agregar casos para juegos nuevos.
  default:
     cout<<"Este mensaje nunca debe verse (int usuario::logros)" <<endl;
}
return a;
}

void usuario::logros(int juego,int L){
switch (juego){
   case 1:
       tetris[2]=(L/10000)%10;
       tetris[3]=(L/1000)%10;
       tetris[4]=(L/100)%10;
       tetris[5]=(L/10)%10;
       tetris[6]=L%10;
       break;
   case 2:
       sigueme[2]=(L/10000)%10;
       sigueme[3]=(L/1000)%10;
       sigueme[4]=(L/100)%10;
       sigueme[5]=(L/10)%10;
       sigueme[6]=L%10;
       break;
   case 3:
       nave[2]=(L/10000)%10;
       nave[3]=(L/1000)%10;
       nave[4]=(L/100)%10;
       nave[5]=(L/10)%10;
       nave[6]=L%10;
       break;
   //Añadir nuevos juegos
   default:
       cout<<"Este mensaje no deberia verse (void usuario::logros)" <<endl;
}
actualizar();
}

//*******************************************************************************************************************************************//
//*******************************************************************************************************************************************//

//FUNCIONES:

void Click() {
    clearmouseclick(WM_LBUTTONDOWN);
    while (!ismouseclick(WM_LBUTTONDOWN))
        delay(1);
}

int ClickOn(int x1,int y1,int x2,int y2){
    clearmouseclick(WM_LBUTTONDOWN);
    int x,y;
    while (!ismouseclick(WM_LBUTTONDOWN))
         delay(1);
    x=mousex();
    y=mousey();
    if(x>=x1&&x<=x2&&y>=y1&&y<=y2){return 1;}
    else{return 0;}
}

void telarana(){
setlinestyle(0,0,3);
setcolor(14);
setfillstyle(2,14);
for(int i=1;i<=16;i++){
  ellipse(0,600,0,90,75*i,50*i);
  if(i<=6){line(0,600,900,600-100*i);}
  else{line(0,600,900-150*(i-6),0);}
  fillellipse(0,600,75,50);
  Sleep(100);
  }
Sleep(100);
}

void instrucciones(){
setcolor(0);
setfillstyle(1,14);
setbkcolor(14);
bar3d(550,100,880,385,5,1);
line(550,135,880,135);
settextstyle(10,0,2);
setcolor(2);
outtextxy(715-(textwidth("INSTRUCCIONES"))/2,105,"INSTRUCCIONES");
setcolor(1);
settextstyle(9,0,1);
outtextxy(560,150,"-Vaya a la ventana de fondo");
outtextxy(560,175," negro (alt+tab) ");
outtextxy(560,205,"-Ingrese el nombre");
outtextxy(560,235,"-Confirme el nombre que");
outtextxy(560,260," aparece en pantalla");
setfillstyle(1,3);
bar3d(565,310,865,360,5,1);
}

//*******************************************************************************************************************************************//

int menu_usuarios(){
//Variables locales:
usuario uno("1.txt");
usuario dos("2.txt");
usuario tres("3.txt");
usuario cuatro("4.txt");
usuario cinco("5.txt");
usuario seis("6.txt");
usuario siete("7.txt");
usuario ocho("8.txt");
usuario nueve("9.txt");
char op_1,op_2,op_3;
char nombre_temp[50];
int pos_1[9],pos_2[5],pos_3[4];
int return_1,return_2,return_3;
int regresar_1,regresar_2,continuar;
int perfil=1;
int juego,temp_logros,logros[6],puntuacion,partidas;
char str_puntuacion[16],str_partidas[8],str_logros[2];
char tetris[5][30]={"Alcanzar los 200 pts","Alcanzar los 400 pts","Alcanzar los 600 pts","Alcanzar los 800 pts","Alcanzar los 1000 pts"};
char sigueme[5][30]={"Jugar 1000 partidas","Llegar al nivel 10","Llegar al nivel 20","Llegar al nivel 30","Llegar al nivel 40"};
char nave[5][30]={"Llegar al nivel 10","Llegar al nivel 15","Llegar al nivel 20","Llegar al nivel 25","Llegar al nivel 30"};
//Agregar nuevos juegos...

//Usuario predefinido:
     FILE *file;
     file=fopen("usuario.txt","w");
     if (file!=NULL){fprintf(file,"%i",1);}
     else{cout<<"Fallo al abrir archivo (iniciar sesion/Guardar perfil)"<<endl;}
     fclose(file);
     
//Inicio de variables:
do{
continuar=1;
regresar_1=0;
pos_1[0]=1;
for(int i=1;i<=8;i++){pos_1[i]=0;}
pos_2[0]=1;
for(int i=1;i<=4;i++){pos_2[i]=0;}

//Color de fondo:
cleardevice();
setbkcolor(9);
clearviewport();
setlinestyle(0,0,1);

//Encabezado: ***ELIJA UN USUARIO***
setcolor(0);
setbkcolor(6);
setfillstyle(1,6);
bar3d(10,20,880,80,5,1);
settextstyle(10,0,2);
outtextxy(450-(textwidth("***ELIJA UN USUARIO***"))/2,50-(textheight("***ELIJA UN USUARIO***"))/2,"***ELIJA UN USUARIO***");

//MENU ELEGIR USUARIOS:
do{
while(1){
return_1=0;
uno.dibujar_nombre(10,100,pos_1[0]);
dos.dibujar_nombre(10,150,pos_1[1]);
tres.dibujar_nombre(10,200,pos_1[2]);
cuatro.dibujar_nombre(10,250,pos_1[3]);
cinco.dibujar_nombre(10,300,pos_1[4]);
seis.dibujar_nombre(10,350,pos_1[5]);
siete.dibujar_nombre(10,400,pos_1[6]);
ocho.dibujar_nombre(10,450,pos_1[7]);
nueve.dibujar_nombre(10,500,pos_1[8]);

setcolor(0);
setbkcolor(14);
setfillstyle(1,14);
bar3d(250,550,500,585,5,1);
settextstyle(10,0,2);
outtextxy(260,555,"USUARIO ACTIVO: ");
switch (perfil){   
  case 1:
    uno.dibujar_nombre(500,550,PRENDIDO);
    break;
  case 2:
    dos.dibujar_nombre(500,550,PRENDIDO);
    break;
  case 3:
    tres.dibujar_nombre(500,550,PRENDIDO);
    break;
  case 4:
    cuatro.dibujar_nombre(500,550,PRENDIDO);
    break;
  case 5:
    cinco.dibujar_nombre(500,550,PRENDIDO);
    break;
  case 6:
    seis.dibujar_nombre(500,550,PRENDIDO);
    break;
  case 7:
    siete.dibujar_nombre(500,550,PRENDIDO);
    break;
  case 8:
    ocho.dibujar_nombre(500,550,PRENDIDO);
    break;
  case 9:
    nueve.dibujar_nombre(500,550,PRENDIDO);
    break;
  default:
    cout<<"Este mensaje nunca debe verse (Menu_usuarios/opciones de usuario/iniciar sesion)" <<endl;
}

for(return_1;return_1<=8;return_1++){
if(pos_1[return_1]==1){break;}
}
op_1=getch();
if(op_1==KEY_UP){
if(pos_1[0]==0){pos_1[return_1]=0;pos_1[return_1-1]=1;}
else{pos_1[0]=0;pos_1[8]=1;}
}
if(op_1==KEY_DOWN){
if(pos_1[8]==0){pos_1[return_1]=0;pos_1[return_1+1]=1;}
else{pos_1[8]=0;pos_1[0]=1;}
}
if(op_1!=0){break;}
};
if(op_1==KEY_CENTER||op_1==13){break;}
}while(!kbhit());

//Encabezado: ***MENU USUARIO***
setcolor(0);
setbkcolor(6);
setfillstyle(1,6);
bar3d(10,20,880,80,5,1);
settextstyle(10,0,2);
outtextxy(450-(textwidth("***MENU USUARIO***"))/2,50-(textheight("***MENU USUARIO***"))/2,"***MENU USUARIO***");

//Ver usuario y elegir opcion de usuario:
do{
while(1){
return_2=0;
setfillstyle(1,9);
bar(550,90,900,540);
b_cambiar_nombre(230,312,pos_2[0]);
b_ver_detalles(230,359,pos_2[1]);
b_iniciar_sesion(230,406,pos_2[2]);
b_regresar(230,453,pos_2[3]);
b_salir(230,500,pos_2[4]);
switch (return_1){
   case 0:
     uno.dibujar(230,100);
     break;
   case 1:
     dos.dibujar(230,100);
     break;
   case 2:
     tres.dibujar(230,100);
     break;
   case 3:
     cuatro.dibujar(230,100);
     break;
   case 4:
     cinco.dibujar(230,100);
     break;
   case 5:
     seis.dibujar(230,100);
     break;
   case 6:
     siete.dibujar(230,100);
     break;
   case 7:
     ocho.dibujar(230,100);
     break;
   case 8:
     nueve.dibujar(230,100);
     break;
   default:
     cout<<"Este mensaje nunca debe verse (Menu_usuarios/Ver usuario elegido)" <<endl;
}
for(return_2;return_2<=3;return_2++){
if(pos_2[return_2]==1){break;}
}
op_2=getch();
if(pos_2[0]==0&&op_2==KEY_UP){pos_2[return_2]=0;pos_2[return_2-1]=1;}
if(pos_2[4]==0&&op_2==KEY_DOWN){pos_2[return_2]=0;pos_2[return_2+1]=1;}
if(op_2!=0){break;}
};

if(op_2==KEY_CENTER||op_2==13){
pos_3[0]=1;
for(int i=1;i<=3;i++){pos_3[i]=0;}
regresar_2=0;
//Opciones de usuario:
switch (return_2){
   case 0: //cambiar_nombre
     instrucciones();
     system("cls");
     cout<<"*******************************************************************" <<endl;
     cout<<"                           CAMBIO DE NOMBRE                        " <<endl;
     cout<<"*******************************************************************" <<endl;
     cout<<"Introduzca nombre: ";
     gets(nombre_temp);
     fflush(stdin);
     cout<<"Regrese a la ventana grafica (alt+tab)" <<endl;
     cout<<"*******************************************************************" <<endl;
     setbkcolor(3);
     setfillstyle(1,3);
     settextstyle(10,0,2);
     outtextxy(715-(textwidth(nombre_temp))/2,322,nombre_temp);
     do{
     while(1){
     return_3=0;
     b_aceptar(550,400,pos_3[0]);
     b_cancelar(755,400,pos_3[1]);
     b_regresar(565,450,pos_3[2]);
     b_salir(565,500,pos_3[3]);
     for(return_3;return_3<=3;return_3++){if(pos_3[return_3]==1){break;}
     }
     op_3=getch();
     if(pos_3[2]==1&&op_3==KEY_DOWN){pos_3[2]=0;pos_3[3]=1;}
     if(pos_3[0]==1&&op_3==KEY_RIGHT){pos_3[0]=0;pos_3[1]=1;}
     if(pos_3[0]==1&&op_3==KEY_DOWN){pos_3[0]=0;pos_3[2]=1;}
     if(pos_3[1]==1&&op_3==KEY_LEFT){pos_3[1]=0;pos_3[0]=1;}
     if(pos_3[1]==1&&op_3==KEY_DOWN){pos_3[1]=0;pos_3[2]=1;}
     if(pos_3[2]==1&&(op_3==KEY_UP||op_3==KEY_RIGHT)){pos_3[2]=0;pos_3[1]=1;}
     if(pos_3[2]==1&&op_3==KEY_LEFT){pos_3[2]=0;pos_3[0]=1;}
     if(pos_3[3]==1&&op_3==KEY_UP){pos_3[3]=0;pos_3[2]=1;}
     if(op_3!=0){break;}
     };
     if(op_3==KEY_CENTER||op_3==13){
     switch (return_3){
         case 0: //aceptar
            switch (return_1){
              case 0:
                  uno.cambiar_nombre(nombre_temp);
                  uno.dibujar(230,100);
                  break;
              case 1:
                  dos.cambiar_nombre(nombre_temp);
                  dos.dibujar(230,100);
                  break;
              case 2:
                  tres.cambiar_nombre(nombre_temp);
                  tres.dibujar(230,100);
                  break;
              case 3:
                  cuatro.cambiar_nombre(nombre_temp);
                  cuatro.dibujar(230,100);
                  break;
              case 4:
                  cinco.cambiar_nombre(nombre_temp);
                  cinco.dibujar(230,100);
                  break;
              case 5:
                  seis.cambiar_nombre(nombre_temp);
                  seis.dibujar(230,100);
                  break;
              case 6:
                  siete.cambiar_nombre(nombre_temp);
                  siete.dibujar(230,100);
                  break;
              case 7:
                  ocho.cambiar_nombre(nombre_temp);
                  ocho.dibujar(230,100);
                  break;
              case 8:
                  nueve.cambiar_nombre(nombre_temp);
                  nueve.dibujar(230,100);
                  break;
              default:
                  cout<<"Este mensaje nunca debe verse (Menu_usuarios/opciones usuario/cambiar nombre)" <<endl;
            }
            uno.dibujar_nombre(10,100,pos_1[0]);
            dos.dibujar_nombre(10,150,pos_1[1]);
            tres.dibujar_nombre(10,200,pos_1[2]);
            cuatro.dibujar_nombre(10,250,pos_1[3]);
            cinco.dibujar_nombre(10,300,pos_1[4]);
            seis.dibujar_nombre(10,350,pos_1[5]);
            siete.dibujar_nombre(10,400,pos_1[6]);
            ocho.dibujar_nombre(10,450,pos_1[7]);
            nueve.dibujar_nombre(10,500,pos_1[8]);
            switch (perfil){   
               case 1:
                   uno.dibujar_nombre(500,550,APAGADO);
                   break;
               case 2:
                   dos.dibujar_nombre(500,550,APAGADO);
                   break;
               case 3:
                   tres.dibujar_nombre(500,550,APAGADO);
                   break;
                case 4:
                   cuatro.dibujar_nombre(500,550,APAGADO);
                   break;
                case 5:
                   cinco.dibujar_nombre(500,550,APAGADO);
                   break;
                case 6:
                   seis.dibujar_nombre(500,550,APAGADO);
                   break;
                case 7:
                   siete.dibujar_nombre(500,550,APAGADO);
                   break;
                case 8:
                   ocho.dibujar_nombre(500,550,APAGADO);
                   break;
                case 9:
                   nueve.dibujar_nombre(500,550,APAGADO);
                   break;
                default:
                   cout<<"Este mensaje nunca debe verse (Menu_usuarios/opciones de usuario/iniciar sesion)" <<endl;
            }
            regresar_2=1;
            break;
         case 1: //cancelar
            regresar_2=1;
            break;
         case 2: //regresar
            regresar_2=1;
            break; 
         case 3: //salir
            telarana();
            continuar=0; 
            break; 
         default:
            cout<<"Este mensaje nunca debe verse (Menu_usuarios/opcion de usuario/cambiar nombre)" <<endl;
         }
     }
     if(continuar==0||regresar_2){break;}
     }while(!kbhit());
     break;
   case 1: //ver_detalles
     juego=1;
     do{
     while(1){
     return_3=0;
     switch (return_1){
       case 0:
          puntuacion=uno.puntos(juego);
          partidas=uno.partidas(juego);
          temp_logros=uno.logros(juego);
          break;
       case 1:
          puntuacion=dos.puntos(juego);
          partidas=dos.partidas(juego);
          temp_logros=dos.logros(juego);
          break;
       case 2:
          puntuacion=tres.puntos(juego);
          partidas=tres.partidas(juego);
          temp_logros=tres.logros(juego);
          break;
       case 3:
          puntuacion=cuatro.puntos(juego);
          partidas=cuatro.partidas(juego);
          temp_logros=cuatro.logros(juego);
          break;
       case 4:
          puntuacion=cinco.puntos(juego);
          partidas=cinco.partidas(juego);
          temp_logros=cinco.logros(juego);
          break;
       case 5:
          puntuacion=seis.puntos(juego);
          partidas=seis.partidas(juego);
          temp_logros=seis.logros(juego);
          break;
       case 6:
          puntuacion=siete.puntos(juego);
          partidas=siete.partidas(juego);
          temp_logros=siete.logros(juego);
          break;
       case 7:
          puntuacion=ocho.puntos(juego);
          partidas=ocho.partidas(juego);
          temp_logros=ocho.logros(juego);
          break;
       case 8:
          puntuacion=nueve.puntos(juego);
          partidas=nueve.partidas(juego);
          temp_logros=nueve.logros(juego);
          break;
       default:
          cout<<"Este mensaje nunca debe verse (Menu_usuarios/opciones de usuario/Ver detalles/extraer info de usuario)" <<endl;
     }
     logros[0]=(temp_logros/10000)%10;
     logros[1]=(temp_logros/1000)%10;
     logros[2]=(temp_logros/100)%10;
     logros[3]=(temp_logros/10)%10;
     logros[4]=temp_logros%10;
     logros[5]=logros[0]+logros[1]+logros[2]+logros[3]+logros[4];
     itoa(puntuacion,str_puntuacion,10);
     itoa(partidas,str_partidas,10);
     itoa(logros[5],str_logros,10);
     setcolor(0);
     setfillstyle(1,14);
     setbkcolor(14);
     bar3d(550,100,880,385,5,1);
     line(550,135,880,135);
     setcolor(6);
     settextstyle(9,0,1);
     outtextxy(560,150,"Puntuacion:");
     outtextxy(870-textwidth(str_puntuacion),150,str_puntuacion);
     outtextxy(560,175,"Partidas jugadas:");
     outtextxy(870-textwidth(str_partidas),175,str_partidas);
     outtextxy(560,200,"Logros:");     
     outtextxy(870-textwidth(str_logros),200,str_logros);
     settextstyle(10,0,2);
     setcolor(2);
     switch (juego){
       case 1:   
         outtextxy(715-(textwidth("Tetris"))/2,105,"Tetris");       
         settextstyle(9,0,1);
         for(int i=0;i<=4;i++){
            if (logros[i]==0){setcolor(7);}
            else{setcolor(1);}
            outtextxy(570,225+i*30,tetris[i]);
         }
         break;
       case 2:   
         outtextxy(715-(textwidth("Sigueme"))/2,105,"Sigueme");       
         settextstyle(9,0,1);
         for(int i=0;i<=4;i++){
            if (logros[i]==0){setcolor(7);}
            else{setcolor(1);}
            outtextxy(570,225+i*30,sigueme[i]);
         }
         break;
       case 3:   
         outtextxy(715-(textwidth("Nave"))/2,105,"Nave");       
         settextstyle(9,0,1);
         for(int i=0;i<=4;i++){
            if (logros[i]==0){setcolor(7);}
            else{setcolor(1);}
            outtextxy(570,225+i*30,nave[i]);
         }
         break;
       //Anadir nuevos juegos.
       Default:
         cout<<"Este mensaje nunca debe verse (Menu_usuarios/opciones de usuario/Ver detalles/impresion logros)" <<endl;
     }          
     b_anterior(550,400,pos_3[0]);
     b_siguiente(830,400,pos_3[1]);
     b_regresar(565,450,pos_3[2]);
     b_salir(565,500,pos_3[3]);
     for(return_3;return_3<=3;return_3++){
        if(pos_3[return_3]==1){break;}
     }
     op_3=getch();
     if(pos_3[2]==1&&op_3==KEY_DOWN){pos_3[2]=0;pos_3[3]=1;}
     if(pos_3[0]==1&&op_3==KEY_RIGHT){pos_3[0]=0;pos_3[1]=1;}
     if(pos_3[0]==1&&op_3==KEY_DOWN){pos_3[0]=0;pos_3[2]=1;}
     if(pos_3[1]==1&&op_3==KEY_LEFT){pos_3[1]=0;pos_3[0]=1;}
     if(pos_3[1]==1&&op_3==KEY_DOWN){pos_3[1]=0;pos_3[2]=1;}
     if(pos_3[2]==1&&(op_3==KEY_UP||op_3==KEY_RIGHT)){pos_3[2]=0;pos_3[1]=1;}
     if(pos_3[2]==1&&op_3==KEY_LEFT){pos_3[2]=0;pos_3[0]=1;}
     if(pos_3[3]==1&&op_3==KEY_UP){pos_3[3]=0;pos_3[2]=1;}
     if(op_3!=0){break;}
     };
     if(op_3==KEY_CENTER||op_3==13){
     switch (return_3){
         case 0: //anterior
             if(juego==1){juego=3;} //Modificar al juego maximo
             else{juego--;}
             break;
         case 1: //siguiente
             if(juego==3){juego=1;} //Modificar al juego maximo (en condicion)
             else{juego++;}
             break;
         case 2: //regresar
             regresar_2=1;
             break; 
         case 3: //salir
             telarana();
             continuar=0; 
             break; 
         default:
            cout<<"Este mensaje nunca debe verse (Menu_usuarios/opcion de usuario/cambiar nombre)" <<endl;
         }
     }
     if(continuar==0||regresar_2){break;}
     }while(!kbhit());
     break;
   case 2: //iniciar sesion
     perfil=return_1+1;
     switch (perfil){   
        case 1:
           uno.dibujar_nombre(500,550,APAGADO);
           break;
        case 2:
           dos.dibujar_nombre(500,550,APAGADO);
           break;
        case 3:
           tres.dibujar_nombre(500,550,APAGADO);
           break;
        case 4:
           cuatro.dibujar_nombre(500,550,APAGADO);
           break;
        case 5:
           cinco.dibujar_nombre(500,550,APAGADO);
           break;
        case 6:
           seis.dibujar_nombre(500,550,APAGADO);
           break;
        case 7:
           siete.dibujar_nombre(500,550,APAGADO);
           break;
        case 8:
           ocho.dibujar_nombre(500,550,APAGADO);
           break;
        case 9:
           nueve.dibujar_nombre(500,550,APAGADO);
           break;
        default:
           cout<<"Este mensaje nunca debe verse (Menu_usuarios/opciones de usuario/iniciar sesion)" <<endl;
     }
     //Guardar perfil: 
     FILE *file;
     file=fopen("usuario.txt","w");
     if (file!=NULL){fprintf(file,"%i",perfil);}
     else{cout<<"Fallo al abrir archivo (iniciar sesion/Guardar perfil)"<<endl;}
     fclose(file);
     break;
   case 3: //regresar
     regresar_1=1;
     break;
   case 4: //salir
     telarana();
     continuar=0;
     break;
   default:
     cout<<"Este mensaje nunca debe verse (Menu_usuarios/Ver usuario elegido)" <<endl;
   }
}
if(((op_2==KEY_CENTER||op_2==13)&&continuar==0)||regresar_1){break;}
}while(!kbhit());

}while(continuar);

return perfil;
}

//*******************************************************************************************************************************************//
//*******************************************************************************************************************************************//

//BOTONES:

void b_cambiar_nombre(int x,int y,int estado){
/*Crea rectángulo de 300x35 con origen en esquina superior izquierda*/
setcolor(0);
switch (estado){
   case 0: //APAGADO
     setbkcolor(2);
     setfillstyle(1,2);
     break;
   case 1: //PRENDIDO
     setbkcolor(4);
     setfillstyle(1,4);
     break;
   default:
     cout<<"Este mensaje nunca deberia aparecer (b_cambiar_nombre)" <<endl;
}
bar3d(x,y,x+300,y+35,5,1);
settextstyle(10,0,2);
outtextxy(x+10,y+5,"Cambiar nombre");
}

void b_ver_detalles(int x,int y,int estado){
/*Crea rectángulo de 300x35 con origen en esquina superior izquierda*/
setcolor(0);
switch (estado){
   case 0: //APAGADO
     setbkcolor(2);
     setfillstyle(1,2);
     break;
   case 1: //PRENDIDO
     setbkcolor(4);
     setfillstyle(1,4);
     break;
   default:
     cout<<"Este mensaje nunca deberia aparecer (b_ver_detalles)" <<endl;
}
bar3d(x,y,x+300,y+35,5,1);
settextstyle(10,0,2);
outtextxy(x+10,y+5,"Ver detalles");
}

void b_iniciar_sesion(int x,int y,int estado){
/*Crea rectángulo de 300x35 con origen en esquina superior izquierda*/
setcolor(0);
switch (estado){
   case 0: //APAGADO
     setbkcolor(2);
     setfillstyle(1,2);
     break;
   case 1: //PRENDIDO
     setbkcolor(4);
     setfillstyle(1,4);
     break;
   default:
     cout<<"Este mensaje nunca deberia aparecer (b_iniciar_sesion)" <<endl;
}
bar3d(x,y,x+300,y+35,5,1);
settextstyle(10,0,2);
outtextxy(x+10,y+5,"Iniciar sesion");
}

void b_regresar(int x,int y,int estado){
/*Crea rectángulo de 300x35 con origen en esquina superior izquierda*/
setcolor(0);
switch (estado){
   case 0: //APAGADO
     setbkcolor(2);
     setfillstyle(1,2);
     break;
   case 1: //PRENDIDO
     setbkcolor(4);
     setfillstyle(1,4);
     break;
   default:
     cout<<"Este mensaje nunca deberia aparecer (b_regresar)" <<endl;
}
bar3d(x,y,x+300,y+35,5,1);
settextstyle(10,0,2);
outtextxy(x+10,y+5,"Regresar");
}

void b_salir(int x,int y,int estado){
/*Crea rectángulo de 300x35 con origen en esquina superior izquierda*/
setcolor(0);
switch (estado){
   case 0: //APAGADO
     setbkcolor(2);
     setfillstyle(1,2);
     break;
   case 1: //PRENDIDO
     setbkcolor(4);
     setfillstyle(1,4);
     break;
   default:
     cout<<"Este mensaje nunca deberia aparecer (b_salir)" <<endl;
}
bar3d(x,y,x+300,y+35,5,1);
settextstyle(10,0,2);
outtextxy(x+10,y+5,"Salir");
}

void b_aceptar(int x,int y,int estado){
setcolor(0);
switch (estado){
   case 0: //APAGADO
     setbkcolor(2);
     setfillstyle(1,2);
     break;
   case 1: //PRENDIDO
     setbkcolor(4);
     setfillstyle(1,4);
     break;
   default:
     cout<<"Este mensaje nunca deberia aparecer (b_aceptar)" <<endl;
}
bar3d(x,y,x+125,y+35,5,1);
settextstyle(10,0,2);
outtextxy(x+15,y+5,"Aceptar");
}

void b_cancelar(int x,int y,int estado){
setcolor(0);
switch (estado){
   case 0: //APAGADO
     setbkcolor(2);
     setfillstyle(1,2);
     break;
   case 1: //PRENDIDO
     setbkcolor(4);
     setfillstyle(1,4);
     break;
   default:
     cout<<"Este mensaje nunca deberia aparecer (b_cancelar)" <<endl;
}
bar3d(x,y,x+125,y+35,5,1);
settextstyle(10,0,2);
outtextxy(x+10,y+5,"Cancelar");
}

void b_anterior(int x,int y,int estado){
setcolor(0);
switch (estado){
   case 0: //APAGADO
     setbkcolor(2);
     setfillstyle(1,2);
     break;
   case 1: //PRENDIDO
     setbkcolor(4);
     setfillstyle(1,4);
     break;
   default:
     cout<<"Este mensaje nunca deberia aparecer (b_anterior)" <<endl;
}
bar3d(x,y,x+50,y+35,5,1);
settextstyle(10,0,2);
outtextxy(x+10,y+5,"<<");
}

void b_siguiente(int x,int y,int estado){
setcolor(0);
switch (estado){
   case 0: //APAGADO
     setbkcolor(2);
     setfillstyle(1,2);
     break;
   case 1: //PRENDIDO
     setbkcolor(4);
     setfillstyle(1,4);
     break;
   default:
     cout<<"Este mensaje nunca deberia aparecer (b_siguiente)" <<endl;
}
bar3d(x,y,x+50,y+35,5,1);
settextstyle(10,0,2);
outtextxy(x+10,y+5,">>");
}

#endif
