#ifndef _sigueme_h_
#define _sigueme_h_

#include "usuarios.h"
#include "sonidos.h"
#include <time.h>

//******************************************************************************************************************************************//

void titulo(int x,int y){
int c=20,t[188],s[188];
//Inicio:
t[0]=x;t[1]=y;
t[2]=x;t[3]=y-c;
t[4]=x+c;t[5]=y-c;
t[6]=x+c;t[7]=y-2*c;
t[8]=x+2*c;t[9]=y-2*c;
t[10]=x+2*c;t[11]=y-3*c;
t[12]=x+3*c;t[13]=y-3*c;
t[14]=x+3*c;t[15]=y-4*c;
t[16]=x+4*c;t[17]=y-4*c;
t[18]=x+4*c;t[19]=y-1*c;
//S:
t[20]=x+8*c;t[21]=y-1*c;
t[22]=x+8*c;t[23]=y-2*c;
t[24]=x+5*c;t[25]=y-2*c;
t[26]=x+5*c;t[27]=y-5*c;
t[28]=x+8*c;t[29]=y-5*c;
t[30]=x+8*c;t[31]=y-4*c;
t[32]=x+6*c;t[33]=y-4*c;
t[34]=x+6*c;t[35]=y-3*c;
t[36]=x+9*c;t[37]=y-3*c;
t[38]=x+9*c;t[39]=y-1*c;
//I:
t[40]=x+10*c;t[41]=y-1*c;
t[42]=x+10*c;t[43]=y-4*c;
t[44]=x+9*c;t[45]=y-4*c;
t[46]=x+9*c;t[47]=y-5*c;
t[48]=x+12*c;t[49]=y-5*c;
t[50]=x+12*c;t[51]=y-4*c;
t[52]=x+11*c;t[53]=y-4*c;
t[54]=x+11*c;t[55]=y-1*c;
//G:
t[56]=x+13*c;t[57]=y-1*c;
t[58]=x+13*c;t[59]=y-5*c;
t[60]=x+16*c;t[61]=y-5*c;
t[62]=x+16*c;t[63]=y-4*c;
t[64]=x+14*c;t[65]=y-4*c;
t[66]=x+14*c;t[67]=y-1*c;
t[68]=x+16*c;t[69]=y-1*c;
t[70]=x+16*c;t[71]=y-2*c;
t[72]=x+15*c;t[73]=y-2*c;
t[74]=x+15*c;t[75]=y-3*c;
t[76]=x+17*c;t[77]=y-3*c;
t[78]=x+17*c;t[79]=y-1*c;
//U:
t[80]=x+18*c;t[81]=y-1*c;
t[82]=x+18*c;t[83]=y-5*c;
t[84]=x+19*c;t[85]=y-5*c;
t[86]=x+19*c;t[87]=y-1*c;
t[88]=x+20*c;t[89]=y-1*c;
t[90]=x+20*c;t[91]=y-5*c;
t[92]=x+21*c;t[93]=y-5*c;
t[94]=x+21*c;t[95]=y-1*c;
//E:
t[96]=x+22*c;t[97]=y-1*c;
t[98]=x+22*c;t[99]=y-5*c;
t[100]=x+25*c;t[101]=y-5*c;
t[102]=x+25*c;t[103]=y-4*c;
t[104]=x+23*c;t[105]=y-4*c;
t[106]=x+23*c;t[107]=y-3*c;
t[108]=x+24*c;t[109]=y-3*c;
t[110]=x+24*c;t[111]=y-2*c;
t[112]=x+23*c;t[113]=y-2*c;
t[114]=x+23*c;t[115]=y-1*c;
//M:
t[116]=x+26*c;t[117]=y-1*c;
t[118]=x+26*c;t[119]=y-5*c;
t[120]=x+27*c;t[121]=y-5*c;
t[122]=x+27*c+10;t[123]=y-4*c-10;
t[124]=x+27*c+10;t[125]=y-3*c;
t[126]=x+27*c;t[127]=y-3*c-10;
t[128]=x+27*c;t[129]=y-1*c;
t[130]=x+28*c;t[131]=y-1*c;
t[132]=x+28*c;t[133]=y-3*c-10;
t[134]=x+27*c+10;t[135]=y-3*c;
t[136]=x+27*c+10;t[137]=y-4*c-10;
t[138]=x+28*c;t[139]=y-5*c;
t[140]=x+29*c;t[141]=y-5*c;
t[142]=x+29*c;t[143]=y-1*c;
//E:
t[144]=x+30*c;t[145]=y-1*c;
t[146]=x+30*c;t[147]=y-5*c;
t[148]=x+33*c;t[149]=y-5*c;
t[150]=x+33*c;t[151]=y-4*c;
t[152]=x+31*c;t[153]=y-4*c;
t[154]=x+31*c;t[155]=y-3*c;
t[156]=x+32*c;t[157]=y-3*c;
t[158]=x+32*c;t[159]=y-2*c;
t[160]=x+31*c;t[161]=y-2*c;
t[162]=x+31*c;t[163]=y-1*c;
t[164]=x+33*c;t[165]=y-1*c;
//Fin:
t[166]=x+34*c;t[167]=y-1*c;
t[168]=x+34*c;t[169]=y-4*c;
t[170]=x+35*c;t[171]=y-4*c;
t[172]=x+35*c;t[173]=y-3*c;
t[174]=x+36*c;t[175]=y-3*c;
t[176]=x+36*c;t[177]=y-2*c;
t[178]=x+37*c;t[179]=y-2*c;
t[180]=x+37*c;t[181]=y-1*c;
t[182]=x+38*c;t[183]=y-1*c;
t[184]=x+38*c;t[185]=y;
t[186]=x;t[187]=y;
for(int i=0;i<=187;i++){s[i]=t[i]+5;}
setlinestyle(0,0,2);
setcolor(8);
setfillstyle(1,8);
fillpoly(93,s);
setcolor(0);
setfillstyle(1,2);
fillpoly(93,t);
}

