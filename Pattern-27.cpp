#include<stdio.h>
#include<conio.h>
main() 
{
//   A B C D E 
//   A B C D E
//   A B C D E
//   A B C D E 
//   A B C D E 

     char i,j;
     for(i=1; i<=5; i++){
        for(j='A'; j<='E'; j++){
	   printf(" %c",j);
	}
	   printf("\n");
     }
}
