#include<stdio.h>
#include<conio.h>
main()
{
	int x,i,temp;
	printf(" Enter a number = ");
	scanf(" %d",&x);
	for(i=0; x!=0; i++)
	{
		temp=x/10;
		x=temp;
	}
		printf(" This number have %d digits.",i);
	getch();
}
