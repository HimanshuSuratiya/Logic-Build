#include<stdio.h>
#include<conio.h>
main()
{
	int sizeofArray,repeat,miss;
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
//	logic
	for(int i=0; i<sizeofArray-1; i++)
	{
		for(int j=0; j<sizeofArray; j++)
		{
			if(Array[i]==Array[j+1+i])
			{
				break;
			}
		}
	}
//	logic
	getch();
}
