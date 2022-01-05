#include<conio.h>
#include<stdio.h>
main()
{
   int a;
      printf("Enter a Number ");
      scanf("%d" ,&a);
         if(a%5==0)
            printf("yes This no is divisible at 5");
         else
            printf("No This no is not divisible at 5"); 		   
   getch(); 
}