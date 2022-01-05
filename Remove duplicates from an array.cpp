#include<stdio.h>
#include<conio.h>
main()
{
	int sizeofArray;
	printf("Enter Size of Array = ");
	scanf("%d",&sizeofArray);
	int Array[sizeofArray];
	printf("Enter %d Values of Your Array = ",sizeofArray);
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
	for(int i=0; i<sizeofArray; i++)
	{
		for(int j=i+1; j<sizeofArray; j++)
		{
			if(Array[i]==Array[j])
			{
				for(int k=j; k<sizeofArray; k++)
				{
					Array[k]=Array[k+1];
				}
				sizeofArray--;
				j--;
			}
		}
	}
//  logic
	printf("\nRemove Duplicates Values From an Array = ");
	for(int i=0; i<sizeofArray; i++)
	{
		printf("%d ",Array[i]);
	}
	getch();
}
