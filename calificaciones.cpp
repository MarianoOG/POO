#include <iostream.h>
#include <stdio.h>
#include <windows.h>

int i,j,k;
float calif[5],prom;
char nombre[30];

int main () {
cout<<"      ---Este programa almacena 5 calificaciones--- " <<endl;
cout<<"Introduce tu nombre " <<endl;
gets(nombre);
for (i=0;i<=4;i++){
    cout<<"Introduce la calificacion " <<i+1 <<": " <<endl;
    cin>>calif[i];
}
system ("cls");

cout<<"************************************* " <<endl;
cout<<"Las calificaciones son: " <<endl;
for (j=0;j<=4;j++) {
        cout<<"Calificacion #" <<j+1 <<": "  <<calif[j] <<endl;
}

prom=0;
for (k=0;k<=4;k++) {
    prom=prom+calif[k];
}
prom=prom/5;
cout<<endl <<"Tu promedio es: " <<prom <<endl;
cout<<"************************************* " <<endl;
Sleep(3000);
return 0;
}
