#include <iostream.h>
#include <stdio.h>

char op;
int n;

int main () {

n=0;

do {
   cout<<"¿Desea continuar (s/n)?" <<endl;
   cin>>op;
   if (op=='s')
      n++;
} while (op=='s');

cout<<"Usted continuo: " <<n <<"veces" <<endl;
cout<<"Adios";

system ("pause");
}
