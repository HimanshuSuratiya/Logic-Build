#include<stdio.h>
#include<conio.h>
main()
{
	int value,n,sum=0,x;
	printf("Enter a number = ");
	scanf("%d",&n);
	value=n;
	
	while(n>0)
	{
		x=n%10;
		sum=sum+x;
		n=n/10;
	}
	printf("The sum of all digits in %d is %d\n",value,sum);
	getch();
}
