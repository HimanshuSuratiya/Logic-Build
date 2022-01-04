#include<stdio.h>
#include<conio.h>
main() 
{
//   2 4 6 8 10 
//   12 14 16 18 20 
//   22 24 26 28 30 
//   32 34 36 38 40
//   42 44 46 48 50 
     int i,j,num=2;
        for(j=1; j<=5; j++){
   	   for(i=1; i<=5; i++){ 
   	      printf("%d ",num);
   	      num=num+2;
  	   }
              printf(" \n"); 
        }   
}