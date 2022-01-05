#include<stdio.h>
#include<conio.h>
main()
{
	int x,result=0,i;
	printf(" Enter a number to find reverse = ");
	scanf(" %d",&x);
	for(i=1; x!=0; i++)
	{
		result = result * 10;
		result = result + x%10;
		x = x/10;
	}
		printf("Reserve number is = %d",result);
	getch();
}
