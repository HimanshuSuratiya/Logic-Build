#include<stdio.h>
#include<conio.h>
main() 
{
//  A B C D E
//  B C D E F
//  C D E F G 
//  D E F G H
//  E F G H I

    char i,j;
       for(i='A'; i<='E'; i++){
          int k;
	  for(j=i,k=1; k<=5; k++){
	     printf(" %c",j);
	     j++;
	  }
	     printf("\n");
	}
}

