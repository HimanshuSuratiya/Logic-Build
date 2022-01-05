#include<stdio.h>
#include<conio.h>
main() 
{
//   1 0 1 0 1
//   0 1 0 1 0
//   1 0 1 0 1
//   0 1 0 1 0
//   1 0 1 0 1

     int i,j;
     for(i=0; i<=4; i++){
        for(j=1; j<=5; j++){
    	   printf("%d ",(i+j)%2);
	}
	   printf("\n");
     }
}

