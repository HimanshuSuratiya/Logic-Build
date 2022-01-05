#include<stdio.h>
#include<conio.h>
main() 
{
//	C1 C2 C3 C4 C5	
//   R1  5 6 15 16 25
//   R2  4 7 14 17 24
//   R3  3 8 13 18 23
//   R4  2 9 12 19 22
//   R5  1 10 11 20 21
    
     int row,column;
     int number = 5;
//   evenColumn = (2 * number) - (2 * row - 1);
//   oddColumn = 2 * row - 1;
     for(row=5; row>=1; row--){
        int prevNumber;
    	for(column=1; column<=number; column++){
           if(column==1){
    	      printf("%d ", row);
    	      prevNumber = row;
	   }
	   else{
	      if(column%2==0){
	         printf("%d ", prevNumber + ((2 * number) - (2 * row - 1)));	
		 prevNumber = prevNumber + ((2 * number) - (2 * row - 1));				
	      }
	      else {
	         printf("%d ", prevNumber + (2 * row - 1));
		 prevNumber = prevNumber + (2 * row - 1);	
	      }		
	   }
	   }
	      printf("\n");
	}
}