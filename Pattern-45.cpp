#include<stdio.h>
#include<conio.h>
main() 
{
//   1
//   3 5
//   7 9 11 
//   13 15 17 19
//   21 23 25 27 29
     int i,j;
     int n=1;
     for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
   	   printf(" %d",n);
   	   n=n+2;
	}
	   printf("\n");   
     }	
}


