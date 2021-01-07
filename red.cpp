#include <stdio.h>
#include <iostream.h>
#include <windows.h>
#include <string.h>

//Clases

class usuario {
//atributos
char *nombre;
char *pass;
char *fecha;
char *hobbie;
char *correo;
int edad;
//métodos
public:
usuario(char *n,char *p,char *f,char *h,char *c,int e);
void imprimir(); 
int comparar(char *t1,char *t2);
void ccont();
};

usuario::usuario(char *n,char *p,char *f,char *h,char *c,int e){
nombre=n;
pass=p;
fecha=f;
hobbie=h;
correo=c;
edad=e;
}

void usuario::imprimir(){
cout<<"****************************************** " <<endl;
cout<<"           PERFIL DE: "; puts(nombre);
cout<<"****************************************** " <<endl;
cout<<endl <<"Edad: " <<edad <<endl <<endl;
cout<<"Hobbie: ";
puts(hobbie);
cout<<endl <<"Fecha de nacimiento: ";
puts(fecha);
cout<<endl <<"e-mail: ";
puts(correo);
cout<<endl;
cout<<"****************************************** " <<endl;
}

int usuario::comparar(char *t1,char *t2){
int p,c1,c2;
c1=strcmp(t1,nombre);
c2=strcmp(t2,pass);
if (c1==0&c2==0){
   p=0;}
else{
   p=1;}
return p;
}

void usuario::ccont() {
char tpass[31],tpass1[31],tpass2[31];
fflush(stdin);
cout<<"****************************************** " <<endl;
cout<<"           CAMBIO DE CONTRASE\245A         " <<endl;
cout<<"****************************************** " <<endl;

do{
cout<<"Ingrese la antigua contrase\244a: ";
gets(tpass);
if (strcmp(tpass,pass)){
cout<<"Contrase\244a incorrecta vuelva a escribirla." <<endl;}
}while (strcmp(tpass,pass));

do{
cout<<"Ingrese nueva contrase\244a: " <<endl;
gets(tpass1);
cout<<"Repita la nueva contrase\244a: "<<endl;
gets(tpass2);
if (strcmp(tpass1,tpass2)){
cout<<"Las contrase\244as no coinciden, vuelva a escribirlas." <<endl;}
}while(strcmp(tpass1,tpass2));
fflush(stdin);
strcpy(pass,tpass1);
cout<<"****************************************** " <<endl;
cout<<"Su nueva contrase\244a es: " <<endl <<"     ";
puts(pass);
cout<<"****************************************** " <<endl;
}

//variables generales
char op,us[20],co[20];
int m,x1,x2,x3;


//Principal
int main(){
usuario uno("Miguel","123456","30/08/1985","Nataci\242n","miguel_80@hotmail.com",26);
usuario dos("Carlos","987654","07/01/1990","Tocar la guitarra","carlos_zeppelin@yahoo.com.mx",21);
usuario tres("Laura","147258","14/02/1991","Bailar","lau-rita_20@live.com.mx",20);

do{

do {
system("cls");
fflush(stdin);
cout<<"****************************************** " <<endl;
cout<<"              INICIAR SESION               " <<endl;
cout<<"****************************************** " <<endl;
cout<<"USUARIO: ";
gets(us);
cout<<"CONTRASENA: ";
gets(co);
x1=uno.comparar(us,co);
x2=dos.comparar(us,co);
x3=tres.comparar(us,co);
fflush(stdin);
cout<<"****************************************** " <<endl;

if (!((x1==0)|(x2==0)|(x3==0))){
system("cls");
cout<<endl<<endl<<endl<<endl;
cout<<"****************************************** " <<endl;
cout<<"   EL USUARIO O CONTRASE\245A ES INCORRECTO " <<endl;
cout<<"****************************************** " <<endl;
Sleep(900);}
}while(!((x1==0)|(x2==0)|(x3==0)));

do{
system("cls");
fflush(stdin);
cout<<"****************************************** " <<endl;
cout<<"                  BIENVENIDO               " <<endl;
cout<<"****************************************** " <<endl;
cout<<"1. Ver perfil. " <<endl;
cout<<"2. Cambiar contrase\244a. " <<endl;
cout<<"3. Cerrar sesion. " <<endl;
cout<<"4. Salir. " <<endl;
cin>>m;
fflush(stdin);

if (m<1|m>4){
   cout<<"La opcion que eligio no es valida.";
   op='S';
   Sleep(800);
}
else{
if (m==4|m==3){op='n';}
else{
     if (x1==0) {
        if (m==1) {
        uno.imprimir();
        }
        if (m==2) {
        uno.ccont();
        }
        op='S';
        cout<<endl;
        system("Pause");
     }
     if (x2==0) {
        if (m==1) {
        dos.imprimir();
        }
        if (m==2) {
        dos.ccont();
        }
        op='S';
        cout<<endl;
        system("Pause");
     }
     if (x3==0) {
        if (m==1) {
        tres.imprimir();
        }
        if (m==2) {
        tres.ccont();
        }
        op='S';
        cout<<endl;
        system("Pause");
     }
}}
}while (op=='s'|op=='S');

}while (m==3);

system("cls");
cout<<endl <<endl <<endl <<endl;
cout<<"****************************************** " <<endl;
cout<<"                  ADIOS                    " <<endl;
cout<<"****************************************** " <<endl;
Sleep(600);
return 0;
}
