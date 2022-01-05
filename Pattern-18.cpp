#include<stdio.h>
#include<conio.h>
main() 
{
//   0 1 0 1 0
//   1 0 1 0 1
//   0 1 0 1 0 
//   1 0 1 0 1
//   0 1 0 1 0
//	
//   int i;
//   int x=1,y=0;
//   for(i=1; i<=25; i++){
//      if(i%2==0){
//	   printf("%d",x);
//      }
//      else{
//	   printf("%d",y);
//	}
//	   if(i%5==0)
//	      printf("\n");			}
//    }

      int i,j;
      for(i=1; i<=5; i++){
         for(j=1; j<=5; j++){
    	    printf("%d ",(i+j)%2);
	 }
	    printf("\n");
      }
}

