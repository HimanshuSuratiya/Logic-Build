#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("Enter Value of A = ");
	scanf("%d",&a);
	printf("Enter value of B = ");
	scanf("%d",&b);
	printf("The Values of A is %d and B is %d Before swaping\n",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("The Values of A is %d and B is %d After swaping\n",a,b);
	getch();
}
