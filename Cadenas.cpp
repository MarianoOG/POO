#include <iostream.h>
#include <stdio.h>

char nombre[25],boleta[12],carrera[25];
int edad;


int main()
{
    cout<<"Introduce tu nombre: " <<endl;
    gets(nombre);
    cout<<"Introduce tu numero de boleta: " <<endl;
    gets(boleta);
    cout<<"Introduce tu carrera: " <<endl;
    gets(carrera);
    cout<<"Introduce tu edad: " <<endl;
    cin>>edad;
    system("cls");
    cout<<"**********************************************" <<endl;
    cout<<"Nombre: ", puts(nombre), cout<<endl;
    cout<<"Boleta: ", puts(boleta), cout<<endl;
    cout<<"Carrera: ", puts(carrera), cout<<endl;
    cout<<"Edad: " <<edad <<endl;
    cout<<"**********************************************" <<endl;
    system("pause");
    return 0;
}
