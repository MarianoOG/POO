#include <stdio.h>
#include <iostream.h>
#include <string.h>

class cadena{
char *cifra;
public:
  cadena(char *ent);
  void invertir();
};

cadena::cadena(char *ent){
cifra=ent;
}

void cadena::invertir(){
int a;
cout<<"***************************************************************** " <<endl <<endl;     
cout<<"Su numero almacenado es: " <<endl;
cout<<"   ";
puts(cifra);
cout<<endl <<"Su numero invertido es: " <<endl;
cout<<"  ";
for (int i=0;i<=strlen(cifra);i++){
    a=strlen(cifra)-i;
    cout<<cifra[a];
}
cout<<endl <<endl;
cout<<"***************************************************************** " <<endl;
}

////////////////////
char  numero[50];
int a;

int main(){
cout<<"***************************************************************** " <<endl;
cout<<"                        INVERTIR NUMERO                           " <<endl;
cout<<"***************************************************************** " <<endl;

do {
cout<<endl <<"Introduce un numero: " <<endl;
gets(numero);
//comprobacion
int comp[strlen(numero)];
a=1;
for (int k=0;k<=strlen(numero)-1;k++){
    comp[k]=isdigit(numero[k]);
    if (!comp[k]){
    a=0;
    }
}
if (!a){
cout<<"NO ES UN NUMERO " <<endl <<endl;
}
}while(!a);

cout<<endl;
cadena uno(numero);
uno.invertir();
cout<<endl;
system("Pause");
return 0;
}
