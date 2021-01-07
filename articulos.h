#ifndef _articulos_h_
#define _articulos_h_

#include<stdio.h>
#include<iostream.h>

class articulo {
      public:
                char *nombre;
                int cantidad;
      public:
             articulo(char *n, int c);
             int vender();
             void imprimir();
};

articulo::articulo(char *n, int c){
nombre=n;
cantidad=c;
}

int articulo::vender(){
    if (cantidad>0){
       cantidad--;     
       return 1;
    }
    else {
       cout<<"No hay más articulos en el inventario" <<endl;
       return 0;
    }
}

void articulo::imprimir(){
cout<<"      " <<cantidad;
       cout<<"     ||               "; puts(nombre);
}

#endif
