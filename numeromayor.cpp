#include <iostream.h>
#include <stdio.h>

int a,b,c;

int main () {
    cout<<"Ingrese un numero A:" <<endl;
    cin>>a;
    cout<<"Ingrese un numero B:" <<endl;
    cin>>b;
    cout<<"Ingrese un numero C:" <<endl;    
    cin>>c;
    if ((a>b)&&(a>c)) {
           cout<<"*****************************" <<endl;
           cout<<"El numero A: " <<a <<" es mayor." <<endl;
           cout<<"*****************************" <<endl;
    }      else if ((b>a)&&(b>c)) {
                cout<<"****************************" <<endl;
                cout<<"El numero B: " <<b <<" es mayor." <<endl;
                cout<<"****************************" <<endl;
    }           else if ((c>a)&&(c>b)) {
                    cout<<"****************************" <<endl;
                    cout<<"El numero C: " <<c <<" es mayor." <<endl;
                    cout<<"****************************" <<endl;
    }               else {
                         cout<<"*****************************************" <<endl;
                         cout<<"El valor maximo se repite dos o mas veces." <<endl;
                         cout<<"*****************************************" <<endl;}
    system ("pause");
    return 0;
}
