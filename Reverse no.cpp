#include<stdio.h>
#include<conio.h>
main()
{
	int n,value,rev=0,x;
	printf("Enter a Number = ");
	scanf("%d",&n);
	value=n;
	
	while(n>0)
	{
		x=n%10;
		rev=rev*10+x;
		n=n/10;
	}
	printf("The reverse of %d is %d\n",value,rev);
	getch();
}
