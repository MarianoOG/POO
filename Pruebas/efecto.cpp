#include<windows.h>
#include<iostream.h>
#include<conio.h>
#include<time.h>
//movimiento de iz-der de teclas
#define ARRIBA 72
#define IZQUIERDA 75
#define ABAJO 80
#define DERECHA 77


int tam_ser,rr,sr,rv,sv;
char p1[]={'*',' ',0};
char b1[]={' ',0};

void gotoxy(int x, int y)
{
     HANDLE hCon;
     COORD dwPos;
     
     dwPos.X = x;
     dwPos.Y =y;
     
     hCon= GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleCursorPosition(hCon,dwPos); 
}
//25*40
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
                                                                         cout<<"X"<<endl;
                                                                         else
                                                                         cout<<"X";
                                                                         Sleep(20);
                           }
                           else
                           cout<<" ";
                                                
    }                           
    cout<<" "<<endl;
}
int main()
{
    marco(40,25);
    tam_ser=6;
    srand(time(NULL));
    rv=20;
    sv=13;
    do{                   
    rr=rand()%38;
    sr=rand()%23;
    if(kbhit())
     {
               unsigned char tecla=getch();
               
               switch(tecla)
               {
               case IZQUIERDA:
                    sv=sv;
                    rv--;
                    break;
                        
               case DERECHA:
                    sv=sv;
                    rv++;
                     break; 
                      
               case ABAJO:
                    rv=rv;
                    sv++;
                    break;
                    
               case ARRIBA:
                    rv=rv;
                    sv--;
                    break;
               }
     } 
     gotoxy(rv,sv);puts(p1);
     //Sleep(500);
     //gotoxy(rv,sv);puts(b1);
     gotoxy(rr,sr);puts(p1); 
     
     }while(rv!=50);
     system("pause");
     return 0;
}
