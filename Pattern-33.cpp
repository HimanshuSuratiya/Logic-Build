#include<stdio.h>
#include<conio.h>
main() 
{
//  E J O T Y
//  D I N S X
//  C H M R W
//  B G L Q V 
//  A F K P U

    char i,j;
    for(i='E'; i>='A'; i--){
       int k;
       for(j=i,k=1; k<=5; k++){
          printf(" %c",j);
	  j=j+5;
       }
          printf("\n");
    }
}


