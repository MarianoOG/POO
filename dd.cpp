 #include<stdio.h>
 #include<iostream.h>
#include<conio.h>
 
void producto(int [10][10],int [10][10]);
int i=0,j=0,m=0,n=0,s=0,x=0,a[10][10],b[10][10],d[10][10];
int t=0,g=0,k=0;

int main() {

printf("\n # de filas de a:");
   scanf("%d",&n);
   printf("\n de columnas de a y filas de b:");
   scanf("%d",&m);
   printf("\n de columnas de b:");
   scanf("%d",&x);
producto(a,b);
system("pause");
return 0;
}

void producto(int a[10][10],int b[10][10])
 {
  
  for(i=0;i<n;i++){
  for(j=0;j<m;j++){
   printf("\n elemento a[%d,%d]:",i+1,j+1);
   scanf("%d",&a[i][j]);
   }
   }
   for(i=0;i<m;i++){
   for(j=0;j<x;j++){
    printf("\n elemento b[%d,%d]:",i+1,j+1);
    scanf("%d",&b[i][j]);
    }
    }
     for(i=0;i<n;i++){
        for(j=0;j<x;j++){
    s=0,g=0;
    for(k=0;k<m;k++){
     g=a[i][k]*b[k][j];
     t=t+g;
     }
     d[i][j]=t;
     }
     }

    printf("\n la matriz a es:\n");
    for(i=0;i<n;i++){
     for(j=0;j<m;j++){
      printf("%3d",a[i][j]);
      }
      printf("\n");
      }
     printf("\n la matriz b es :\n");
     for(i=0;i<n;i++){
      for(j=0;j<x;j++){
       printf("%3d",b[i][j]);
       }
       printf("\n");
       }
      
     printf("\n la resultante de la multiplicacion de las matrices a y b es:\n");
     for(i=0;i<n;i++){
      for(j=0;j<x;j++){
       printf("%3d",d[i][j]);
       }
       printf("\n");
       }
}

