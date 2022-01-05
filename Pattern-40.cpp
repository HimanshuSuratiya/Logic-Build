#include<stdio.h>
#include<conio.h>
main() 
{
//  2
//  2 4
//  2 4 6
//  2 4 6 8 
//  2 4 6 8 10
    int i,j;
    for(i=2; i<=10; i++){
       if(i%2==0){
          int k;
   	  for(k=2; k<=i; k++){
   	     if(k%2==0){
   	        printf(" %d",k);
	     } 
	  }
       }
          printf("\n");
     }
}


