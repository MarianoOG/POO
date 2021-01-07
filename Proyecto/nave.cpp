#include<windows.h>
#include<iostream.h>
#include<conio.h>
#include"usuario_consola.h"
//movimiento de iz-der de teclas
#define IZQUIERDA 75
#define DERECHA 77
#define ARRIBA 72
#define ABAJO 80
#define ENTER 13

//Dibujo del avion:
char avion_l1[]={' ',' ',' ', '^',' ',' ',' ',0}; // Dibujo del avión 
char avion_l2[]={' ',' ','*', '*','*',' ',' ',0};
char avion_l3[]={' ','*',' ', '*',' ','*',' ',0};

char explocion_l1[]={' ',' ','*','*',' ',' ',' ',0}; // explosión 1 del avion
char explocion_l2[]={' ','*','*','*','*',' ',' ',0};
char explocion_l3[]={' ',' ','*','*',' ',' ',' ',0};

char explocion_r1[]={'*',' ','*','*',' ','*',' ',0}; // explosión 2 del avion
char explocion_r2[]={' ','*','*','*','*',' ',' ',0};
char explocion_r3[]={'*',' ','*','*',' ','*',' ',0};

char borrar_avion[]={' ',' ',' ',' ',' ',' ',' ',0};

//Variables:
int num_vidas=3;
int corazones=5;
int repeticion= 0, nivel= 1;
bool condicion= false;
int i,v,w,z;
int puntos=0;
//Avion:
int ix=40;
int iy=19;
//Asteroides:
int y=8,x=12;
int yy=12,xx=17;
int x1=58,y1=6;
int x2=70, y2=9;
//nave menu
int ax1=5,ay1=17;
int ax2=5,ay2=7;
int ax3=68,ay3=7;
int ax4=68,ay4=17;
//Funciones:
void gotoxy(int x, int y){
     HANDLE hCon;
     COORD dwPos;
     
     dwPos.X = x;
     dwPos.Y =y;
     
     hCon= GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleCursorPosition(hCon,dwPos); 
}
//Puntos:
void pu(int pi){
     gotoxy(40,1); printf("Puntos: %d",pi);     
}

//Vidas:
void vidas(int vi){
     gotoxy(2,1); printf("VIDAS: %d",vi);     
}

//Salud:
void Barra_salud(int n)
{
     gotoxy(70,1); printf(" ");
     gotoxy(71,1); printf(" ");
     gotoxy(72,1); printf(" ");
     gotoxy(73,1); printf(" ");
     gotoxy(74,1); printf(" ");
     
     for(v=0;v<n;v++){
          gotoxy(70+v,1);
          printf("%c",3);
     }
}

//Explocion:
void explocion (void)
{
     gotoxy(ix,iy); puts(explocion_l1);
     gotoxy(ix,iy+1); puts(explocion_l2);
     gotoxy(ix,iy+2); puts(explocion_l3);
     Sleep(380);
     gotoxy(ix,iy); puts(explocion_r1);
     gotoxy(ix,iy+1); puts(explocion_r2);
     gotoxy(ix,iy+2); puts(explocion_r3);
     Sleep(380);
     gotoxy(ix,iy); puts(avion_l1);
     gotoxy(ix,iy+1); puts(avion_l2);
     gotoxy(ix,iy+2); puts(avion_l3);     
}

