#include<stdio.h>
#include<conio.h>
main()
{
	int sizeofArray;
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
	
//	logic
	printf("\nThis Numbers Are Dublicated in an Array = ");
	int m=0;
	for(int j=0; j<sizeofArray; j++)
	{
		for(int i=0; i<sizeofArray-1; i++)
		{
			if(Array[m]==Array[m+i+1])
			{
				printf("%d ",Array[m+i+1]);
				break;
			}
		}
		m++;	
	}
//	logic
	getch();
}
