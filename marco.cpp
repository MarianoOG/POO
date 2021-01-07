#include <iostream.h>
#include <stdio.h>

int x,y,m,n;

int main () {
//pide datos al usuario
cout<<"Para la impresion de un marco introduzca su largo: " <<endl;
cin>>m;
cout<<"Tambien introduzca su ancho: " <<endl;
cin>>n;
system ("cls");

//primera linea llena de asteriscos
for (x=1;x<=n;x++)
    cout<<"* ";
cout<<endl;   

//lineas intermedias (si las hay), con asteriscos solo al principio y al final
for (y=2;y<m;y++) //comprueba que ay linas intermedias 
       for (x=1;x<=n;x++){ //define ancho de la fila
           if (x==1) { //linea lateral izquierda
              cout<<"* ";
              if (n==1) //comprueba si es solo una columna
                 cout<<endl;
           }   
           else if (x<n) //llena de espacios
                cout<<"  ";
           else //cierra el marco (linea lateral derecha)
               cout<<"* " <<endl;
       }
y=m;
//linea final llena de asteriscos (comprobando mas de una fila)
if (m!=1){ //comprueba si es solo una fila
for (x=1;x<=n;x++)
  cout<<"* ";
  cout<<endl;
}

system ("pause");
}
