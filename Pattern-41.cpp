#include<stdio.h>
#include<conio.h>
main() 
{
//   1
//   2 3
//   4 5 6
//   7 8 9 10
     int i,j;
     int n=1;
     for(i=1; i<=4; i++){
        for(j=1; j<=i; j++){
   	   printf(" %d",n);
   	   n++;
	}
           printf("\n");
     }
}


