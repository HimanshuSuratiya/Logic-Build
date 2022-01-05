#include<stdio.h>
#include<conio.h>
main() 
{
//  1 2 3 4 5			
//  2 3 4 5 6  
//  3 4 5 6 7  
//  4 5 6 7 8  
//  5 6 7 8 9
    int i,j;
       for(i=1; i<=5; i++){
          int k;
	  for(j=i,k=1; k<=5; k++){
	     printf(" %d",j);
	     j++;
	  }
	     printf("\n");
       }
}
