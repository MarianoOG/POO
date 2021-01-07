#include <stdio.h>
#include <iostream.h>
#include <windows.h>

class matriz{
int f;
int c;
int m[10][10];
public:
  matriz(int f1,int c1);
  void datos();
  void imprimir();
};

matriz::matriz(int f1,int c1){
c=c1;
f=f1;
}

void matriz::datos(){
for (int i=0;i<=f-1;i++){
    for (int j=0;j<=c-1;j++){
    cout<<"Introduce valor [" <<i+1 <<"] [" <<j+1 <<"]: ";
    cin>>m[i][j];
    }}
cout<<endl;
}

void matriz::imprimir(){
cout<<"****************************************** " <<endl;
cout<<"Su matriz es: " <<endl <<endl;

for (int i=0;i<=f-1;i++){
    cout<<"||";
    for (int j=0;j<=c-1;j++){
    cout<<" " <<m[i][j] <<" ";
    }
    cout<<"||"<<endl;
    }
  
cout<<endl;
cout<<"****************************************** " <<endl;
cout<<"La transpuesta es: " <<endl<<endl;
    
for (int i=0;i<=c-1;i++){
    cout<<"||";
    for (int j=0;j<=f-1;j++){
    cout<<" " <<m[j][i] <<" ";
    }
    cout<<"||"<<endl;
    }

cout<<"****************************************** " <<endl;
}


////////////////////
int fi,co;

int main(){
cout<<"****************************************** " <<endl;
cout<<"                 MATRIZ                    " <<endl;
cout<<"****************************************** " <<endl;
cout<<"Introduce el numero de filas: ";
cin>>fi;
cout<<"Introduce el numero de columnas: ";
cin>>co;

matriz a(fi,co);

a.datos();
a.imprimir();

system("Pause");
return 0;
}
