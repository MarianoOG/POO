#include <stdio.h>
#include <iostream.h>

int d,d1,d2,m,m1,m2,a,a1,a2,a3,a4,t1,t2;
char op;

int main () {
do {
system("cls");
cout<<"******************************************************* " <<endl;
cout<<"Calcular dias de vida. " <<endl;
cout<<"Introduce el a~o en el que naciste (Formato: 'aaaa'): ";
cin>>a;
cout<<"Introduce el mes en el que naciste (Formato:   'mm'): ";
cin>>m;
cout<<"Introduce el dia en el que naciste (Formato:   'dd'): ";
cin>>d;
cout<<"******************************************************* " <<endl;
if ((d>31)|(d<1)|(m<1)|(m>12)) {
cout<<"******************************************************* " <<endl;
cout<<"*******************  FECHA NO VAIDA   ***************** " <<endl;
cout<<"******************************************************* " <<endl;
}
else {
cout<<"Tu numero de tarot es: ";
d1=d/10;
d2=d%10;
m1=m/10;
m2=m%10;
a1=a/1000;
a2=(a/100)%10;
a3=(a/10)%10;
a4=a%10;
t1=d1+d2+m1+m2+a1+a2+a3+a4;
     if (t1<10) {
          cout<<t1 <<endl;}
     else {
          t2=(t1/10)+(t1%10);
          cout<<t2 <<endl;
     }
}
cout<<"******************************************************* " <<endl;
cout<<"¿Desea volver a utilizar el programa (s/n)? " <<endl;
cin>>op;
} while ((op=='s')|(op=='S'));
cout<<endl;
cout<<"               ADIOS " <<endl;
cout<<endl;
system("pause");
return 0;
}
