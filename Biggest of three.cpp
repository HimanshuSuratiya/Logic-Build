#include<conio.h>
#include<stdio.h>
main()
{
	int num1,num2,num3;
	printf("Enter First Number is = ");
	scanf("%d",&num1);
	printf("Enter Second Number is = ");
	scanf("%d",&num2);
	printf("Enter Third Number is = ");
	scanf("%d",&num3);
	
	if( (num1>num2) && (num1>num3) )
	{
		printf("Biggest Number is = %d",num1);
	}
	else if( (num2>num1) && (num2>num3) )
	{
		printf("Biggest Number is = %d",num2);
	}
	else
	{
		printf("Biggest Number is = %d",num3);
	}
	getch();
}
