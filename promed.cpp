#include <iostream.h>
#include <stdio.h>

char nombre[30],boleta[15];
float p;

int main () {
    cout<<"Ingresa tu nombre: " <<endl;
    gets (nombre);
    cout<<"Ingresa tu boleta: " <<endl;
    gets (boleta);
    fflush (stdin);
    cout<<"Ingresa tu promedio: " <<endl;
    cin>>p;
    system ("cls");
    cout<<"*****************************" <<endl;
    cout<<"Tu nombre es:";
    puts (nombre);
    cout<<"Tu boleta es:";
    puts (boleta);
    cout<<"Tu promedio es:" <<p <<endl;
          if ((p<=6)&&(p>=0)) {
                cout<<"Eres burro, cambiate de escuela." <<endl;
                cout<<"****************************" <<endl;
    }           else if ((p>6)&&(p<=8)) {
                    cout<<"Echale ganas." <<endl;
                    cout<<"****************************" <<endl;
    }               else if ((p>8)&&(p<=10)) {
                         cout<<"Muy bien." <<endl;
                         cout<<"****************************" <<endl;
    }                    else {
                         cout<<"Recuerda que no hay promedios negativos ni mayores a 10, ¿Si vas a la escuela?" <<endl;
                         cout<<"*****************************************" <<endl;}
    system ("pause");
    return 0;
}
