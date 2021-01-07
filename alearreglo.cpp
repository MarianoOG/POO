#include <time.h>
#include <iostream.h>
#include <stdio.h>

int x[10],i;
char op;

int main () {
do {
system("cls");
cout<<"************************************* " <<endl;
cout<<"Genero diez números aleatorios en un arreglo: " <<endl;
cout<<"************************************* " <<endl;

srand(time(NULL));
for (i=0;i<=9;i++) {
    x[i]=rand()%1000;
    cout<<"El numero " <<i+1 <<" es: " <<x[i] <<endl;
}
cout<<"************************************* " <<endl;

cout<<"¿Desea continuar (s/n)?" <<endl;
cin>>op;
if (op=='s');
} while (op=='s');

cout<<endl;
cout<<"         ***ADIOS*** " <<endl;
cout<<endl;

system ("pause");
}
