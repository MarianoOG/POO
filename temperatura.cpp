#include <stdio.h>
#include <iostream.h>

float cak(float c);
float caf(float c);
float c,f,k;
char op;

int main (){
do {
system("cls");
cout<<"******************************************************* " <<endl;
cout<<"Convierte de grados Celsius a Farenheit y a Kelvin. " <<endl;
cout<<"Introduce el valor en grados Celsius: ";
cin>>c;
f=caf(c);
k=cak(c);
cout<<"******************************************************* " <<endl;
cout<<"Farenheit: " <<f <<endl;
cout<<"Kelvin:    " <<k <<endl;
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

float cak(float c) {
k=c+273;
return k;      
}

float caf(float c){
f=c*1.8 + 32;
return f;
}
