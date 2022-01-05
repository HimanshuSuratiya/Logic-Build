#include<stdio.h>
#include<conio.h>
main()
{
	int i,x,temp=1,result;
	printf(" Enter a number = ");
	scanf(" %d",&x);
	for(i=1; x!=0; i++)
	{
		temp=x/10;
		result=x;
		x=temp;
	}
	printf(" First Number is = %d",result);
	getch();
}
