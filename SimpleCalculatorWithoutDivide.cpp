#include<stdio.h>
#include<conio.h>
main()
{
   int a,s,m,x,y;
     printf("Enter two numbers for addition ");
     scanf("%d %d" ,&x,&y);
     a=x+y;
     printf("sum of %d and %d is %d \n",x,y,a);
   
     printf("Enter two numbers for subtraction ");
     scanf("%d %d" ,&x,&y);
     s=x-y;
     printf("subtraction of %d and %d is %d \n",x,y,s);
    
     printf("Enter two numbers for multiplicaion ");
     scanf("%d %d" ,&x,&y);
     m=x*y;
     printf("multiplication of %d and %d is %d \n",x,y,m);
     
   getch();
}

