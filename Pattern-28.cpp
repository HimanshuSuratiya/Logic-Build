#include<stdio.h>
#include<conio.h>
main() 
{
//  E E E E E
//  D D D D D
//  C C C C C
//  B B B B B
//  A A A A A 

    char i,j;
       for(i='E'; i>='A'; i--){
          for(j=1; j<=5;j++){
	     printf(" %c",i);
	  }
	     printf("\n");
       }
}
