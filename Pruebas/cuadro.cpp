#include <iostream.h>
#include <winbgim.h>
#include <windows.h>

//Clase:
class cuadro{
/*El origen esta en el centro*/
int x;
int y;
public:
   cuadro(int a,int b);
   void dibujar();
   void mover();
   void bajar();
};

cuadro::cuadro(int a,int b){
x=a;
y=b;
dibujar();
}

void cuadro::dibujar(){
cleardevice();
setcolor(0);
setfillstyle(1,0);
bar(x-10,y-10,x+10,y+10);
rectangle(x-10,y-10,x+10,y+10);
setfillstyle(1,1);
bar(x-9,y-9,x+9,y+9);
rectangle(x-9,y-9,x+9,y+9); 
}

void cuadro::mover(){
int a;
while(1){
a=getch();
if(a==KEY_UP){y=y-20;}
if(a==KEY_LEFT){x=x-20;}
if(a==KEY_RIGHT){x=x+20;}
if(a==KEY_DOWN){y=y+20;}
dibujar();
if (a!=0){break;}
};
}

void cuadro::bajar (){
y=y+20;
dibujar();
}

//Funciones:
void Click() {
    clearmouseclick(WM_LBUTTONDOWN);
    int x, y;
    while (!ismouseclick(WM_LBUTTONDOWN))
        delay(1);
//    getmouseclick(WM_LBUTTONDOWN, x, y);
}

int ClickOn(int x1,int y1,int x2,int y2){
  clearmouseclick(WM_LBUTTONDOWN);
  int a,x,y;
  a=0;
  for(int k=0;k<=50;k++){
    if (!ismouseclick(WM_LBUTTONDOWN)){
         delay(1);
    }
    else {
    x=mousex();
    y=mousey();
    if(x>=x1&&x<=x2&&y>=y1&&y<=y2){a=1;}
    }
  }
  return a;
}

void cuadricula(int a,int b){
/*El origen se encuantra en la esquina superior izquierda dentro del marco*/
int x=a,y=b;
setlinestyle(SOLID_LINE,0,6);
setcolor(7);
line(x+1,y-9,x+247,y-9);
setcolor(8);
line(x+249,y-6,x+249,y+399);
setcolor(0);
setlinestyle(SOLID_LINE,0,1);
moveto(x-6,y-6);
lineto(x,y-12);
lineto(x+252,y-12);
lineto(x+252,y+400);
lineto(x+246,y+406);
line(x+240,y,x+252,y-12);
setcolor(6);
setlinestyle(SOLID_LINE,0,6);
rectangle(x-3,y-3,x+243,y+403);
setcolor(0);
setlinestyle(SOLID_LINE,0,1);
rectangle(x-6,y-6,x+246,y+406);
for(int i=0;i<=20;i++){
line(x,y+20*i,x+240,y+20*i);}
for(int j=0;j<=12;j++){
line(x+20*j,y,x+20*j,y+400);}
}

//Variables:
int pociciones[12][20];
int o;

//Principal:
int main(){
int a;
initwindow(800,600);
setbkcolor(10);
clearviewport();
cuadro uno(350,350);

do {
a=kbhit();
cuadricula(240,160);
uno.mover();
//if(!a){if(ClickOn(0,0,800,600)){break;}};
}while(!a);

closegraph();
return 0;
}
