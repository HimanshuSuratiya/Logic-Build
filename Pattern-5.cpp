#include<stdio.h>
#include<conio.h>
main()
{
// 	5 4 3 2 1
//  	5 4 3 2 1
//	5 4 3 2 1 
//	5 4 3 2 1 
//  	5 4 3 2 1
   
        int i;
           for(i=5; i>=1; i--){
   	      int j;
   	         for(j=5; j>=1; j--){
   	   	    printf("%d ",j);
		 }
		    printf(" \n"); 
           }
}