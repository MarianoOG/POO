#ifndef _menu_h_
#define _menu_h_

#include <winbgim.h>
#include <iostream.h>
#include <stdlib.h>
#include <fstream.h>
#include "sigueme.h"

void fondo1(int x,int y){
int t[22],s[22];
t[0]=x;t[1]=y;
t[2]=x;t[3]=y+200;
t[4]=x+50;t[5]=y+200;
t[6]=x+50;t[7]=y+150;
t[8]=x+100;t[9]=y+150;
t[10]=x+100;t[11]=y+100;
t[12]=x+150;t[13]=y+100;
t[14]=x+150;t[15]=y+50;
t[16]=x+200;t[17]=y+50;
t[18]=x+200;t[19]=y;
t[20]=x;t[21]=y;
for(int i=0;i<=21;i++){s[i]=t[i]+5;}
setlinestyle(0,0,2);
setcolor(8);
setfillstyle(1,8);
fillpoly(10,s);
setcolor(0);
setbkcolor(4);
setfillstyle(1,4);
fillpoly(10,t); //(puntos,pocisiones)
}

void fondo2(int x,int y){
int t[22],s[22];
t[0]=x;t[1]=y;
t[2]=x+200;t[3]=y;
t[4]=x+200;t[5]=y-50;
t[6]=x+150;t[7]=y-50;
t[8]=x+150;t[9]=y-100;
t[10]=x+100;t[11]=y-100;
t[12]=x+100;t[13]=y-150;
t[14]=x+50;t[15]=y-150;
t[16]=x+50;t[17]=y-200;
t[18]=x;t[19]=y-200;
t[20]=x;t[21]=y;
for(int i=0;i<=21;i++){
    if((i%2)==0){s[i]=t[i]+5;}
    else{s[i]=t[i]-5;}
}
setlinestyle(0,0,2);
setcolor(8);
setfillstyle(1,8);
fillpoly(10,s);
setcolor(0);
setbkcolor(4);
setfillstyle(1,4);
fillpoly(10,t); //(puntos,pocisiones)
}

void fondo3(int x,int y){
int t[22],s[22];
t[0]=x;t[1]=y;
t[2]=x-200;t[3]=y;
t[4]=x-200;t[5]=y+50;
t[6]=x-150;t[7]=y+50;
t[8]=x-150;t[9]=y+100;
t[10]=x-100;t[11]=y+100;
t[12]=x-100;t[13]=y+150;
t[14]=x-50;t[15]=y+150;
t[16]=x-50;t[17]=y+200;
t[18]=x;t[19]=y+200;
t[20]=x;t[21]=y;
for(int i=0;i<=21;i++){
    if(i%2==0){s[i]=t[i]-5;}
    else{s[i]=t[i]+5;}
}setlinestyle(0,0,2);
setcolor(8);
setfillstyle(1,8);
fillpoly(10,s);
setcolor(0);
setbkcolor(4);
setfillstyle(1,4);
fillpoly(10,t); //(puntos,pocisiones)
}

void fondo4(int x,int y){
int t[22],s[22];
t[0]=x;t[1]=y;
t[2]=x-200;t[3]=y;
t[4]=x-200;t[5]=y-50;
t[6]=x-150;t[7]=y-50;
t[8]=x-150;t[9]=y-100;
t[10]=x-100;t[11]=y-100;
t[12]=x-100;t[13]=y-150;
t[14]=x-50;t[15]=y-150;
t[16]=x-50;t[17]=y-200;
t[18]=x;t[19]=y-200;
t[20]=x;t[21]=y;
for(int i=0;i<=21;i++){s[i]=t[i]-5;}
setlinestyle(0,0,2);
setcolor(8);
setfillstyle(1,8);
fillpoly(10,s);
setcolor(0);
setbkcolor(4);
setfillstyle(1,4);
fillpoly(10,t); //(puntos,pocisiones)
}

void fondo_titulo(int x,int y){
int t[26],s[26];
t[0]=x;t[1]=y;
t[2]=x+700;t[3]=y;
t[4]=x+700;t[5]=y-50;
t[6]=x+650;t[7]=y-50;
t[8]=x+650;t[9]=y-100;
t[10]=x+600;t[11]=y-100;
t[12]=x+600;t[13]=y-150;
t[14]=x+100;t[15]=y-150;
t[16]=x+100;t[17]=y-100;
t[18]=x+50;t[19]=y-100;
t[20]=x+50;t[21]=y-50;
t[22]=x;t[23]=y-50;
t[24]=x;t[25]=y;
for(int i=0;i<=25;i++){s[i]=t[i]+5;}
setlinestyle(0,0,2);
setcolor(8);
setfillstyle(1,8);
fillpoly(12,s);
for(int i=0;i<=25;i++){s[i]=t[i]-5;}
fillpoly(12,s);
setcolor(0);
setbkcolor(2);
setfillstyle(1,2);
fillpoly(12,t); //(puntos,pocisiones)
settextstyle(9,0,9);
outtextxy(x+355-textwidth("MENU")/2,y-80-textheight("MENU")/2,"MENU");
}

