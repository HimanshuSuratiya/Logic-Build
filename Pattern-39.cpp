#include<stdio.h>
#include<conio.h>
main() 
{
//  5
//  4 5 
//  3 4 5
//  2 3 4 5
//  1 2 3 4 5
    int i,j;
    for(i=5; i>=1; i--){
       int k;
       for(k=i; k<=5; k++){
          printf(" %d",k);
       }	
          printf("\n");
    }
}

