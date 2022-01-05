#include<stdio.h>
#include<conio.h>
main() 
{
//   1 1 1 1 1
//   0 0 0 0 0
//   1 1 1 1 1
//   0 0 0 0 0
//   1 1 1 1 1

     int i,j;
     for(i=1; i<=5; i++){
        int x=0,y=1;
    	for(j=1; j<=5; j++){
    	   if(i%2==0){
    	      printf(" %d",x);
	   }
	   else{
	      printf(" %d",y);
	   }
	}
	   printf("\n");
     }
}

