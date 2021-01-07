#include <iostream.h>
#include <stdio.h>

int a,x,y,z,o,p,c;
char b,k;

int main () {
    
do {

system ("cls");
cout<<"            ***MENU DE PROGRAMAS***          " <<endl;
cout<<endl;
cout<<"1 - Cuadro de asteriscos 5*5 " <<endl;
cout<<"2 - Conteo del 1 al 50 " <<endl;
cout<<"3 - Conteo de 7 en 7 del 7 al 700 " <<endl;
cout<<"4 - Visualizar dibujo " <<endl;
cout<<"5 - Programa ¿Desea continuar? " <<endl;
cout<<endl;
cout<<"Elija un programa de la siguiente lista: " <<endl;
cin>>a;
    
switch (a) {


       case 1:
system ("cls");
    for (y=1;y<=5;y++)
     for(x=1;x<=5;x++) {
     cout<<"* ";
               if (x==5) {
                    cout<<endl;
               }
     }
     system ("pause");
       break;            


       case 2:
            system ("cls");
     for(z=1;z<50;z++) {
     cout<<z <<", ";
     }
     cout<<z <<endl;
     system ("pause");
       break;

       case 3:
            system ("cls");
p=70;
    for (o=7;o<=700;o+=7) {
       cout<<o <<" ";
               if ((o%p)==0) {
                  cout<<endl;
               }        
    }
    system ("pause");
       break;


       case 4:
            system ("cls");
cout<<"Presione tecla para ver figura: " <<endl;
system ("pause");
cout<<endl;
cout<<endl;
cout<<"           .ed$$$$$eec. "<<endl;
cout<<"       .e$$$$$$$$$$$$$$$$$$eeeee$$$$$c "<<endl;
cout<<"      d$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$c "<<endl;
cout<<"    .$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$b. "<<endl;
cout<<"    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ $b "<<endl;
cout<<"   d$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$F "<<endl;
cout<<"  .$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ "<<endl;
cout<<"  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ "<<endl;
cout<<" .$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$**$ ^$$$$ "<<endl;
cout<<" 4 $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$**     4$$F "<<endl;
cout<<" 4 '$$$$$$$$$$$$$$$$$$$$$$$$$$$*        4$$ 4 "<<endl;
cout<<"  $$$$$$$$$$$$$$$$$$$$$$$$$$$        .$$% d "<<endl;
cout<<"   $$$$$          $$$$$*$$$$$$c   ..e$$*- "<<endl;
cout<<"    4$$$$          ^$$$$  *$$$$$F  ^*** "<<endl;
cout<<"     4$$$$          4$$$$ z$$$$$* "<<endl;
cout<<"     4$$$$          4$$$$ ^$$$P "<<endl;
cout<<"     ^$$$$b         '$$$$e  *F "<<endl;
system ("pause");
       break;




       case 5:
            system ("cls");
c=0;
do {
   cout<<"¿Desea continuar (s/n)?" <<endl;
   cin>>k;
   if (k=='s')
      c++;
} while (k=='s');

cout<<"Usted continuo: " <<c <<"veces" <<endl;
cout<<"Adios";
system ("pause");
       break;





       default:
               system ("cls");
               cout<<endl;
               cout<<endl;
       cout<<"       *****Opcion no valida*** " <<endl;
               cout<<endl;
               system ("pause");
}
system("cls");
cout<<endl;
cout<<"¿Desea elejir otro programa (s/n)? " <<endl;
cin>>b;

} while (b=='s');

system("cls");
cout<<endl;
cout<<"          *****ADIOS***** " <<endl;
cout<<endl;
system ("pause");
}