void jugar(int x,int y,int estado){
int t[16],s[16];
t[0]=x;t[1]=y;
t[2]=x+300;t[3]=y;
t[4]=x+300;t[5]=y-25;
t[6]=x+350;t[7]=y+40;
t[8]=x+300;t[9]=y+105;
t[10]=x+300;t[11]=y+80;
t[12]=x;t[13]=y+80;
t[14]=x;t[15]=y;
for(int i=0;i<=15;i++){s[i]=t[i]+5;}
setlinestyle(0,0,2);
setcolor(8);
setfillstyle(1,8);
fillpoly(8,s);
setcolor(0);
switch (estado){
   case 0: //APAGADO
     setbkcolor(1);
     setfillstyle(1,1);
     break;
   case 1: //PRENDIDO
     setbkcolor(14);
     setfillstyle(1,14);
     break;
   default:
     cout<<"Este mensaje nunca deberia aparecer (jugar)" <<endl;
}
fillpoly(8,t); //(puntos,pocisiones)
settextstyle(10,0,4);
outtextxy(x+150-textwidth("Jugar")/2,y+40-textheight("Jugar")/2,"Jugar");
}

void instrucciones(int x,int y,int estado){
int t[16],s[16];
t[0]=x;t[1]=y;
t[2]=x+300;t[3]=y;
t[4]=x+300;t[5]=y+80;
t[6]=x;t[7]=y+80;
t[8]=x;t[9]=y+105;
t[10]=x-50;t[11]=y+40;
t[12]=x;t[13]=y-25;
t[14]=x;t[15]=y;
for(int i=0;i<=15;i++){s[i]=t[i]+5;}
setlinestyle(0,0,2);
setcolor(8);
setfillstyle(1,8);
fillpoly(8,s);
setcolor(0);
switch (estado){
   case 0: //APAGADO
     setbkcolor(1);
     setfillstyle(1,1);
     break;
   case 1: //PRENDIDO
     setbkcolor(14);
     setfillstyle(1,14);
     break;
   default:
     cout<<"Este mensaje nunca deberia aparecer (instrucciones)" <<endl;
}
fillpoly(8,t); //(puntos,pocisiones)
settextstyle(10,0,4);
outtextxy(x+150-textwidth("Instrucciones")/2,y+40-textheight("Instrucciones")/2,"Instrucciones");
}

