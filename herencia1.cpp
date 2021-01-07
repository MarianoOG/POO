#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class mujer
{
      protected:
                char nombre[15];
                int edad;
                int mbust;
                int mcint;
                int mcad;
      public:
             mujer();
             void setnam();
             void getnam();
             void setage();
             void getage();
             void getmed(int x, int y, int z);
             void setmed();
};
mujer::mujer()
{
              strcpy(nombre,"No name");
              edad=0;
              mbust=0;
              mcint=0;
              mcad=0;
}
void mujer::getnam()
{
     fflush(stdin);
     cout<<"\nIntroduce el nombre: ";
     gets(nombre);
}
void mujer::setnam()
{
     cout<<"\nEl nombre es: ";
     puts(nombre);
}
void mujer::getage()
{
     cout<<"\nIntroduce la edad: ";
     cin>>edad;
}
void mujer::setage()
{
     cout<<"\nTiene "<<edad<<" anios";
}
void mujer::getmed(int x, int y, int z)
{
     mbust=x;
     mcint=y;
     mcad=z;
}
void mujer::setmed()
{
     cout<<"\nY sus medidas son: "<<mbust<<" "<<mcint<<" "<<mcad;
}
class wife:public mujer
{
      protected:
                char *aniv;
                int nchild;
      public:
             wife(char *dat, int a);
             void setdate();
             void setchild();
};
wife::wife(char *dat, int a)
{
               strcpy(nombre,"Celia Solis");
               edad=34;
               aniv=dat;
               nchild=a;               
}
void wife::setdate()
{
     cout<<"\nLa fecha de aniversario es: ";
     puts(aniv);
}
void wife::setchild()
{
     cout<<"\nY tiene "<<nchild<<" hijos";
}

int main()
{
    mujer objeto1;
    objeto1.getnam();
    objeto1.getage();
    objeto1.getmed(90,70,90);
    cout<<endl;
    system("cls");
    cout<<"--------------------------------"<<endl;
    cout<<"Reimprimiendo informacion"<<endl<<endl;
    cout<<"--------------------------------"<<endl;
    objeto1.setnam();
    objeto1.setage();
    objeto1.setmed();
    cout<<endl;
    getch();
    system("cls");
    cout<<"Veamos la herencia aplicada en la segunda clase"<<endl<<endl;
    wife objeto2("7 julio", 3);
    objeto2.getmed(90, 65, 93);
    cout<<"--------------------------------"<<endl;
    cout<<"Reimprimiendo informacion"<<endl<<endl;
    cout<<"--------------------------------"<<endl;
    objeto2.setnam();
    objeto2.setage();
    objeto2.setmed();
    objeto2.setdate();
    objeto2.setchild();
    getch();
    return 0;
}
