#include<stdio.h>
#include<conio.h>
main() 
{
//   1
//   3 5
//   5 7 9 
//   7 9 11 13
//   9 11 13 15 17
     int i,j;
     for(i=1; i<=10; i++){
        if(i%2==1){
   	   int k=i;
   	   for(j=1; j<=i; j++){
   	      if(j%2==1){
   	         printf(" %d",k);
   		 k=k+2;
	      }	
	   }
	}
	   printf("\n");
      }
}

