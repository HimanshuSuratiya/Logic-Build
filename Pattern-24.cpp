#include<stdio.h>
#include<conio.h>
main() 
{
//   0 1 0 1 0 
//   0 1 0 1 0 
//   0 1 0 1 0 
//   0 1 0 1 0 
//   0 1 0 1 0 

     int i,j;
     int k;
     for(k=1,i=1; i<=5; i++){
        for(j=1; j<=5; j++){
    	   printf(" %d",(k+j)%2);
	}
	   printf("\n");
     }
}

