#include<stdio.h>
#include<iostream.h>

class fraccion {
int num,den;
public:
   fraccion(int a, int b);
   void imprimir();
   void simplificar();
   fraccion operator+(fraccion t);
   fraccion operator+(int k);
   fraccion operator-(fraccion t);
   fraccion operator-(int k);
   fraccion operator*(fraccion t);
   fraccion operator*(int k);
   fraccion operator/(fraccion t);
   fraccion operator/(int k);
};

fraccion::fraccion(int a,int b){
num=a;
den=b;
}

fraccion fraccion::operator+(fraccion t){
if (den==t.den) {
fraccion res(num+t.num,den);
res.simplificar();
return res;}
else {
fraccion res(num*t.den+t.num*den,den*t.den);
res.simplificar();
return res;}
}

fraccion fraccion::operator+(int k){
fraccion res(num+k*den,den);
res.simplificar();
return res;
}

fraccion fraccion::operator-(fraccion t){
if (den==t.den) {
fraccion res(num-t.num,den);
res.simplificar();
return res;}
else {
fraccion res(num*t.den-t.num*den,den*t.den);
res.simplificar();
return res;}
}

fraccion fraccion::operator-(int k){
fraccion res(num-k*den,den);
res.simplificar();
return res;
}

fraccion fraccion::operator*(fraccion t){
fraccion res(num*t.num,den*t.den);
res.simplificar();
return res;
}

fraccion fraccion::operator*(int k){
fraccion res(k*num,den);
res.simplificar();
return res;
}

fraccion fraccion::operator/(fraccion t){
fraccion res(num*t.den,den*t.num);
res.simplificar();
return res;
}

fraccion fraccion::operator/(int k){
fraccion res(num,den*k);
res.simplificar();
return res;
}

void fraccion::simplificar(){
/*
int o,a;
do{
if (den>num){
a=num;}
else {
a=den;}
o=1;
for(int i=1;i<=a;i++){
     if ((den%a==0)&&(num%a==0)){
       den=den/a;
       num=num/a;
       o=0;
     }
} 
}while (o==1);
*/
}

void fraccion::imprimir(){
cout<<num <<"/" <<den <<endl;
}

int main(){
int a,b,c,d,e;
cout<<"***************************************************************** " <<endl;
cout<<"                          FRACCIONES                              " <<endl;
cout<<"***************************************************************** " <<endl;
cout<<"Introduzca numerador de A:   ";
cin>>a;
cout<<"Introduzca denominador de A: ";
cin>>b;
cout<<"Introduzca numerador de B:   ";
cin>>c;
cout<<"Introduzca denominador de B: ";
cin>>d;
cout<<"Introduzca un entero k:      ";
cin>>e;
fraccion A(a,b),B(c,d),C(0,0);
A.simplificar();
B.simplificar();
system("cls");
cout<<"***************************************************************** " <<endl;
cout<<"                          FRACCIONES                              " <<endl;
cout<<"***************************************************************** " <<endl;
cout<<"Fraccion A: ";
A.imprimir();
cout<<"Fraccion B: ";
B.imprimir();
cout<<"Numero: " <<e <<endl;
cout<<"***************************************************************** " <<endl;
cout<<"A + B = ";
C=A+B;
C.imprimir();
cout<<"A + k = ";
C=A+e;
C.imprimir();
cout<<"A - B = ";
C=A-B;
C.imprimir();
cout<<"A - k = ";
C=A-e;
C.imprimir();
cout<<"A * B = ";
C=A*B;
C.imprimir();
cout<<"A * k = ";
C=A*e;
C.imprimir();
cout<<"A / B = ";
C=A/B;
C.imprimir();
cout<<"A / k = ";
C=A/e;
C.imprimir();
cout<<"***************************************************************** " <<endl;
system("Pause");
return 0;
}
