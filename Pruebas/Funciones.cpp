//*************Frias, estas son las funciones que encontre la mayoria tiene explicacion 
//y a veces tambien explica cada uno de los valores que pueden tomar y que significan los parametros
//es muy intuitivo su uso, pero cualquier cosa preguntas =).

//La libreria es: winbigm.h


#include <winbgim.h>

//Funcion para esperar click izquierdo:
void waitForLeftMouseClick() {
    clearmouseclick(WM_LBUTTONDOWN);
    const int DELAY = 50; // Milliseconds of delay between checks
    int x, y;
    while (!ismouseclick(WM_LBUTTONDOWN))
        delay(DELAY);
    getmouseclick(WM_LBUTTONDOWN, x, y);
}

int main()
{
initwindow(800,500); //abre ventana gráfica
/*
int getmaxx();
int getmaxy();
*/
setbkcolor(9);
clearviewport();

settextstyle(10,0,2);  //( FUENTE (0-10) , HORIZ_DIR(0) ó VERT_DIR(1) , TAMAÑO (1-10)
/*DEFAULT_FONT (0)
TRIPLEX_FONT (1)
SMALL_FONT (2)
SANS_SERIF_FONT (3)
GOTHIC_FONT (4)
SCRIPT_FONT (5)
SIMPLEX_FONT (6)
TRIPLEX_SCR_FONT (7)
COMPLEX_FONT (8)
EUROPEAN_FONT (9)
BOLD_FONT (10)*/
setcolor(RED);  //define color a utilizar (0-15)
/*BLACK (0)
BLUE (1)
GREEN (2)
CYAN (3)
RED (4)
MAGENTA (5)
BROWN (6)
LIGHTGRAY (7)
DARKGRAY (8)
LIGHTBLUE (9)
LIGHTGREEN (10)
LIGHTCYAN (11)
LIGHTRED (12)
LIGHTMAGENTA (13)
YELLOW (14)
WHITE (15)*/
/*
COLOR(r,g,b)
int getcolor();
*/
outtextxy(300,180,"FUNCIONES GRAFICAS"); //(x,y,texto)
/*
int textwidth(char *texto) 
int textheight(char *texto)
*/
setcolor(GREEN);
outtextxy(300,280,"Click para continuar");
waitForLeftMouseClick();

cleardevice();

setbkcolor(10);
clearviewport();

settextstyle(0,0,2);
outtextxy(60,50,"FIGURAS BASICAS"); 

setcolor(8);
setlinestyle(0,0,1); //(ESTILO (0-4),TRAMA (0-12)(solo en userbit_line),grosor (en pixeles))
/*SOLID_LINE (0)
DOTTED_LINE (1)
CENTER_LINE (2)
DASHED_LINE (3)
USERBIT_LINE (4)*/
circle(100,100,20); //(x,y,r)
line(80,120,120,120); //(x1,y1,x2,y2)
moveto(80,130);  //(x,y)
lineto(120,130);  //(x,y)
lineto(120,125);
rectangle (150,80,220,120); //(x1,y1,x2,y2)
ellipse(180,200,45,360-45,30,20); //(x,y,a1,a2,x_r,y_r)
int t[14]={80,250,120,220,120,250,170,230,180,300,100,270,80,250};
//drawpoly(7,t); //(puntos,pocisiones)
setcolor(0);
setfillstyle(9,4);
fillpoly(7,t); //(puntos,pocisiones)

outtextxy(360,50,"OTRAS FIGURAS"); 
setcolor(5);
arc(360,100,0,90,20);  //(x,y,a1,a2,r)
setfillstyle(1,6); //(TRAMA(0-12), COLOR(0-15))
bar(360,120,400,140); //(x1,y1,x2,y2)  
/*
setbkcolor(COLOR(0-15));
int getbkcolor();
setfillpattern(TRAMA(char *Trama),COLOR(0-15)); //definida por el usuario
*/

for (int k=0;k<=40;k++)
putpixel(k+360,k+150,BLUE); //dibujo pixel a pixel (x,y,color)
moveto(360,220);
linerel(20,-20); //linea relativa de solo distancias (dx,dy)

setbkcolor(11);
setcolor(0);
bar3d(360,250,400,290,10,-1); //(x1,y1,x2,y2,profundidad,tapa (0/1))

setbkcolor(12);
fillellipse(500,100,40,20); //(x,y,x_r,y_r)



/*
PARA DEVOLVER VALOERES DEL CURSOR GRAFICO:
int gety();
int getx();
*/

waitForLeftMouseClick();
closegraph();        //cierra ventana gráfica
return 0;
}



