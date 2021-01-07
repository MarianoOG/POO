#include<stdio.h>
#include<iostream.h>

class circulo {
int x,y,r;
public:
   circulo(int a, int b, int c);
   void imprimir();
   circulo operator+(circulo T);
   circulo operator+(int k);
   circulo operator-(circulo T);
};

circulo::circulo(int a,int b,int c){
x=a;
y=b;
r=c;
}

circulo circulo::operator+(circulo T){
circulo res((x+T.x)/2,(y+T.y)/2,r+T.r);
return res;
}

circulo circulo::operator+(int k){
circulo res(x,y,r+k);
return res;
}

circulo circulo::operator-(circulo T){
circulo res((x+T.x)/2,(y+T.y)/2,r-T.r);
return res;
}

void circulo::imprimir(){
cout<<"El circulo tiene centro: (" <<x <<"," <<y <<"), con radio: " <<r <<". " <<endl <<endl;
}

int main(){
circulo A(10,10,15);
circulo B(20,20,30);
circulo C(0,0,0);
circulo D(0,0,0);
circulo E(0,0,0);
cout<<"***************************************************************** " <<endl;
cout<<"                           CIRCULOS                               " <<endl;
cout<<"***************************************************************** " <<endl;
cout<<"Circulo A: " <<endl;
A.imprimir();
cout<<"Circulo B: " <<endl;
B.imprimir();
C=A+B;
cout<<"Circulo C (A+B): " <<endl;
C.imprimir();
D=A-B;
cout<<"Circulo D (A-B): " <<endl;
D.imprimir();
cout<<"Circulo E (A+45): " <<endl;
E=A+45;
E.imprimir();
cout<<"***************************************************************** " <<endl <<endl;
system("pause");
return 0;
}
