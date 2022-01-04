#include<stdio.h>
#include<conio.h>
main() 
{
//  E D C B A
//  E D C B A
//  E D C B A
//  E D C B A
//  E D C B A

    char i,j;
    for(j=1; j<=5;j++){
       for(i='E'; i>='A'; i--){
          printf(" %c",i);
       }
          printf("\n");
    }
}
