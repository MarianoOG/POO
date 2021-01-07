#include <iostream.h>
#include <stdio.h>

int x,y;

int main () {
    for (y=1;y<=5;y++)
     for(x=1;x<=5;x++) {
     cout<<"* ";
               if (x==5) {
                    cout<<endl;
               }
     }
system ("pause");
}
