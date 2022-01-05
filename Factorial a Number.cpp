#include<stdio.h>
#include<conio.h>
main()
{
	int number,fact=1;
	printf("Enter a Number to find Factorial = ");
	scanf("%d",&number);
	for(int i=number; i>1; i--)
	{
		fact=fact*i;
	}
	printf("Factorial of %d is %d",number,fact);
	getch();
}
