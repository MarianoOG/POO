#include<windows.h>
#include<iostream.h>
#include<conio.h>
#include<time.h>
#include "usuario_consola.h"
//movimiento de iz-der de teclas
#define ARRIBA 72
#define IZQUIERDA 75
#define ABAJO 80
#define DERECHA 77
#define ENTER 13

char p1[]={'\2',' ',0};
char c1[]={'\1',' ',0};
char b1[]={' ',0};
int fig,fig2,r1,s1,r2,s2,r3,s3,r4,s4,vel,max,des1,suma,puntos,niv,des,f1,des2,salida;
int mcomprobar[30][11];

void gotoxy(int x, int y)
{
     HANDLE hCon;
     COORD dwPos;
     
     dwPos.X = x;
     dwPos.Y =y;
     
     hCon= GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleCursorPosition(hCon,dwPos); 
}

void matinicial()
{
    for(int j=0;j<=36;j++)
    {
            for(int k=0;k<=10;k++)
            {
                    mcomprobar[j][k]=0;
            }
    }
}

void eliminar(int nf)
{
     suma=0;
     for(int k=0;k<=10;k++)
     {
     suma=suma+mcomprobar[nf][k];
     }
     if(suma==11)
     {
          /*for(int j=nf;j<=36;j++)
          {
                  for(int k=0;k<=10;k++)
                  {
                  mcomprobar[j][k]=0;
                  }
          }   
          for(int j=nf;j<=36;j++)
          {
                  for(int k=0;k<=10;k++)
                  {
                          if(mcomprobar[j][k]==1){
                          gotoxy((k+1)*2,j);puts(p1);
                          }
                  }
          } 
          Sleep(200); */
          for(int j=nf;j<=36;j++)
          {
                  for(int k=0;k<=10;k++)
                  {
                  mcomprobar[j][k]=mcomprobar[j+1][k];
                  }
          } 
          for(int j=nf;j<=36;j++)
          {
                  for(int k=0;k<=10;k++)
                  {
                          gotoxy((k+1)*2,j);puts(b1);
                          if(mcomprobar[j][k]==1){
                          gotoxy((k+1)*2,j);puts(p1);
                          }
                  }
          }
          puntos=puntos+11; 
     }    
}

void fin_juego()
{
     
     //cout<<"HOLA SI FUNCIONO";
     suma=0;
     for(int k=0;k<=10;k++)
     {
     suma=suma+mcomprobar[29][k];
     }
      //cout<<suma;
     if(suma!=0)
     {
                system("color 0c");
                for(int j=0;j<=36;j++)
          {
                  for(int k=0;k<=10;k++)
                  {
                          gotoxy((k+1)*2,j);puts(b1);
                          if(mcomprobar[j][k]==1){
                          gotoxy((k+1)*2,j);puts(c1);
                          }
                  }
          }
                Sleep(20);
           for(int v=0;v<40;v++)
           {
                   for(int w=0;w<=35;w++)
                   {
                           gotoxy(v,w);puts(b1);
                           Sleep(1);
                   }
           }  
                   
gotoxy(1,20);cout<<"      |..____________________, , ";
gotoxy(1,21);cout<<"      / `---___________----_____|]  ";
gotoxy(1,22);cout<<"     /_==o;;;;;;;;_______.:/    ";
gotoxy(1,23);cout<<"     ), ---.(_(__) /             ";
gotoxy(1,24);cout<<"    // (..) ), ----                ";
gotoxy(1,25);cout<<"   //___// ";
gotoxy(1,26);cout<<"  //___// ";
gotoxy(1,27);cout<<" //___// ";
Sleep(100);                   
gotoxy(1,20);cout<<"       |..____________________, ,   ";
gotoxy(1,21);cout<<"      / `---___________----_____|]     ";
gotoxy(1,22);cout<<"     /_==o;;;;;;;;_______.:/    ";
gotoxy(1,23);cout<<"     ), ---.(_(__) /              ";
gotoxy(1,24);cout<<"    // (..) ), ----           ";
gotoxy(1,25);cout<<"   //___// ";
gotoxy(1,26);cout<<"  //___// ";
gotoxy(1,27);cout<<" //___// "; 
Sleep(100);
gotoxy(1,20);cout<<"      |..____________________, , ";
gotoxy(1,21);cout<<"      / `---___________----_____|]  FIN DEL JUEGO";
gotoxy(1,22);cout<<"     /_==o;;;;;;;;_______.:/    ";
gotoxy(1,23);cout<<"     ), ---.(_(__) /             ";
gotoxy(1,24);cout<<"    // (..) ), ----                ";
gotoxy(1,25);cout<<"   //___// ";
gotoxy(1,26);cout<<"  //___// ";
gotoxy(1,27);cout<<" //___// ";
     f1=1;
     des2=3;
     gotoxy(5,32);cout<<"Nivel alcanzado: "<<niv;
     gotoxy(5,34);cout<<"Puntaje: "<<puntos;
     gotoxy(5,37);system("pause");
     }
     else
     {
         f1=0;
     }

}




