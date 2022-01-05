#include<stdio.h>
#include<conio.h>
main() 
{
//   1
//   2 4
//   3 6 9 
//   4 8 12 16
//   5 10 15 20 25

    int i,j;
    for(i=1; i<=5; i++){
       int k;
       for(k=i,j=1; j<=i; j++){
          printf(" %d",k);
   	  k=k+i;
       }
          printf("\n");
     }
}



