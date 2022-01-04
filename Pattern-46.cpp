#include<stdio.h>
#include<conio.h>
main() 
{
//   2
//   4 6
//   8 10 12 
//   14 16 18 20
//   22 24 26 28 30

    int i,j;
    int n=2;
    for(i=1; i<=5; i++){
       for(j=1; j<=i; j++){
          printf(" %d",n);
   	  n=n+2;
       }
          printf("\n");   
    }
}