void marco(int ac,int la)
{
    int anc, lar, are, res, res2, res3, xmarco;
    system("color 0A");
    //marco
    anc=ac;
    lar=la;
    system("cls");
    are=anc*lar;
    for(xmarco=0;xmarco<are;xmarco++)
    {
                           res=xmarco%anc;
                           res2=anc-1;
                           res3=are-anc;
                           if((xmarco<=anc)||(res==0)||(res==res2)||(xmarco>=res3))
                           {
                                                                         if(res==res2)
                                                                         cout<<"X "<<endl;
                                                                         else
                                                                         cout<<"X ";
                                                                         Sleep(20);
                           }
                           else
                           cout<<"  ";
                                                
    }                           
    cout<<" "<<endl;
}
void marco2(int ac,int la)
{
    int anc, lar, are, res, res2, res3, xmarco;
    system("color 0A");
    //marco
    anc=ac;
    lar=la;
    system("cls");
    are=anc*lar;
    for(xmarco=0;xmarco<are;xmarco++)
    {
                           res=xmarco%anc;
                           res2=anc-1;
                           res3=are-anc;
                           if((xmarco<=anc)||(res==0)||(res==res2)||(xmarco>=res3))
                           {
                                                                         if(res==res2)
                                                                         cout<<"X "<<endl;
                                                                         else
                                                                         cout<<"X ";
                           }
                           else
                           cout<<"  ";
                                                
    }                           
    cout<<" "<<endl;
}

void pause(){
     gotoxy(5,40);cout<<" P A U S E : ";
     system("pause");
     }
//FIGURAS
void cuadrado(int r,int s){
    r1=r;s1=s;
    r2=r+2;s2=s;
    r3=r;s3=s+1;
    r4=r+2;s4=s+1;
}

void figura2(int r,int s){
     r1=r;s1=s;
     r2=r;s2=s+1;
     r3=r;s3=s+2;
     r4=r+2;s4=s+2;
}
void figura3(int r,int s){
     r1=r-2;s1=s;
     r2=r;s2=s;
     r3=r+2;s3=s;
     r4=r-2;s4=s+1;
}
void figura4(int r,int s){
                       r1=r;s1=s;
                       r2=r+2;s2=s;
                       r3=r+2;s3=s+1;
                       r4=r+2;s4=s+2;
}
void figura5(int r,int s){
                       r1=r+2;s1=s;
                       r2=r-2;s2=s+1;
                       r3=r;s3=s+1;
                       r4=r+2;s4=s+1;
}
void figura6(int r,int s){
                       r1=r;s1=s;
                       r2=r;s2=s+1;
                       r3=r;s3=s+2;
                       r4=r-2;s4=s+2;
}
void figura7(int r,int s){
                       r1=r-2;s1=s;
                       r2=r;s2=s;
                       r3=r+2;s3=s;
                       r4=r+2;s4=s+1;
}
void figura8(int r,int s){
                       r1=r+2;s1=s;
                       r2=r;s2=s;
                       r3=r;s3=s+1;
                       r4=r;s4=s+2;
}
void figura9(int r,int s){
                       r1=r-2;s1=s;
                       r2=r-2;s2=s+1;
                       r3=r;s3=s+1;
                       r4=r+2;s4=s+1;
}
void figura10(int r,int s){
                        r1=r-2;s1=s;
                       r2=r;s2=s;
                       r3=r+2;s3=s;
                       r4=r;s4=s+1;
}
void figura11(int r,int s){
                        r1=r;s1=s;
                       r2=r-2;s2=s+1;
                       r3=r;s3=s+1;
                       r4=r;s4=s+2;
}
void figura12(int r,int s){
                        r1=r;s1=s;
                       r2=r-2;s2=s+1;
                       r3=r;s3=s+1;
                       r4=r+2;s4=s+1;
}
void figura13(int r,int s){
                        r1=r;s1=s;
                       r2=r;s2=s+1;
                       r3=r+2;s3=s+1;
                       r4=r;s4=s+2;
}
void figura14(int r,int s){
                        r1=r-2;s1=s;
                       r2=r;s2=s;
                       r3=r+2;s3=s;
                       r4=r+4;s4=s;
}
void figura15(int r,int s){
                        r1=r;s1=s;
                       r2=r;s2=s+1;
                       r3=r;s3=s+2;
                       r4=r;s4=s+3;
}
void figura16(int r,int s){
                        r1=r-2;s1=s;
                       r2=r;s2=s;
                       r3=r;s3=s+1;
                       r4=r+2;s4=s+1;
}
void figura17(int r,int s){
                        r1=r;s1=s;
                       r2=r;s2=s+1;
                       r3=r-2;s3=s+1;
                       r4=r-2;s4=s+2;
}
void figura18(int r,int s){
                        r1=r;s1=s;
                       r2=r+2;s2=s;
                       r3=r-2;s3=s+1;
                       r4=r;s4=s+1;
}
void figura19(int r,int s){
                        r1=r;s1=s;
                        r2=r;s2=s+1;
                        r3=r+2;s3=s+1;
                        r4=r+2;s4=s+2;    
}