void salir (int x,int y,int estado){
int t[16],s[16];
t[0]=x;t[1]=y;
t[2]=x+300;t[3]=y;
t[4]=x+300;t[5]=y-25;
t[6]=x+350;t[7]=y+40;
t[8]=x+300;t[9]=y+105;
t[10]=x+300;t[11]=y+80;
t[12]=x;t[13]=y+80;
t[14]=x;t[15]=y;
for(int i=0;i<=15;i++){s[i]=t[i]+5;}
setlinestyle(0,0,2);
setcolor(8);
setfillstyle(1,8);
fillpoly(8,s);
setcolor(0);
switch (estado){
   case 0: //APAGADO
     setbkcolor(1);
     setfillstyle(1,1);
     break;
   case 1: //PRENDIDO
     setbkcolor(14);
     setfillstyle(1,14);
     break;
   default:
     cout<<"Este mensaje nunca deberia aparecer (Salir)" <<endl;
}
fillpoly(8,t); //(puntos,pocisiones)
settextstyle(10,0,4);
outtextxy(x+150-textwidth("Salir")/2,y+40-textheight("Salir")/2,"Salir");
}

void info(int x,int y,int puntaje,int max_pts,int nivel){
char puntos[30],puntuacion_max[30],level[10];
itoa(puntaje,puntos,10);
itoa(max_pts,puntuacion_max,10);
itoa(nivel,level,10);
setfillstyle(1,4);
setbkcolor(4);
bar3d(x,y,x+220,y+60,5,1);
settextstyle(1,0,2);
outtextxy(x+10,y+20,"Record:");
outtextxy(x+210-textwidth(puntuacion_max),y+20,puntuacion_max);
bar3d(x,y+100,x+220,y+160,5,1);
outtextxy(x+10,y+120,"Puntos:");
outtextxy(x+210-textwidth(puntos),y+120,puntos);
bar3d(x,y+200,x+220,y+260,5,1);
outtextxy(x+10,y+220,"Nivel:");
outtextxy(x+210-textwidth(level),y+220,level);
}

void boton(int x,int y,int numero,int estado){
char imprimir[1];
int t[10],s[10];
t[0]=x;t[1]=y;
t[2]=x+100;t[3]=y;
t[4]=x+100;t[5]=y+100;
t[6]=x;t[7]=y+100;
t[8]=x;t[9]=y;
for(int i=0;i<=9;i++){s[i]=t[i]+5;}
setlinestyle(0,0,2);
setcolor(8);
setfillstyle(1,8);
fillpoly(4,s);
setcolor(0);
switch (estado){
   case 0: //APAGADO
     setbkcolor(1);
     setfillstyle(1,1);
     break;
   case 1: //PRENDIDO
     setbkcolor(14);
     setfillstyle(1,14);
     fillpoly(4,t);
     switch(numero){
       case 1:nota(C4);break;
       case 2:nota(E4);break;
       case 3:nota(G4);break;
       case 4:nota(C5);break;
       case 5:nota(E5);break;
       case 6:nota(G5);break;
       case 7:nota(C6);break;
       case 8:nota(E6);break;
       case 9:nota(G6);break;
       defuault:cout<<"Este mensaje nunca deberia aparecer (boton/sonido)" <<endl;
     }
     setbkcolor(1);
     setfillstyle(1,1);
     break;
   default:
     cout<<"Este mensaje nunca deberia aparecer (boton)" <<endl;
}
fillpoly(4,t);
itoa(numero,imprimir,10);
settextstyle(10,0,4);
outtextxy(x+50-textwidth(imprimir)/2,y+31,imprimir);
}

//******************************************************************************************************************************************//

