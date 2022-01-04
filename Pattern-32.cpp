#include<stdio.h>
#include<conio.h>
main() 
{
//  A F K P U
//  B G L Q V
//  C H M R W
//  D I N S X
//  E J O T Y

    char i,j;
    for(i='A'; i<='E'; i++){
       int k;
       for(j=i,k=1; k<=5; k++){
          printf(" %c",j);
	  j=j+5;
       }
          printf("\n");
    }
}

