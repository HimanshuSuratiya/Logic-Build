#include<stdio.h>
#include<conio.h>
main() 
{
//   0 1 0 1 0
//   0 0 0 0 0
//   0 1 0 1 0
//   0 0 0 0 0
//   0 1 0 1 0

     int i,j;
     for(i=1; i<=5; i++){
        int k=0;
    	for(j=1; j<=5; j++){
    	   if(i%2==1){
    	      printf(" %d",(i+j)%2);
	   }
	   else{
              printf(" %d",k);
	   }
	 }
	    printf("\n");
      }
}

