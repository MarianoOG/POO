#include <iostream.h>
#include <stdio.h>

int x,y;

int main()
{
    cout<<"Introduce un numero 'A' (entero):" <<endl;
    cin>>x;
    cout<<"Introduce un segundo numero 'B' (entero):" <<endl;
    cin>>y;
    system("cls");
    cout<<"**********************************************" <<endl;
    cout<<"A = " <<x <<endl;
    cout<<"B = " <<y <<endl;
    cout<<"**********************************************" <<endl;
    cout<<"A+B = " <<x+y <<endl;
    cout<<"A-B = " <<x-y <<endl;
    cout<<"A*B = " <<x*y <<endl;
    cout<<"A/B = " <<x/y <<"; con un residuo de: " <<x%y <<endl;
    cout<<"**********************************************" <<endl;
    system("pause");
    return 0;
}
