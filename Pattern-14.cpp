#include<stdio.h>
#include<conio.h>
main() 
{
//   5 10 15 20 25
//   4 9 14 19 24
//   3 8 13 18 23
//   2 7 12 17 22
//   1 6 11 16 21
     int i,j;
        for(i=5; i>=1; i--){
    	   int k;
    	      for(j=i,k=1; k<=5; k++){
    	         printf(" %d ",j);
    		 j=j+5;	
	      }
	         printf("\n");
	}
}