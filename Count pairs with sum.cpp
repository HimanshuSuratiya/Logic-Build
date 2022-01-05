#include<stdio.h>
#include<conio.h>
main()
{
	int sizeofArray,result;
	printf("Enter Size of Array = ");
	scanf("%d",&sizeofArray);
	int Array[sizeofArray];
	printf("Enter Values of Array = ");
	for(int i=0; i<sizeofArray; i++)
	{
		scanf("%d",&Array[i]);
	}
	printf("Values of Your Array = ");
	for(int i=0; i<sizeofArray; i++)
	{
		printf("%d ",Array[i]);
	}
	printf("\nEnter a number to find sum pairs = ");
	scanf("%d",&result);
//	logic
	int a=0,m=0,sum;
	for(int j=0; j<sizeofArray; j++)
	{
		for(int i=m; i<sizeofArray; i++)
		{
			sum=Array[m]+Array[i+1];
			if(sum==result)
			{
				a++;
			}
		}
		m++;
	}
	printf("Count Pairs of %d in %d",result,a);
//	logic
	getch();
}
