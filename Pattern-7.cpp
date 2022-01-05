#include<stdio.h>
#include<conio.h>
main() 
{
//	1 3 5 7 9 
//	11 13 15 17 19 
//	21 23 25 27 29
//  	31 33 35 37 39 
//  	41 43 45 47 49 
        int i,j,num=1;
           for(j=1; j<=5; j++){
   	      for(i=1; i<=5; i++){ 
   	         printf("%d ",num);
   		 num=num+2;
  	      }
	         printf(" \n"); 
           }   
}