#include<stdio.h>
#include<conio.h>
main() 
{
//	1 2 3 4 5 
//      2 4 6 8 10
//      3 6 9 12 15
//      4 8 12 16 20
//      5 10 15 20 25
        int j;
    	   for(j=1; j<=5; j++){
	      int i;
    	         for(i=1; i<=5; i++){
    		    printf("%d ",i*j);
		 }
		    printf(" \n");
	   }
}