//movimientos del juego
void jugar(void)
{
     //asteroides
     gotoxy(x,y); printf("%c",2);
     gotoxy(xx,yy); printf("%c",2);
     gotoxy(x1,y1); printf("%c",2);
     gotoxy(x2,y2); printf("%c",2);
     
     Sleep(70-(nivel*2));
     
     gotoxy(x,y); printf(" ");
     gotoxy(xx,yy); printf(" ");
     gotoxy(x1,y1); printf(" ");
     gotoxy(x2,y2); printf(" ");
     
     if(y>20)
     {
      y=4; 
      x=(rand()%70)+6;
      
      if(y==4)
         condicion= false;
     }
     if(yy>20)
     {
      yy=4; 
      xx=(rand()%70)+6; 
     }
     if(y1>20)
     {
      y1=4; 
      x1=(rand()%70)+6; 
     }
     if(y2>20)
     {
      y2=4; 
      x2=(rand()%70)+6; 
     }
     
     //movimiento del avion
     
     if(kbhit())
     {
               unsigned char tecla=getch();
               
               switch(tecla)
               {
               case IZQUIERDA:
                    
                    if(ix>4)
                    {
                    gotoxy(ix,iy); puts(borrar_avion);
                    gotoxy(ix,iy+1); puts(borrar_avion);
                    gotoxy(ix,iy+2); puts(borrar_avion);
                    ix-=2;
                    gotoxy(ix,iy); puts(avion_l1);
                    gotoxy(ix,iy+1); puts(avion_l2);
                    gotoxy(ix,iy+2); puts(avion_l3); 
                    }
                 break;
                        
               case DERECHA:
                     if(ix<70)
                    {
                    gotoxy(ix,iy); puts(borrar_avion);
                    gotoxy(ix,iy+1); puts(borrar_avion);
                    gotoxy(ix,iy+2); puts(borrar_avion);
                    ix+=2;
                    gotoxy(ix,iy); puts(avion_l1);
                    gotoxy(ix,iy+1); puts(avion_l2);
                    gotoxy(ix,iy+2); puts(avion_l3); 
                    }
               break;    }
     }

//golpes de asteroides

if( (x > ix && x<ix+6 && y==iy-1) || (xx>ix && xx<ix+6 && yy==iy-1)||
(x1>ix && x1<ix+6 && y1==iy-1)||(x2>ix && x2<ix+6 && y2==iy-1))
{
corazones--;
Barra_salud(corazones);
printf("\a");//sonido cada golpe
}
gotoxy(ix,iy); puts(avion_l1);
gotoxy(ix,iy+1); puts(avion_l2);
gotoxy(ix,iy+2); puts(avion_l3);

if(corazones==0)//-salud- vidas
{
num_vidas--;
vidas(num_vidas);
explocion();
corazones=5;
Barra_salud(corazones);
}
    
    //cambio de nivel
    if(condicion==0){
         repeticion++;
         condicion=true;
    }
     if(repeticion==(3+nivel)){
         nivel++;
         gotoxy(27,1); printf("NIVEL: %i",nivel);
                               
         repeticion=0;
     }
     //Puntos 
     puntos=10*nivel;
     gotoxy(40,1); printf("Puntos: %i",puntos);
     
        
     y++;
     yy++;
     y1++;
     y2++;
     

}

void caratula(int h,int d)
{
     gotoxy(2,3); printf(" ");
     
     for(w=0;w<=h;w++)
     {        
     for(z=0;z<=d;z++)
             {
                if (w==2||w==h||z==3||z==d)
                {        
          gotoxy(2+w,3);
          printf("°");
          gotoxy(2,3+z);
          printf("°");}
          gotoxy(2+w,d+3);
          printf("°");
          gotoxy(h+2,3+z);
          printf("°");
          }}}
              
void fin_del_juego()
{
//Variables:
char usuario[9][6]={"1.txt","2.txt","3.txt","4.txt","5.txt","6.txt","7.txt","8.txt","9.txt"};
int a,logros,Lo[6];
//Leer usuario:
a=leer_usuario()-1;
usuario_nave perfil(usuario[a]);
//Comprobar logros y guardar datos:
perfil.fin(nivel*10);
logros=perfil.logros();
if(nivel<10&&(logros%100000==0)){Lo[2]=0;Lo[3]=0;Lo[4]=0;Lo[5]=0;Lo[1]=0;}
else{
   if(nivel<15&&(logros%1000==0)){Lo[5]=0;Lo[4]=0;Lo[3]=0;Lo[2]=0;Lo[1]=1;}
   else{
      if(nivel<20&&(logros%100==0)){Lo[5]=0;Lo[4]=0;Lo[3]=0;Lo[2]=1;Lo[1]=1;}
      else{
         if(nivel<25&&(logros%10==0)){Lo[5]=0;Lo[4]=0;Lo[3]=1;Lo[2]=1;Lo[1]=1;}
         else{
            if(nivel<30&&(logros%10==0)){Lo[5]=0;Lo[4]=1;Lo[3]=1;Lo[2]=1;Lo[1]=1;}
            else{Lo[5]=1;Lo[4]=1;Lo[3]=1;Lo[2]=1;Lo[1]=1;}
         }
      }
   }
}
Lo[0]=100000+10000*Lo[1]+1000*Lo[2]+100*Lo[3]+10*Lo[4]+Lo[5];
perfil.logros(Lo[0]);

     gotoxy(20,7); cout<<" ******** ******** ***      *** ******** "<<endl;
     gotoxy(20,8); cout<<" **       **    ** ****    **** **       "<<endl;
     gotoxy(20,9); cout<<" ** ***** **    ** ** **  ** ** *****    "<<endl;
     gotoxy(20,10);cout<<" **    ** ******** **  ****  ** **       "<<endl;
     gotoxy(20,11);cout<<" ******** **    ** **   **   ** ******** "<<endl;

     gotoxy(20,14);cout<<"  ******** **      ** ******** ********  "<<endl;
     gotoxy(20,15);cout<<"  **    **  **    **  **       **    **  "<<endl;
     gotoxy(20,16);cout<<"  **    **   **  **   *****    ********  "<<endl;
     gotoxy(20,17);cout<<"  **    **    ****    **       **   **   "<<endl;
     gotoxy(20,18);cout<<"  ********     **     ******** **    **  "<<endl;
     
     num_vidas=3;
     corazones=5;
     repeticion= 0;
     nivel= 1;
}
     //Menu inicio
