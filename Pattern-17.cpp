#include<stdio.h>
#include<conio.h>
main() 
{
//   1 3 5 7 9 		
//   3 5 7 9 11
//   5 7 9 11 13
//   7 9 11 13 15
//   9 11 13 15 17
	
     int i,j;
        for(j=1; j<=10; j++){
	   if(j%2==1){
	      int k;
	         for(i=j,k=1; i<=10,k<=10; i++,k++){
		    if(i%2==1){
		       printf(" %d ",i);
		    }
		 }	
		    printf("\n");
	    }
	 }
}

