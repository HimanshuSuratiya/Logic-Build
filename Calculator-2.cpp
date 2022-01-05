#include<stdio.h>
#include<conio.h>
main()
{
	char x;
	int a,b;
	float p,q;
	printf(" Enter number sign number (-  +  /  *) = ");
	scanf("%f %c %f",&p,&x,&q);
	a=p;
	b=q;
	if(x==45)
	{
		printf(" (-) = This sign is Subtraction\n");
		printf(" Subtraction to %d - %d = %d",a,b,a-b);	
	}
	else if(x==43)
	{
		printf(" (+) = This sign is Addition\n");
		printf(" Addition of %d + %d = %d",a,b,a+b);
	}
	else if(x==47)
	{
		printf(" (/) = This sign is Divide\n");	
		printf(" Divide of %f / %f = %f",p,q,p/q);
	}	
	else if(x==42)
	{
		printf(" (*) = This sign is Multiplication\n");
		printf(" Multiplication of %d * %d = %d",a,b,a*b);	
	}
	else
		printf(" Error");
	getch();
}