void boton_tetris(int x,int y,int estado){
setcolor(0);
switch (estado){
   case 0: //APAGADO
     setbkcolor(9);
     setfillstyle(1,9);
     break;
   case 1: //PRENDIDO
     setbkcolor(COLOR(238,134,0));
     setfillstyle(1,COLOR(238,134,0));
     break;
   default:
     cout<<"Este mensaje nunca deberia aparecer (boton_tetris)" <<endl;
}
bar3d(x,y,x+200,y+50,5,1);
settextstyle(10,0,3);
outtextxy(x+100-textwidth("Tetris")/2,y+10,"Tetris");
}

void boton_nave(int x,int y,int estado){
setcolor(0);
switch (estado){
   case 0: //APAGADO
     setbkcolor(9);
     setfillstyle(1,9);
     break;
   case 1: //PRENDIDO
     setbkcolor(COLOR(238,134,0));
     setfillstyle(1,COLOR(238,134,0));
     break;
   default:
     cout<<"Este mensaje nunca deberia aparecer (boton_nave)" <<endl;
}
bar3d(x,y,x+200,y+50,5,1);
settextstyle(10,0,3);
outtextxy(x+100-textwidth("Nave")/2,y+10,"Nave");
}

void boton_sigueme(int x,int y,int estado){
setcolor(0);
switch (estado){
   case 0: //APAGADO
     setbkcolor(9);
     setfillstyle(1,9);
     break;
   case 1: //PRENDIDO
     setbkcolor(COLOR(238,134,0));
     setfillstyle(1,COLOR(238,134,0));
     break;
   default:
     cout<<"Este mensaje nunca deberia aparecer (boton_sigueme)" <<endl;
}
bar3d(x,y,x+200,y+50,5,1);
settextstyle(10,0,3);
outtextxy(x+100-textwidth("Sigueme")/2,y+10,"Sigueme");
}

void boton_usuarios(int x,int y,int estado){
setcolor(0);
switch (estado){
   case 0: //APAGADO
     setbkcolor(9);
     setfillstyle(1,9);
     break;
   case 1: //PRENDIDO
     setbkcolor(COLOR(238,134,0));
     setfillstyle(1,COLOR(238,134,0));
     break;
   default:
     cout<<"Este mensaje nunca deberia aparecer (boton_usuarios)" <<endl;
}
bar3d(x,y,x+200,y+50,5,1);
settextstyle(10,0,3);
outtextxy(x+100-textwidth("Usuarios")/2,y+10,"Usuarios");
}

void boton_salir(int x,int y,int estado){
setcolor(0);
switch (estado){
   case 0: //APAGADO
     setbkcolor(9);
     setfillstyle(1,9);
     break;
   case 1: //PRENDIDO
     setbkcolor(COLOR(255,134,0));
     setfillstyle(1,COLOR(255,134,0));
     break;
   default:
     cout<<"Este mensaje nunca deberia aparecer (boton_salir)" <<endl;
}
bar3d(x,y,x+200,y+50,5,1);
settextstyle(10,0,3);
outtextxy(x+100-textwidth("Salir")/2,y+10,"Salir");
}

void fondo(int estado){
if(estado!=0){
   for(int i=0;i<=25;i++){
      setbkcolor(14);
      cleardevice();
      fondo_titulo(100,10*i);
      Sleep(25);
   }
   for(int i=0;i<=24;i++){
      fondo1(-100+4*i,-100+4*i);
      fondo2(-100+4*i,700-4*i);
      fondo3(1000-4*i,-100+4*i);
      fondo4(1000-4*i,700-4*i);
      if(i>5){boton_tetris(100,300,1);boton_nave(600,300,0);}
      if(i>10){boton_sigueme(350,300,0);}
      if(i>15){boton_usuarios(350,400,0);}
      if(i>20){boton_salir(350,500,0);}
      Sleep(25);
   }
}
fondo1(0,0);
fondo2(0,600);
fondo3(900,0);
fondo4(900,600);
}

