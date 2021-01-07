#include <iostream.h>
#include <stdio.h>

int t;

int main () {
    cout<<"Elija una opcion: " <<endl;
    cout<<"1 - Temperatura menor o igual a 10°C" <<endl;
    cout<<"2 - Temperatura de 10 a 20 °C" <<endl;
    cout<<"1 - Temperatura mayor a 20°C" <<endl;
    cout<<"*****************************" <<endl;
    cout<<"Introduzca su eleccion (valores aceptados: 1,2 y 3): " <<endl;
    cin>>t;
    if (t==1) {
               cout<<"*****************************" <<endl;
               cout<<"Hace frio, ¡Abrigate!" <<endl;
               cout<<"*****************************" <<endl;
    }          else if (t==2) {
                    cout<<"****************************" <<endl;
                    cout<<"¡Cubrete del viento!" <<endl;
                    cout<<"****************************" <<endl;
    }          else if (t==3) {
                    cout<<"****************************" <<endl;
                    cout<<"¡Mucho calor, vamos a nadar!" <<endl;
                    cout<<"****************************" <<endl;
    }          else {
                    cout<<"****************************" <<endl;
                    cout<<"El numero que ingreso no corresponde a una de las opciones" <<endl;
                    cout<<"****************************" <<endl;}
    system ("pause");
    return 0;
}
