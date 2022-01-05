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
       for(j='A',i=1; j<='Y',i<=25 ;j++,i++){
          printf(" %c",j);
	  if(i%5==0){
	     printf("\n");
	  }
       }
}