void na()
{
     gotoxy(20,7); cout<<" ***   ** ******** **      ** ******** "<<endl;
     gotoxy(20,8); cout<<" ****  ** **    **  **    **  **       "<<endl;
     gotoxy(20,9); cout<<" ** ** ** **    **   **  **   *****    "<<endl;
     gotoxy(20,10);cout<<" **  **** ********    ****    **       "<<endl;
     gotoxy(20,11);cout<<" **   *** **    **     **     ******** "<<endl;
}
          
         void asmenu(void)
{
gotoxy(x,y); printf("%c",2);
     gotoxy(xx,yy); printf("%c",2);
     gotoxy(x1,y1); printf("%c",2);
     gotoxy(x2,y2); printf("%c",2);
     
     Sleep(70);
     
     gotoxy(x,y); printf(" ");
     gotoxy(xx,yy); printf(" ");
     gotoxy(x1,y1); printf(" ");
     gotoxy(x2,y2); printf(" ");
     
     if(y>20)
     {
      y=4; 
      x=(rand()%70)+6;
      
      if(y==4)
         condicion= false;
     }
     if(yy>20)
     {
      yy=4; 
      xx=(rand()%70)+6; 
     }
     if(y1>20)
     {
      y1=4; 
      x1=(rand()%70)+6; 
     }
     if(y2>20)
     {
      y2=4; 
      x2=(rand()%70)+6; 
     }
     
     y++;
     yy++;
     y1++;
     y2++;
} 

//Principal:
int main(){ 
int opcion=1,salir=1;    
system("color 0A");
    caratula(76,20);

do{
asmenu();
na();

gotoxy(ax1,ay1);   puts(avion_l1);
gotoxy(ax1,ay1+1); puts(avion_l2);
gotoxy(ax1,ay1+2); puts(avion_l3);

gotoxy(ax2,ay2);   puts(avion_l1);
gotoxy(ax2,ay2+1); puts(avion_l2);
gotoxy(ax2,ay2+2); puts(avion_l3);

gotoxy(ax3,ay3);   puts(avion_l1);
gotoxy(ax3,ay3+1); puts(avion_l2);
gotoxy(ax3,ay3+2); puts(avion_l3);

gotoxy(ax4,ay4);   puts(avion_l1);
gotoxy(ax4,ay4+1); puts(avion_l2);
gotoxy(ax4,ay4+2); puts(avion_l3);

//jugar y salir

gotoxy(36,14); printf("Jugar");
gotoxy(36,17); printf("Salir");

if(opcion){
           gotoxy(34,13); printf("°°°°°°°°°");
           gotoxy(34,15); printf("°°°°°°°°°");
           gotoxy(34,14); printf("°");
           gotoxy(42,14); printf("°");
           }
else
{
    gotoxy(34,16); printf("°°°°°°°°°");
    gotoxy(34,18); printf("°°°°°°°°°");
    gotoxy(34,17); printf("°");
    gotoxy(42,17); printf("°");}

if(kbhit()){
unsigned char menu_mover;
menu_mover=getch();
switch(menu_mover){
case ARRIBA:
     opcion=1;
     
     gotoxy(34,16);printf("          ");
     gotoxy(34,18);printf("          ");
     gotoxy(34,17);printf(" ");
     gotoxy(42,17);printf(" ");
     
     break;
case ABAJO:
     opcion=0;
     
     gotoxy(34,13);printf("          ");
     gotoxy(34,15);printf("          ");
     gotoxy(34,14);printf(" ");
     gotoxy(42,14);printf(" ");
     
     break;
case ENTER:
     if(opcion)
     {
system("cls");
caratula(76,20);     
vidas(num_vidas);
Barra_salud(corazones);
gotoxy(27,1); printf("NIVEL: %i",nivel);
gotoxy(ix,iy); puts(avion_l1);
gotoxy(ix,iy+1); puts(avion_l2);
gotoxy(ix,iy+2); puts(avion_l3);
while(num_vidas>0){
   jugar();
}
gotoxy(ix,iy); puts(borrar_avion);
gotoxy(ix,iy+1); puts(borrar_avion);
gotoxy(ix,iy+2); puts(borrar_avion);

fin_del_juego();

Sleep(1000);
system ("cls");
caratula(76,20);
                  }
     else{
     salir=0;}
     break;
}}
}while(salir);

return 0;
}
