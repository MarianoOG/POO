#include<stdio.h>
#include<iostream.h>

int x,y;

//******************************************************************************
class superheroe {
      char nombre[20];
      char identidad[20];
      int edad;
      float estatura;
   public:
      void salvar_gente();
      int combatir_malos();
      void volar(int km);
      void pedir_info();
      void imprimir();
};
void superheroe::pedir_info(){
     cout<<"Introduce los datos" <<endl;
     cout<<"Nombre: ";
     gets(nombre);
     cout<<"Identidad secreta: ";
     gets(identidad);
     fflush(stdin);
     cout<<"Edad: ";
     cin>>edad;
     cout<<"Estatura: ";
     cin>>estatura;
}
void superheroe::imprimir(){
     cout<<"*******************************************" <<endl;
     cout<<"Nombre: ";
     puts(nombre);
     cout<<"Identidad secreta: ";
     puts(identidad);
     cout<<"Edad: " <<edad <<endl;
     cout<<"Estatura: " <<estatura <<endl;
     cout<<"*******************************************" <<endl;
}
void superheroe::salvar_gente() {
     cout<<"ESTADO: Salvando gente " <<endl;
}
int superheroe::combatir_malos(){
    int cant;
    cout<<"Introduce la cantidad de malos: " <<endl;
    cin>>cant;
    fflush(stdin);
return cant;
}
void superheroe::volar(int km) {
     cout<<"Ha volado: " <<km <<" km. " <<endl;
}
//******************************************************************************
     
int main(){
superheroe UPIITAman,UPIITAwoman;

cout<<"   ********PRIMER SUPERHEROE******** " <<endl;
UPIITAman.pedir_info();
x=UPIITAman.combatir_malos();
cout<<endl <<"   ********SEGUNDO SUPERHEROE******** " <<endl;
UPIITAwoman.pedir_info();
y=UPIITAwoman.combatir_malos();
system("cls");

cout<<"*******************************************" <<endl;
cout<<"*    ********PRIMER SUPERHEROE********    *" <<endl;
UPIITAman.imprimir();
UPIITAman.salvar_gente();
UPIITAman.volar(5);
cout<<"Tiene: " <<x <<" enemigos." <<endl;
cout<<"*******************************************" <<endl;
cout<<"*    ********SEGUNDO SUPERHEROE********   *" <<endl;
UPIITAwoman.imprimir();
UPIITAwoman.salvar_gente();
UPIITAwoman.volar(5);
cout<<"Tiene: " <<x <<" enemigos." <<endl;
cout<<"*******************************************" <<endl;

system("pause");
return 0;
}