int main()
{
    salida=1;
    des2=1;
    gotoxy(28,12);cout<<"Por favor maximice la ventana y";
    gotoxy(28,13);system("pause");
    marco(40,25);
    //T
    for(int m=46;m>=13;m--){
    figura14(10,m);
    Sleep(10);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    gotoxy(r1,s1+1);puts(b1);
    gotoxy(r2,s2+1);puts(b1);
    gotoxy(r3,s3+1);puts(b1);
    gotoxy(r4,s4+1);puts(b1);
    }
    for(int m=44;m>=14;m--){
    cuadrado(10,m);
    Sleep(10);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    gotoxy(r1,s1+2);puts(b1);
    gotoxy(r2,s2+2);puts(b1);
    gotoxy(r3,s3+2);puts(b1);
    gotoxy(r4,s4+2);puts(b1);
    }
    for(int m=42;m>=16;m--){
    cuadrado(10,m);
    Sleep(10);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    gotoxy(r1,s1+2);puts(b1);
    gotoxy(r2,s2+2);puts(b1);
    gotoxy(r3,s3+2);puts(b1);
    gotoxy(r4,s4+2);puts(b1);
    }
    //E
    for(int m=45;m>=13;m--){
    figura7(20,m);
    Sleep(10);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    gotoxy(r1,s1+2);puts(b1);
    gotoxy(r2,s2+1);puts(b1);
    gotoxy(r3,s3+1);puts(b1);
    gotoxy(r4,s4+1);puts(b1);
    }
    for(int m=41;m>=14;m--){
    figura13(20,m);
    Sleep(10);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    gotoxy(r1,s1+3);puts(b1);
    gotoxy(r2,s2+3);puts(b1);
    gotoxy(r3,s3+1);puts(b1);
    gotoxy(r4,s4+3);puts(b1);
    }
    for(int m=44;m>=16;m--){
    figura9(20,m);
    Sleep(10);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    gotoxy(r1,s1+2);puts(b1);
    gotoxy(r2,s2+1);puts(b1);
    gotoxy(r3,s3+1);puts(b1);
    gotoxy(r4,s4+1);puts(b1);
    }
    //T
    for(int m=46;m>=13;m--){
    figura14(30,m);
    Sleep(10);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    gotoxy(r1,s1+1);puts(b1);
    gotoxy(r2,s2+1);puts(b1);
    gotoxy(r3,s3+1);puts(b1);
    gotoxy(r4,s4+1);puts(b1);
    }
    for(int m=44;m>=14;m--){
    cuadrado(30,m);
    Sleep(10);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    gotoxy(r1,s1+2);puts(b1);
    gotoxy(r2,s2+2);puts(b1);
    gotoxy(r3,s3+2);puts(b1);
    gotoxy(r4,s4+2);puts(b1);
    }
    for(int m=44;m>=16;m--){
    cuadrado(30,m);
    Sleep(10);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    gotoxy(r1,s1+2);puts(b1);
    gotoxy(r2,s2+2);puts(b1);
    gotoxy(r3,s3+2);puts(b1);
    gotoxy(r4,s4+2);puts(b1);
    }
    //R
    for(int m=40;m>=10;m--){
    figura15(40,m);
    Sleep(10);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    gotoxy(r1,s1);puts(b1);
    gotoxy(r2,s2);puts(b1);
    gotoxy(r3,s3);puts(b1);
    gotoxy(r4,s4+4);puts(b1);
    }
    for(int m=40;m>=10;m--){
    figura15(42,m);
    Sleep(10);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    gotoxy(r1,s1);puts(b1);
    gotoxy(r2,s2);puts(b1);
    gotoxy(r3,s3);puts(b1);
    gotoxy(r4,s4+4);puts(b1);
    }
    gotoxy(40,17);puts(p1);
    gotoxy(42,17);puts(p1);
    for(int m=44;m>=13;m--){
    cuadrado(44,m);
    Sleep(10);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    gotoxy(r1,s1+2);puts(b1);
    gotoxy(r2,s2+2);puts(b1);
    gotoxy(r3,s3+2);puts(b1);
    gotoxy(r4,s4+2);puts(b1);
    }
    for(int m=44;m>=15;m--){
    figura16(46,m);
    Sleep(10);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    gotoxy(r1,s1+1);puts(b1);
    gotoxy(r2,s2+2);puts(b1);
    gotoxy(r3,s3+1);puts(b1);
    gotoxy(r4,s4+1);puts(b1);
    }
    gotoxy(46,17);puts(p1);
    gotoxy(48,17);puts(p1);
    //I
    for(int m=40;m>=10;m--){
    figura15(56,m);
    Sleep(10);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    gotoxy(r1,s1);puts(b1);
    gotoxy(r2,s2);puts(b1);
    gotoxy(r3,s3);puts(b1);
    gotoxy(r4,s4+4);puts(b1);
    }
    for(int m=40;m>=10;m--){
    figura15(58,m);
    Sleep(10);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    gotoxy(r1,s1);puts(b1);
    gotoxy(r2,s2);puts(b1);
    gotoxy(r3,s3);puts(b1);
    gotoxy(r4,s4+4);puts(b1);
    }
    gotoxy(56,17);puts(p1);
    gotoxy(58,17);puts(p1);
    //S
    for(int m=44;m>=13;m--){
    figura3(68,m);
    Sleep(10);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    gotoxy(r1,s1+2);puts(b1);
    gotoxy(r2,s2+1);puts(b1);
    gotoxy(r3,s3+1);puts(b1);
    gotoxy(r4,s4+1);puts(b1);
    }
    for(int m=44;m>=15;m--){
    figura7(68,m);
    Sleep(10);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    gotoxy(r1,s1+1);puts(b1);
    gotoxy(r2,s2+1);puts(b1);
    gotoxy(r3,s3+2);puts(b1);
    gotoxy(r4,s4+1);puts(b1);
    }
    for(int m=46;m>=17;m--){
    figura14(66,m);
    Sleep(10);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    gotoxy(r1,s1+1);puts(b1);
    gotoxy(r2,s2+1);puts(b1);
    gotoxy(r3,s3+1);puts(b1);
    gotoxy(r4,s4+1);puts(b1);
    }
    do{
    system("cls");
    des2=1;
    //T
    marco2(40,25);
    figura14(10,13);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    /*gotoxy(r1,s1+1);puts(b1);
    gotoxy(r2,s2+1);puts(b1);
    gotoxy(r3,s3+1);puts(b1);
    gotoxy(r4,s4+1);puts(b1);*/
    
    cuadrado(10,14);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    /*gotoxy(r1,s1+2);puts(b1);
    gotoxy(r2,s2+2);puts(b1);
    gotoxy(r3,s3+2);puts(b1);
    gotoxy(r4,s4+2);puts(b1);*/
    
    cuadrado(10,16);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    /*gotoxy(r1,s1+2);puts(b1);
    gotoxy(r2,s2+2);puts(b1);
    gotoxy(r3,s3+2);puts(b1);
    gotoxy(r4,s4+2);puts(b1);*/
    
    figura3(20,13);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    /*gotoxy(r1,s1+2);puts(b1);
    gotoxy(r2,s2+1);puts(b1);
    gotoxy(r3,s3+1);puts(b1);
    gotoxy(r4,s4+1);puts(b1);*/
    
    figura13(20,14);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    /*gotoxy(r1,s1+3);puts(b1);
    gotoxy(r2,s2+3);puts(b1);
    gotoxy(r3,s3+1);puts(b1);
    gotoxy(r4,s4+3);puts(b1);*/
   
    figura9(20,16);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    /*gotoxy(r1,s1+2);puts(b1);
    gotoxy(r2,s2+1);puts(b1);
    gotoxy(r3,s3+1);puts(b1);
    gotoxy(r4,s4+1);puts(b1);*/
    
    figura14(30,13);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    /*gotoxy(r1,s1+1);puts(b1);
    gotoxy(r2,s2+1);puts(b1);
    gotoxy(r3,s3+1);puts(b1);
    gotoxy(r4,s4+1);puts(b1);*/
    
    cuadrado(30,14);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    /*gotoxy(r1,s1+2);puts(b1);
    gotoxy(r2,s2+2);puts(b1);
    gotoxy(r3,s3+2);puts(b1);
    gotoxy(r4,s4+2);puts(b1);*/
    
    cuadrado(30,16);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    /*gotoxy(r1,s1+2);puts(b1);
    gotoxy(r2,s2+2);puts(b1);
    gotoxy(r3,s3+2);puts(b1);
    gotoxy(r4,s4+2);puts(b1);*/
    
    figura15(40,13);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    /*gotoxy(r1,s1);puts(b1);
    gotoxy(r2,s2);puts(b1);
    gotoxy(r3,s3);puts(b1);
    gotoxy(r4,s4+4);puts(b1);*/
    
    figura15(42,13);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    /*gotoxy(r1,s1);puts(b1);
    gotoxy(r2,s2);puts(b1);
    gotoxy(r3,s3);puts(b1);
    gotoxy(r4,s4+4);puts(b1);*/
    gotoxy(40,17);puts(p1);
    gotoxy(42,17);puts(p1);
    
    cuadrado(44,13);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    /*gotoxy(r1,s1+2);puts(b1);
    gotoxy(r2,s2+2);puts(b1);
    gotoxy(r3,s3+2);puts(b1);
    gotoxy(r4,s4+2);puts(b1);*/
    
    figura16(46,15);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    /*gotoxy(r1,s1+1);puts(b1);
    gotoxy(r2,s2+2);puts(b1);
    gotoxy(r3,s3+1);puts(b1);
    gotoxy(r4,s4+1);puts(b1);*/
    gotoxy(46,17);puts(p1);
    gotoxy(48,17);puts(p1);
    
    figura15(56,13);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    /*gotoxy(r1,s1);puts(b1);
    gotoxy(r2,s2);puts(b1);
    gotoxy(r3,s3);puts(b1);
    gotoxy(r4,s4+4);puts(b1);*/
    
    figura15(58,13);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    /*gotoxy(r1,s1);puts(b1);
    gotoxy(r2,s2);puts(b1);
    gotoxy(r3,s3);puts(b1);
    gotoxy(r4,s4+4);puts(b1);*/
    gotoxy(56,17);puts(p1);
    gotoxy(58,17);puts(p1);
    
    figura3(68,13);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    /*gotoxy(r1,s1+2);puts(b1);
    gotoxy(r2,s2+1);puts(b1);
    gotoxy(r3,s3+1);puts(b1);
    gotoxy(r4,s4+1);puts(b1);*/
    
    figura7(68,15);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    /*gotoxy(r1,s1+1);puts(b1);
    gotoxy(r2,s2+1);puts(b1);
    gotoxy(r3,s3+2);puts(b1);
    gotoxy(r4,s4+1);puts(b1);*/
    
    figura14(66,17);
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    /*gotoxy(r1,s1+1);puts(b1);
    gotoxy(r2,s2+1);puts(b1);
    gotoxy(r3,s3+1);puts(b1);
    gotoxy(r4,s4+1);puts(b1);*/
    
    
    
    
    gotoxy(20,32);cout<<"J U G A R";
    gotoxy(55,32);cout<<"S A L I R";
    do{
    if(kbhit())
     {
               unsigned char tecla=getch();
               switch(tecla)
               {
               case IZQUIERDA:
                    gotoxy(33,32);puts(p1);
                    gotoxy(35,33);puts(p1);
                    gotoxy(35,31);puts(p1);
                    gotoxy(37,32);puts(p1);
                    gotoxy(37,34);puts(p1);
                    gotoxy(37,30);puts(p1);                     
                    gotoxy(45,32);puts(b1);
                    gotoxy(45,30);puts(b1);
                    gotoxy(45,34);puts(b1);
                    gotoxy(47,31);puts(b1);
                    gotoxy(47,33);puts(b1);
                    gotoxy(49,32);puts(b1);
                    des2=1;
                    break;  
               case DERECHA:
                    gotoxy(33,32);puts(b1);
                    gotoxy(35,33);puts(b1);
                    gotoxy(35,31);puts(b1);
                    gotoxy(37,32);puts(b1);
                    gotoxy(37,34);puts(b1);
                    gotoxy(37,30);puts(b1);
                    gotoxy(45,32);puts(p1);
                    gotoxy(45,30);puts(p1);
                    gotoxy(45,34);puts(p1);
                    gotoxy(47,31);puts(p1);
                    gotoxy(47,33);puts(p1);
                    gotoxy(49,32);puts(p1);
                    des2=2;
                    break;  
               case ENTER:
                    if(des2==1)
                    {
                     
                     matinicial();
    srand(time(NULL)); 
    fig=rand()%18;
    max=1;
    puntos=0;
    niv=1;
    marco(13,32);
    gotoxy(30,10);cout<<"Sig. fig.";
    
    //comprobar
    do{
                              gotoxy(0,34);
    /*for(int j=0;j<=36;j++)
    {
            for(int k=0;k<=10;k++)
            {
                    cout<<mcomprobar[j][k]<<" ";
            }
            cout<<endl;
    }
    
    system("pause");*/
    gotoxy(30,16);cout<<"Nivel: "<<niv;
    gotoxy(30,18);cout<<"Puntos "<<puntos;
    fflush(stdin);
    fig2=rand()%18;
    switch(fig)
    {
                  case 0://cuadro 
                        cuadrado(12,28);
                        break;
                  case 1://L
                       figura2(12,28);
                       break;
                  case 2:
                       figura3(12,28);
                       break;
                  case 3:
                       figura4(12,28);
                       break;
                  case 4:
                       figura5(12,28);
                       break;
                  case 5:
                       figura6(12,28);
                       break;
                  case 6:
                       figura7(12,28);
                       break;
                  case 7:
                       figura8(12,28);
                       break;
                  case 8:
                       figura9(12,28);
                       break;
                  case 9:
                       figura10(12,28);
                       break;
                  case 10:
                       figura11(12,28);
                       break;
                  case 11:
                       figura12(12,28);
                       break;
                  case 12:
                       figura13(12,28);
                       break;
                  case 13:
                       figura14(12,28);
                       break;
                  case 14:
                       figura15(12,28);
                       break;
                  case 15:
                       figura16(12,28);
                       break;
                  case 16:
                       figura17(12,28);
                       break;
                  case 17:
                       figura18(12,28);
                       break;
                  case 18:
                       figura19(12,28);
                       break;
    }
                       gotoxy(30,11);cout<<"           "; 
                       gotoxy(30,12);cout<<"           ";
                       gotoxy(30,13);cout<<"           ";
                       gotoxy(30,14);cout<<"           ";
                       gotoxy(30,15);cout<<"           ";
    switch(fig2)
    {
                  case 0://cuadro 
                        gotoxy(32,12);cout<<"* *"; 
                        gotoxy(32,13);cout<<"* *";
                        break;
                  case 1://L
                       gotoxy(32,11);cout<<"*  "; 
                       gotoxy(32,12);cout<<"*  ";
                       gotoxy(32,13);cout<<"* *"; 
                       break;
                  case 2:
                       gotoxy(32,12);cout<<"* * *";
                       gotoxy(32,13);cout<<"*    ";
                       break;
                  case 3:
                       gotoxy(32,12);cout<<"* *"; 
                       gotoxy(32,13);cout<<"  *";
                       gotoxy(32,14);cout<<"  *";
                       break;
                  case 4: 
                       gotoxy(31,12);cout<<"    *"; 
                       gotoxy(31,13);cout<<"* * *";
                       break;
                  case 5:
                       gotoxy(32,11);cout<<"  *"; 
                       gotoxy(32,12);cout<<"  *";
                       gotoxy(32,13);cout<<"* *";
                       break;
                  case 6:
                       gotoxy(31,12);cout<<"* * *";
                       gotoxy(31,13);cout<<"    *";
                       break;
                  case 7:
                       gotoxy(32,11);cout<<"* *"; 
                       gotoxy(32,12);cout<<"*  ";
                       gotoxy(32,13);cout<<"*  ";
                       break;
                  case 8:
                       gotoxy(32,12);cout<<"*    "; 
                       gotoxy(32,13);cout<<"* * *";
                       break;
                  case 9:
                       gotoxy(31,12);cout<<"* * *";
                       gotoxy(31,13);cout<<"  *  ";
                       break;
                  case 10:
                       gotoxy(32,11);cout<<"  *"; 
                       gotoxy(32,12);cout<<"* *";
                       gotoxy(32,13);cout<<"  *";
                       break;
                  case 11:
                       gotoxy(32,12);cout<<"  *  "; 
                       gotoxy(32,13);cout<<"* * *";
                       break;
                  case 12:
                       gotoxy(32,12);cout<<"*  "; 
                       gotoxy(32,13);cout<<"* *";
                       gotoxy(32,14);cout<<"*  ";
                       break;
                  case 13:
                       gotoxy(31,12);cout<<"* * * *";
                       break;
                  case 14:
                       gotoxy(32,11);cout<<"*  "; 
                       gotoxy(32,12);cout<<"*  ";
                       gotoxy(32,13);cout<<"*  ";
                       gotoxy(32,14);cout<<"*  ";
                       break;
                  case 15:
                       gotoxy(31,12);cout<<"* *  ";
                       gotoxy(31,13);cout<<"  * *";
                       break;
                  case 16:
                       gotoxy(32,11);cout<<"  *"; 
                       gotoxy(32,12);cout<<"* *";
                       gotoxy(32,13);cout<<"*  ";
                       break;
                  case 17:
                       gotoxy(32,12);cout<<"  * *";
                       gotoxy(32,13);cout<<"* *  ";
                       break;
                  case 18:
                       gotoxy(32,12);cout<<"*  "; 
                       gotoxy(32,13);cout<<"* *";
                       gotoxy(32,14);cout<<"  *";
                       break;
    }
    niv=1+(puntos/110);
    vel=700-(niv*50);
    //movimiento
    max=1;
    for(s1=28;s1>max;s1--){
    gotoxy(5,40);cout<<"                                                                                                     ";
                   des1=0;        
    //bloques
    if(mcomprobar[s1-2][(r1/2)-1]==1)
    {
                              max=s1-1;   
                              des1=1;                           
    }
    else if((mcomprobar[s2-2][(r2/2)-1]==1)&&(des1==0))
    {
                              max=s2-1;
                              des1=2;                              
    }
    else if((mcomprobar[s3-2][(r3/2)-1]==1)&&(des1==0))
    {
                              max=s3-1;                              
                              des1=3;
    }
    else if((mcomprobar[s4-2][(r4/2)-1]==1)&&(des1==0))
    {
                              max=s4-1;                              
    }
    else{
         max=max;
         }
    
    
    if(kbhit())
     {
               unsigned char tecla=getch();
               
               switch(tecla)
               {
               case IZQUIERDA:
                    
                    if((r1>2)&&(r2>2)&&(r3>2)&&(r4>2))
                    {
                    r1=r1-2;r2=r2-2;r3=r3-2;r4=r4-2;
                    }
                    else{
                         r1=r1;r2=r2;r3=r3;r4=r4;
                    }
                 break;
                        
               case DERECHA:
                     if((r1<22)&&(r2<22)&&(r3<22)&&(r4<22))
                    {
                    r1=r1+2;r2=r2+2;r3=r3+2;r4=r4+2;
                    }
                    else{
                         r1=r1;r2=r2;r3=r3;r4=r4;
                    }break;  
                    case ABAJO:
                    switch(fig){
                    case 0:
                         r1=r1;
                         break;
                    case 1:
                         figura3(r1,s1);
                         fig=2;
                         break;  
                    case 2:
                         figura4(r1,s1);
                         fig=3;
                         break;
                    case 3:
                         figura5(r1,s1);
                         fig=4;
                         break;
                    case 4:
                         figura2(r1,s1);
                         fig=1;
                         break;
                    case 5:
                         figura7(r1,s1);
                         fig=6;
                         break;
                    case 6:
                         figura8(r1,s1);
                         fig=7;
                         break;
                    case 7:
                         figura9(r1,s1);
                         fig=8;
                         break;
                    case 8:
                         figura6(r1,s1);
                         fig=5;
                         break;
                    case 9:
                         figura13(r1,s1);
                         fig=12;
                         break;
                    case 10:
                         figura10(r1,s1);
                         fig=9;
                         break;
                    case 11:
                         figura11(r1,s1);
                         fig=10;
                         break;
                    case 12:
                         figura12(r1,s1);
                         fig=11;
                         break;
                    case 13:
                         figura15(r1,s1);
                         fig=14;
                         r1=r1-2;r2=r2-2;r3=r3-2;r4=r4-2;
                         break;
                    case 14:
                         figura14(r1,s1);
                         fig=13;
                         break;
                    case 15:
                         figura17(r1,s1);
                         fig=16;
                         break;
                    case 16:
                         figura16(r1,s1);
                         fig=15;
                         break;
                    case 17:
                         figura19(r1,s1);
                         fig=18;
                         break;
                    case 18:
                         figura18(r1,s1);
                         fig=17;
                         break; 
                         } 
                         if((r1>22)||(r2>22)||(r3>22)||(r4>22))
                         {
                         r1=r1-2;r2=r2-2;r3=r3-2;r4=r4-2;
                         }
                         if((r1<2)||(r2<2)||(r3<2)||(r4<2))
                         {
                         r1=r1+2;r2=r2+2;r3=r3+2;r4=r4+2;
                         }
                          case ENTER:
                              pause();
                              break;
     }
     }
     if(kbhit())
     {
               unsigned char tecla=getch();
               
               switch(tecla)
               {
               case ARRIBA:
                    vel=50;
                    break;
               case IZQUIERDA:
                    
                    if((r1>2)&&(r2>2)&&(r3>2)&&(r4>2))
                    {
                    r1=r1-2;r2=r2-2;r3=r3-2;r4=r4-2;
                    }
                    else{
                         r1=r1;r2=r2;r3=r3;r4=r4;
                    }
                 break;
                        
               case DERECHA:
                     if((r1<22)&&(r2<22)&&(r3<22)&&(r4<22))
                    {
                    r1=r1+2;r2=r2+2;r3=r3+2;r4=r4+2;
                    }
                    else{
                         r1=r1;r2=r2;r3=r3;r4=r4;
                    }break;  
               case ABAJO:
                    switch(fig){
                    case 0:
                         r1=r1;
                         break;
                    case 1:
                         figura3(r1,s1);
                         fig=2;
                         
                         break;  
                    case 2:
                         figura4(r1,s1);
                         fig=3;
                         break;
                    case 3:
                         figura5(r1,s1);
                         fig=4;
                         break;
                    case 4:
                         figura2(r1,s1);
                         fig=1;
                         break;
                    case 5:
                         figura7(r1,s1);
                         fig=6;
                         break;
                    case 6:
                         figura8(r1,s1);
                         fig=7;
                         break;
                    case 7:
                         figura9(r1,s1);
                         fig=8;
                         break;
                    case 8:
                         figura6(r1,s1);
                         fig=5;
                         break;
                    case 9:
                         figura13(r1,s1);
                         fig=12;
                         break;
                    case 10:
                         figura10(r1,s1);
                         fig=9;
                         break;
                    case 11:
                         figura11(r1,s1);
                         fig=10;
                         break;
                    case 12:
                         figura12(r1,s1);
                         fig=11;
                         break;
                    case 13:
                         figura15(r1,s1);
                         fig=14;
                         r1=r1-2;r2=r2-2;r3=r3-2;r4=r4-2;
                         break;
                    case 14:
                         figura14(r1,s1);
                         fig=13;
                         break;
                    case 15:
                         figura17(r1,s1);
                         fig=16;
                         break;
                    case 16:
                         figura16(r1,s1);
                         fig=15;
                         break;
                    case 17:
                         figura19(r1,s1);
                         fig=18;
                         break;
                    case 18:
                         figura18(r1,s1);
                         fig=17;
                         break; 
                         }    
                         if((r1>22)||(r2>22)||(r3>22)||(r4>22))
                         {
                         r1=r1-4;r2=r2-4;r3=r3-4;r4=r4-4;
                         }
                         if((r1<2)||(r2<2)||(r3<2)||(r4<2))
                         {
                         r1=r1+2;r2=r2+2;r3=r3+2;r4=r4+2;
                         }
                         break;  
                         case ENTER:
                              pause();
                              break;          
     }
     }
//    subida
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    //gotoxy(30,25);system("pause");
    Sleep(vel);
    gotoxy(r1,s1);puts(b1);
    gotoxy(r2,s2);puts(b1);
    gotoxy(r3,s3);puts(b1);
    gotoxy(r4,s4);puts(b1);
    s2--;
    s3--;
    s4--;
    gotoxy(30,30);cout<<"                  ";
    //gotoxy(30,30);cout<<s1<<"   "<<fig;                                  
   }
    gotoxy(r1,s1);puts(p1);
    gotoxy(r2,s2);puts(p1);
    gotoxy(r3,s3);puts(p1);
    gotoxy(r4,s4);puts(p1);
    //gotoxy(30,38);cout<<r1<<","<<s1;
    //gotoxy(30,39);cout<<r2<<","<<s2;
    //gotoxy(30,40);cout<<r3<<","<<s3;
    //gotoxy(30,41);cout<<r4<<","<<s4;
    mcomprobar[s1][(r1/2)-1]=1;
    mcomprobar[s2][(r2/2)-1]=1;
    mcomprobar[s3][(r3/2)-1]=1;
    mcomprobar[s4][(r4/2)-1]=1;
    //gotoxy(30,42);cout<<max;
    for(int u=0;u<=36;u++)
    {
    eliminar(u);
    }
    for(int u=0;u<=36;u++)
    {
    eliminar(u);
    }
    for(int u=0;u<=36;u++)
    {
    eliminar(u);
    }
    for(int u=0;u<=36;u++)
    {
    eliminar(u);
    }
    fin_juego();
    //gotoxy(30,43);cout<<suma;
    fig=fig2;
    }while(f1==0);
    
//Guarda los progresos:
char usuario[9][6]={"1.txt","2.txt","3.txt","4.txt","5.txt","6.txt","7.txt","8.txt","9.txt"};
int a,logros,Lo[6];
//Leer usuario:
a=leer_usuario()-1;
usuario_tetris perfil(usuario[a]);
//Comprobar logros y guardar datos:
perfil.fin(puntos);
logros=perfil.logros();
if(puntos<200&&(logros%100000==0)){Lo[2]=0;Lo[3]=0;Lo[4]=0;Lo[5]=0;Lo[1]=0;}
else{
   if(puntos<400&&(logros%1000==0)){Lo[5]=0;Lo[4]=0;Lo[3]=0;Lo[2]=0;Lo[1]=1;}
   else{
      if(puntos<600&&(logros%100==0)){Lo[5]=0;Lo[4]=0;Lo[3]=0;Lo[2]=1;Lo[1]=1;}
      else{
         if(puntos<800&&(logros%10==0)){Lo[5]=0;Lo[4]=0;Lo[3]=1;Lo[2]=1;Lo[1]=1;}
         else{
            if(puntos<1000&&(logros%10==0)){Lo[5]=0;Lo[4]=1;Lo[3]=1;Lo[2]=1;Lo[1]=1;}
            else{Lo[5]=1;Lo[4]=1;Lo[3]=1;Lo[2]=1;Lo[1]=1;}
         }
      }
   }
}
Lo[0]=100000+10000*Lo[1]+1000*Lo[2]+100*Lo[3]+10*Lo[4]+Lo[5];
perfil.logros(Lo[0]);                  
                     
    } 
    else
    {
    salida=2;
    des2=3;
    }      
    }
    } 
     
    }while((des2==1)||(des2==2));     
    }while(salida==1);
    

    return 0;
}
