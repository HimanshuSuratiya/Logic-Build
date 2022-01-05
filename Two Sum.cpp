#include<stdio.h>
#include<conio.h>
main()
{
	int sizeofArray,target;
	printf("Enter SizeofArray = ");
	scanf("%d",&sizeofArray);
	int Array[sizeofArray];
	printf("Enter %d Values of Your Array = ");
	for(int i=0; i<sizeofArray; i++)
	{
		scanf("%d",&Array[i]);
	}
	printf("Values of Your Array = ");
	for(int i=0; i<sizeofArray; i++)
	{
		printf("%d ",Array[i]);
	}
	printf("\nEnter Target = ");
	scanf("%d",&target);
//	logic
	printf("Two Sum is = ");
	for(int i=0; i<sizeofArray-1; i++)
	{
		for(int j=i; j<sizeofArray; j++)
		{
			if(Array[i]+Array[j+1]==target)
			{
				printf("(%d,%d) ",i,j+1);
				break;
			}
		}
	}
//	logic
	getch();
}
