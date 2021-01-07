#include <iostream.h>
#include <stdlib.h>
#include <fstream.h>

int main() {
FILE *archivo;
char cad[30],cad2[30],n1[3],n2[3],c,ef[6][50];
int edad,edad2,x,y,a=0,cf[6]={0,0,0,0,0,0};
cout<<"Introduzca su nombre: " <<endl;
gets(cad);
fflush(stdin);
cout<<"Introduzca su edad: " <<endl;
cin>>edad;
fflush(stdin);
cout<<"Introduzca segundo nombre: " <<endl;
gets(cad2);
fflush(stdin);
cout<<"Introduzca segunda edad: " <<endl;
cin>>edad2;


strcat(cad,"\n");
x=strlen(cad);

strcat(cad2,"\n");
y=strlen(cad2);

itoa(edad,n1,10);
itoa(edad2,n2,10);

strcat(n1,"\n");
strcat(n2,"\n");

archivo=fopen("1.txt","w");

if (archivo!=NULL){
   fprintf(archivo,"----------------------------------------\n");
   
   for(int i=0;i<=x-1;i++)
   fputc(cad[i],archivo);

   for (int k=0;k<=2;k++)
   fputc(n1[k],archivo);
   
   for (int j=0;j<=y-1;j++)
   fputc(cad2[j],archivo);

   for (int p=0;p<=2;p++)
   fputc(n2[p],archivo);

   fprintf(archivo,"----------------------------------------");   
}
else {cout<<"Error al abrir el archivo" <<endl;}
fclose(archivo);

archivo=fopen("1.txt","r");
if (archivo!=NULL){
   while(!feof(archivo)){
   fgets(ef[a],50,archivo);
   if(!feof(archivo)){ef[a][strlen(ef[a])-1]='\0';}
   puts(ef[a]);
   a++;
   }
}
else {cout<<"Error al abrir el archivo" <<endl;}
fclose(archivo);

for(int w=0;w<=5;w++){
   cf[w]=strlen(ef[w]);
   cout<<"El archivo tiene: " <<cf[w] <<" caracteres en la fila: " <<w+1 <<endl;
   a=a+cf[w];
}

cout<<"El archivo tiene: " <<a <<" caracteres (contando saltos de linea)." <<endl;

cout<<"La suma de las edades es: " <<atoi(ef[2]) <<" + " <<atoi(ef[4]) <<" = " <<atoi(ef[2])+atoi(ef[4]) <<endl;

system("Pause");
return 0;
}
