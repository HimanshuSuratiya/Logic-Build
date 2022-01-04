#include<stdio.h>
#include<conio.h>
main() 
{
//	1 2 3 4 5
//	6 7 8 9 10
//	11 12 13 14 15
//	16 17 18 19 20
//	21 22 23 24 25
  
        int i;
           for(i=1; i<=25; i++){
    	      printf("%d ",i);
    	      if(i%5==0)
    	      printf(" \n");
           }
}