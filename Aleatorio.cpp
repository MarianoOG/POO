#include <time.h>
#include <iostream.h>
#include <stdio.h>

int x,i;
char op;

int main () {
do {
system("cls");
cout<<"************************************* " <<endl;
cout<<"Genero veinte números aleatorios: " <<endl;
cout<<"************************************* " <<endl;
srand(time(NULL));
for (i=1;i<=20;i++) {
    x=rand()%100;
    cout<<"El numero " <<i <<" es: " <<x <<endl;
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
