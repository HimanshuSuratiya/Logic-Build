#include<stdio.h>
#include<conio.h>
main()
{
	int n,sum=0;
	printf("Enter a number = ");
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		sum=sum+i;
	}
		printf("Sum of %d numbers is %d ",n,sum);
}