void juego_sigueme(int perfil){
//Variables locales:
int pos_1[3],op_1,return_1;
int op_2,posicion[200][9],p[200],contador,entrada,op_3;
char archivo[10][6]={"0.txt","1.txt","2.txt","3.txt","4.txt","5.txt","6.txt","7.txt","8.txt","9.txt"};
int continuar;
int max_pts,puntaje,nivel;

//Iniciar:
usuario cuenta(archivo[perfil]);
srand(time(NULL));

//Menu:
do{
pos_1[0]=1;pos_1[1]=0;pos_1[2]=0;
continuar=1;

//Animacion de entrada:
for(int i=0;i<=20;i++){
   setbkcolor(COLOR(255,127,0));
   clearviewport();
   titulo(70,7*i);
   instrucciones(1125-i*40,320,0);
   jugar(i*40-650,190,1);
   salir(i*40-350,450,0);
   Sleep(40);
}

//Primera opcion:
do{
while(1){
return_1=0;
setbkcolor(COLOR(255,127,0));
clearviewport();
titulo(70,135);
jugar(150,190,pos_1[0]);
instrucciones(325,320,pos_1[1]);
salir(450,450,pos_1[2]);
for(return_1;return_1<=8;return_1++){
   if(pos_1[return_1]==1){break;}
}
op_1=getch();
if(op_1==KEY_UP){
if(pos_1[0]==0){pos_1[return_1]=0;pos_1[return_1-1]=1;}
else{pos_1[0]=0;pos_1[2]=1;}
}
if(op_1==KEY_DOWN){
if(pos_1[2]==0){pos_1[return_1]=0;pos_1[return_1+1]=1;}
else{pos_1[2]=0;pos_1[0]=1;}
}
if(op_1!=0){break;}
};
if(op_1==KEY_CENTER||op_1==13){break;}
}while(!kbhit());

//Animacion de salida:
for(int i=0;i<=25;i++){
    setbkcolor(COLOR(255,127,0));
    clearviewport();
    titulo(70,140-7*i);
    instrucciones(325-i*40,320,pos_1[1]);
    jugar(i*40+150,190,pos_1[0]);
    salir(i*40+450,450,pos_1[2]);
    Sleep(40);
}

//Segunda opcion
switch(return_1){
  case 0:
       //Animacion de entrada para juego:
       for(int i=0;i<=20;i++){
          setbkcolor(COLOR(255,127,0));
          clearviewport();
          titulo(70,7*i);
          boton(270,600-i*22,7,0);
          boton(400,600-i*22,8,0);
          boton(530,600-i*22,9,0);
          boton(270,730-i*22,4,0);
          boton(400,730-i*22,5,0);
          boton(530,730-i*22,6,0);
          boton(270,860-i*22,1,0);
          boton(400,860-i*22,2,0);
          boton(530,860-i*22,3,0);
          max_pts=cuenta.puntos(2);
          info(910-13*i,200,0,max_pts,0);
          Sleep(40);
       }
       //Inicio:
       nivel=0;
       puntaje=0;
       for(int j=0;j<=199;j++){
          for(int k=0;k<=8;k++){
             posicion[j][k]=0;p[j]=0;}}
       setbkcolor(COLOR(255,127,0));
       settextstyle(1,0,2);
       outtextxy(450-textwidth("Presiona enter para continuar")/2,550,"Presiona enter para continuar");
       do{
       op_2=getch();
       }while(op_2!=13);
       setfillstyle(1,COLOR(255,127,0));
       bar(20,530,880,600);
       max_pts=cuenta.puntos(2);
       info(650,200,puntaje,max_pts,nivel);
       do{
       p[nivel]=1+rand()%9;
       while(1){
       contador=0;
       Sleep(300);
       posicion[nivel][p[nivel]-1]=1;
       for(int i=0;i<=nivel;i++){
          boton(270,420,1,posicion[i][0]);
          boton(400,420,2,posicion[i][1]);
          boton(530,420,3,posicion[i][2]);
          boton(270,290,4,posicion[i][3]);
          boton(400,290,5,posicion[i][4]);
          boton(530,290,6,posicion[i][5]);
          boton(270,160,7,posicion[i][6]);
          boton(400,160,8,posicion[i][7]);
          boton(530,160,9,posicion[i][8]);
       }
       
       for(int i=0;i<=nivel;i++){
       op_2=getch();
       switch(op_2){
          case 49:boton(270,420,1,1);entrada=1;break; //1
          case 50:boton(400,420,2,1);entrada=2;break; //2
          case 51:boton(530,420,3,1);entrada=3;break; //3
          case 52:boton(270,290,4,1);entrada=4;break; //4
          case 53:boton(400,290,5,1);entrada=5;break; //5
          case 54:boton(530,290,6,1);entrada=6;break; //6
          case 55:boton(270,160,7,1);entrada=7;break; //7
          case 56:boton(400,160,8,1);entrada=8;break; //8
          case 57:boton(530,160,9,1);entrada=9;break; //9
          default:entrada=10;
       }
       if(entrada==p[i]){
          contador++;
          puntaje=puntaje+5;
          info(650,200,puntaje,max_pts,nivel);
       }
       else{break;}
       }
       if(op_2!=13){break;}
       };
       if(contador==(nivel+1)){
          nivel++;
          puntaje=puntaje+5;
          info(650,200,puntaje,max_pts,nivel);       
       }
       else{break;}
       }while(!kbhit());
       //Final del juego:
       cuenta.fin(SIGUEME,puntaje);
       int Lo[6],logros;
       logros=cuenta.logros(SIGUEME);
       if(cuenta.partidas(SIGUEME)>=1000){Lo[1]=1;}
       else{Lo[1]=0;}
       if(nivel<10&&(logros%100000==0)){Lo[2]=0;Lo[3]=0;Lo[4]=0;Lo[5]=0;}
       else{
          if(nivel<20&&(logros%1000==0)){Lo[5]=0;Lo[4]=0;Lo[3]=0;Lo[2]=1;}
          else{
             if(nivel<30&&(logros%100==0)){Lo[5]=0;Lo[4]=0;Lo[3]=1;Lo[2]=1;}
             else{
                if(nivel<40&&(logros%10==0)){Lo[5]=0;Lo[4]=1;Lo[3]=1;Lo[2]=1;}
                else{Lo[5]=1;Lo[4]=1;Lo[3]=1;Lo[2]=1;}
             }
          }
       }
       Lo[0]=100000+10000*Lo[1]+1000*Lo[2]+100*Lo[3]+10*Lo[4]+Lo[5];
       //for(int i=0;i<=5;i++){cout<<"L" <<i <<": " <<Lo[i] <<endl;}
       cuenta.logros(SIGUEME,Lo[0]);
       //Fin:
       setbkcolor(COLOR(255,127,0));
       settextstyle(1,0,2);
       outtextxy(450-textwidth("Presiona enter para continuar")/2,550,"Presiona enter para continuar");
       do{
       op_2=getch();
       }while(op_2!=13);       
       break;
  case 1:
       setbkcolor(COLOR(255,127,0));
       cleardevice();
       setcolor(0);
       setbkcolor(1);
       setfillstyle(1,1);
       bar3d(10,20,880,80,5,1);
       settextstyle(10,0,2);
       outtextxy(450-(textwidth("***INSTRUCCIONES***"))/2,50-(textheight("***INSTRUCCIONES***"))/2,"***INSTRUCCIONES***");
       setbkcolor(2);
       setfillstyle(1,2);
       bar3d(10,100,880,530,5,1);
       settextstyle(9,0,2);
       outtextxy(30,125,"1.- En el menu principal elija la opcion 'jugar'.");
       outtextxy(30,175,"2.- Una vez iniciado el juego observe y escuche la secuencia.");
       outtextxy(30,225,"3.- Utilice el teclado numerico para elegir el recuadro correspondiente.");
       outtextxy(30,275,"4.- Reproduzca usted mismo la secuencia.");
       outtextxy(30,325,"5.- Cuando acierte se agregara una nota a la secuencia.");
       outtextxy(30,375,"6.- Su puntuacion y logros se guardaran automaticamente.");
       outtextxy(30,425,"7.- El nivel maximo corresponde a 200.");
       outtextxy(30,475,"8.- Diviertase!!");
       setbkcolor(COLOR(255,127,0));
       settextstyle(1,0,2);
       outtextxy(450-textwidth("Presiona cualquier tecla para continuar")/2,550,"Presiona cualquier tecla para continuar");
       getch();
       break;
  case 2:
       continuar=0;
       break;
  default:
       cout<<"Este mensaje nunca deberia aparecer (Menu/Segunda_opcion)" <<endl;
}

}while(continuar);

}

//******************************************************************************************************************************************//

#endif
