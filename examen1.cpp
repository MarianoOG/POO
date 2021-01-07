#include <stdio.h>
#include <iostream.h>

int o,n,a1,a2,a3,a4,t1,t2,t3,t4,r;
char op;

int main () {

do {
    
system ("cls");
cout<<"**************************************************** " <<endl;
cout<<"1. Cifrar. " <<endl;
cout<<"2. Descifrar. " <<endl;
cout<<"3. Salir " <<endl;
cout<<"ELIJA LA OPCION QUE DEESEE UTILIZAR: " <<endl;
cin>>o;

switch (o){
       case 1:       
       system("cls");
       cout<<"Introduzca un numero de 4 digitos a cifrar: " <<endl;
       cin>>n;
       if ((n<1000)|(n>9999))
          cout<<"El numero que introdujo no es de 4 cifras " <<endl;
       else {
          a1=n/1000;
          a2=(n/100)%10;
          a3=(n/10)%10;
          a4=n%10;
          a1=(a1+7)%10;
          a2=(a2+7)%10;
          a3=(a3+7)%10;
          a4=(a4+7)%10;
          r=a2*1000+a1*100+a4*10+a3;
          cout<<"El numero cifrado es: " <<r <<endl;
       }
       cout<<endl;
       system("pause");
       cout<<endl;
       cout<<"¿Desea volver a usar el programa (s/n)? " <<endl;
       cin>>op;
       break;
       
       case 2:
       system("cls");
       cout<<"Introduzca un numero de 4 digitos a descifrar: " <<endl;
       cin>>n;
       if ((n<1000)|(n>9999))
          cout<<"El numero que introdujo no es de 4 cifras " <<endl;
       else {
          a1=n/1000;
          a2=(n/100)%10;
          a3=(n/10)%10;
          a4=n%10;
          a1=(a1+3)%10;
          a2=(a2+3)%10;
          a3=(a3+3)%10;
          a4=(a4+3)%10;
          r=a2*1000+a1*100+a4*10+a3;
       cout<<"El numero descifrado es: " <<r <<endl;
       }       
       cout<<endl;
       system("pause");
       cout<<endl;
       cout<<"¿Desea volver a usar el programa (s/n)? " <<endl;
       cin>>op;
       break;
       
       case 3:
       op='n';
       break;
       
       default:
       cout<<"         ****OPCION NO VALIDA**** " <<endl;
       cout<<endl;
       system("pause");
       cout<<endl;
       cout<<"¿Desea volver a usar el programa (s/n)? " <<endl;
       cin>>op;
}

} while ((op=='s')|(op=='S'));
system("cls");
cout<<endl;
cout<<"       ****Adios** " <<endl;
cout<<endl;
system ("pause");
return 0;
}
