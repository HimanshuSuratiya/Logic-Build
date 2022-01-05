#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,result=0;
	printf("Enter First Number to multiplication = ");
	scanf("%d",&a);
	printf("Enter Second Number to multiplication= ");
	scanf("%d",&b);
	for(int i=1; i<=a; i++)
	{
		result=result+b;
	}
	printf("Multiplication is %d and %d = %d ",a,b,result);
	getch();
}
