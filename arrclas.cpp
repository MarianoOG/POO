#include <stdio.h>
#include <iostream.h>
#include <windows.h>
#include <string.h>

//Clases

class usuario {
//atributos
int nombre;
//char *pass;
int edad;
//métodos
public:
usuario(int n,int e);
void imprimir(); 
};

usuario::usuario(int n,int e){
nombre=n;
//pass=p;
edad=e;
}

void usuario::imprimir(){
cout<<"****************************************** " <<endl;
cout<<nombre<<endl;
cout<<edad<<endl;
cout<<"****************************************** " <<endl;
}


int main(){
int x[3]={1,2,3};
int y[3]={2,3,4};
usuario uno[3]={x,y};

for (int i=0;i<=2;i++){
uno[i].imprimir;
}

system("cls");
cout<<endl <<endl <<endl <<endl;
cout<<"****************************************** " <<endl;
cout<<"                  ADIOS                    " <<endl;
cout<<"****************************************** " <<endl;
Sleep(500);
return 0;
}
