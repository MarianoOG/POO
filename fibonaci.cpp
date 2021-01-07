#include <iostream.h>
#include <stdio.h>

int n, a, x, y;
char o;

int main () {

do {
    
system ("cls");    
x=1;
a=0;

cout<<"Numero de datos en la secuencia de Fibonacci: ";
cin>>n;
cout<<endl;

for (y=1;n>=y;y++) {
   if (y==1) {
      cout<<x <<" ";
      }
   else{
      cout<<x <<" ";
      a=x-a;
      x=x+a;
      }
}

system ("pause");

//final
system ("cls");
cout<<"¿Desea utilizar el programa de nuevo? (s/n) " <<endl;
cin>>o;
} while (o=='s');
   
system ("cls");
cout<<endl;
cout<<"         ***ADIOS*** " <<endl;
cout<<endl;
system ("pause");
}
