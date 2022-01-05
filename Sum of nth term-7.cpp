#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,result=0;
	printf(" Enter a number = ");
	scanf(" %d",&n);
	for(i=1; i<=n; i++)
	{
		result = result + i;
	}
		printf(" sum of nth term is = %d",result);
	getch();
}
