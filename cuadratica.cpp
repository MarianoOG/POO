#include <stdio.h>
#include <iostream.h>
#include <math.h>

float a,b,c,n,p;
char op;
float pos(float a1,float b1,float c1);
float neg(float a2,float b2,float c2);

int main () {
do {
system("cls");
cout<<"******************************************************* " <<endl;
cout<<"Para una ecuacion de la forma ax^2 + bx + c = 0. " <<endl;
cout<<"Introduce valor de a: ";
cin>>a;
cout<<"Introduce valor de b: ";
cin>>b;
cout<<"Introduce valor de c: ";
cin>>c;
cout<<"******************************************************* " <<endl;
p=pos(a,b,c);
n=neg(a,b,c);
cout<<"x1 = " <<p <<endl;
cout<<"x2 = " <<n <<endl;
cout<<"******************************************************* " <<endl;
cout<<"¿Desea volver a utilizar el programa (s/n)? " <<endl;
cin>>op;
} while (op=='s');
cout<<endl;
cout<<"               ADIOS " <<endl;
cout<<endl;
system("pause");
return 0;
}

float pos(float a1,float b1,float c1) {
float x1;
x1=(-b1+sqrt(pow(b1,2)-4*a1*c1))/(2*a1);
return x1;
}

float neg(float a2,float b2,float c2) {
float x2;
x2=(-b2-sqrt(pow(b2,2)-4*a2*c2))/(2*a2);
return x2;
}
