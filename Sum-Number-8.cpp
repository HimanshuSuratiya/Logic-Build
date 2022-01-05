#include<stdio.h>
#include<conio.h>
main()
{
	int n,temp,temp2,i,result=0;
	printf(" Enter a number to find sum of all digits = ");
	scanf(" %d",&n);
	for(i=1; n!=0; i++)
	{
		temp = n%10;
		temp2 = n/10;
		result = result + temp;
		n = temp2;
	}
		printf(" Sum of this number is = %d",result);
	getch();
}

