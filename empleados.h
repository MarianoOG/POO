#ifndef _empleados_h_
#define _empleados_h_

#include<stdio.h>
#include<iostream.h>

class empleado {
      protected:
                char *nombre;
                int edad;
                char *puesto;
};

class vendedor:public empleado {
      protected:
             char* departamento;
      public:
             vendedor(char *n,int e, char *p,char *d);
             void imprimir();
};

vendedor::vendedor(char *n,int e, char *p,char *d){
nombre=n;
edad=e;
puesto=p;
departamento=d;
}

void vendedor::imprimir(){
cout<<"Nombre: "; puts(nombre);
cout<<"Nombre: " <<edad <<endl;
cout<<"Puesto: "; puts(puesto);
cout<<"Departamento: "; puts(departamento);
}

class administrador:public empleado {
      public:
             administrador(char *n,int e, char *p);
             void imprimir();
};

administrador::administrador(char *n,int e, char *p){
nombre=n;
edad=e;
puesto=p;
}

void administrador::imprimir(){
cout<<"Nombre: "; puts(nombre);
cout<<"Nombre: " <<edad <<endl;
cout<<"Puesto: "; puts(puesto);
}

#endif
