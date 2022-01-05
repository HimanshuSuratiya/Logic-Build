#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,j,temp,temp2;
	printf("Enter a Number = ");
	scanf("%d",&n);
	int s[n];
	printf("Enter %d numbers to Shorted Form = ",n);
	for(j=0; j<n; j++)
	{
		scanf("%d",&s[j]);
	}
	
	for(j=0; j<n; j++)
	{
		for(i=n-1; i>=0; i--)
		{
			if(s[i]<s[i-1])
			{
				temp  =s[i];
				temp2 =s[i-1];
				s[i]  =temp2;
				s[i-1]=temp;
			}
		}
	}
	
	printf("Numbers Are Shorted : ");
	for(i=0; i<n; i++)
	{
		printf("%d ",s[i]);
	}
		
	getch();
}
