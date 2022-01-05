#include<stdio.h>
#include<conio.h>
main()
{
	int x,i,fact=1;
	printf(" Enter a number to find factorial = ");
	scanf(" %d",&x);
	for(i=x; i>=1; i--)
	{
		fact = fact * i; 
	}
		printf(" Factorial of  %d is = %d",x,fact);
	getch();
}

