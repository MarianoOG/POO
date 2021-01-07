#include <iostream.h>
#include <stdio.h>

int y,z;

int main () {
y=70;
    for (z=7;z<=700;z+=7) {
       cout<<z <<" ";
               if ((z%y)==0) {
                  cout<<endl;
               }        
    }
system ("pause");
}