void cambiar_a_consola(){
int t[74],s[74];
t[0]=50;t[1]=250;
t[2]=100;t[3]=250;
t[4]=100;t[5]=200;
t[6]=150;t[7]=200;
t[8]=150;t[9]=150;
t[10]=200;t[11]=150;
t[12]=200;t[13]=100;
t[14]=250;t[15]=100;
t[16]=250;t[17]=50;
t[18]=650;t[19]=50;
t[20]=650;t[21]=100;
t[22]=700;t[23]=100;
t[24]=700;t[25]=150;
t[26]=750;t[27]=150;
t[28]=750;t[29]=200;
t[30]=800;t[31]=200;
t[32]=800;t[33]=250;
t[34]=850;t[35]=250;
t[36]=850;t[37]=350;
t[38]=800;t[39]=350;
t[40]=800;t[41]=400;
t[42]=750;t[43]=400;
t[44]=750;t[45]=450;
t[46]=700;t[47]=450;
t[48]=700;t[49]=500;
t[50]=650;t[51]=500;
t[52]=650;t[53]=550;
t[54]=250;t[55]=550;
t[56]=250;t[57]=500;
t[58]=200;t[59]=500;
t[60]=200;t[61]=450;
t[62]=150;t[63]=450;
t[64]=150;t[65]=400;
t[66]=100;t[67]=400;
t[68]=100;t[69]=350;
t[70]=50;t[71]=350;
t[72]=50;t[73]=250;
setlinestyle(0,0,2);
setcolor(8);
setfillstyle(1,8);
for(int i=0;i<=73;i++){s[i]=t[i]+5;}
fillpoly(36,s);
for(int i=0;i<=73;i++){s[i]=t[i]-5;}
fillpoly(36,s);
setcolor(0);
setbkcolor(2);
setfillstyle(1,2);
fillpoly(36,t); //(puntos,pocisiones)
settextstyle(9,0,7);
outtextxy(450-textwidth("Para jugar:")/2,150-textheight("Para jugar:")/2,"Para jugar:");
settextstyle(9,0,4);
outtextxy(450-textwidth("Cambie a pantalla consola (alt+tab).")/2,210,"Cambie a pantalla consola (alt+tab).");
settextstyle(9,0,6);
outtextxy(450-textwidth("Terminando de jugar:")/2,325,"Terminando de jugar:");
settextstyle(9,0,4);
outtextxy(450-textwidth("Presione cualquier tecla")/2,410,"Presione cualquier tecla");
outtextxy(450-textwidth("para continuar.")/2,460,"para continuar.");
getch();
}

//*******************************************************************************************************************************************//

void menu_principal(int perfil){
//Inicio de Variables:
int usuario=perfil;
int continuar=1,return_1,pos_1[5];
char op_1;

do{
pos_1[0]=1;
for(int i=1;i<=4;i++){pos_1[i]=0;}
cleardevice();
setbkcolor(14);
clearviewport();
//Animacion de entrada:
fondo(1);

do{
while(1){
return_1=0;

for(return_1;return_1<=8;return_1++){
if(pos_1[return_1]==1){break;}
}

//Dibujar fondo y encabezados:
fondo(0);

//Dibujar botones:
boton_tetris(100,300,pos_1[0]);
boton_sigueme(350,300,pos_1[1]);
boton_nave(600,300,pos_1[2]);
boton_usuarios(350,400,pos_1[3]);
boton_salir(350,500,pos_1[4]);

op_1=getch();
if(op_1!=0){break;}
};
if(op_1==KEY_RIGHT){
if(pos_1[1]==1){pos_1[1]=0;pos_1[2]=1;}
if(pos_1[0]==1){pos_1[0]=0;pos_1[1]=1;}
}
if(op_1==KEY_DOWN){
if(pos_1[3]==1){pos_1[3]=0;pos_1[4]=1;}
if(pos_1[0]==1){pos_1[0]=0;pos_1[3]=1;}
if(pos_1[1]==1){pos_1[1]=0;pos_1[3]=1;}
if(pos_1[2]==1){pos_1[2]=0;pos_1[3]=1;}
}
if(op_1==KEY_LEFT){
if(pos_1[1]==1){pos_1[1]=0;pos_1[0]=1;}
if(pos_1[2]==1){pos_1[2]=0;pos_1[1]=1;}
}
if(op_1==KEY_UP){
if(pos_1[3]==1){pos_1[3]=0;pos_1[1]=1;}
if(pos_1[4]==1){pos_1[4]=0;pos_1[3]=1;}
}
if(op_1==KEY_CENTER||op_1==13){break;}
}while(!kbhit());

switch (return_1){
   case 0:
        system("cls");
        WinExec("tetris.exe",SW_SHOW); 
        cambiar_a_consola();
        break;
   case 1:
        juego_sigueme(usuario);
        break;
   case 2:
        system("cls");
        WinExec("nave.exe",SW_SHOW); 
        cambiar_a_consola();
        break;
   case 3:
        usuario=menu_usuarios();
        break;
   case 4:
        continuar=0;
        break;
   default:
        cout<<"Este mensaje no debe verse (menu_principal/swich o1)" <<endl;
}

}while(continuar);
}

#endif
