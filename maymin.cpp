#include <stdio.h>
#include <iostream.h>
#include <string.h>

class frase{
char *oracion;
public:
  frase(char *ent);
  void invertir();
};

frase::frase(char *ent){
oracion=ent;
}

void frase::invertir(){
cout<<"***************************************************************** " <<endl;     
cout<<"Su oracion con mayusculas y minusculas invertidas es: " <<endl <<endl;
for (int i=0;i<=strlen(oracion);i++){
    if (isupper(oracion[i])){
       printf("%c",tolower(oracion[i]));
    }
    else {
         if (islower(oracion[i])) {
             printf("%c",toupper(oracion[i]));
         }
         else {
             cout<<oracion[i];
         }
    }
}
cout<<endl<<endl;
cout<<"***************************************************************** " <<endl;
}

////////////////////
char  enunciado[50];

int main(){
cout<<"***************************************************************** " <<endl;
cout<<"                        INVERTIR CADENA                           " <<endl;
cout<<"***************************************************************** " <<endl;
cout<<"Introduce un enunciado con mayusculas y minusculas: " <<endl <<endl;
gets(enunciado);
cout<<endl;
frase uno(enunciado);
uno.invertir();
cout<<endl;
system("Pause");
return 0;
}
