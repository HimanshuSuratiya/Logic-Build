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
	int result;
	for(int i=0; i<sizeofArray; i++)
	{
		for(int j=0; j<sizeofArray; j++)
		{
			result=Array[i]+Array[j];
			if(result<=0)
			{
				printf("\nYes Addition of this two values sum is 0 and smaller than 0 = (%d %d)",Array[i],Array[j]);
				break;
			}
		}
		if(result<=0)
		break;
	}
//	logic
	getch();
}
