#include<stdio.h>
#include<conio.h>
main()
{
	int sizeofArray;
	printf("Enter Size of Array = ");
	scanf("%d",&sizeofArray);
	int Array[sizeofArray];
	printf("Enter Values of Your Array = ");
	for(int i=0; i<sizeofArray; i++)
	{
		scanf("%d",&Array[i]);
	}
	printf("Your Values of Array = ");
	for(int i=0; i<sizeofArray; i++)
	{
		printf("%d ",Array[i]);
	}
	
//	logic
	int temp=Array[sizeofArray-1];
	for(int i=sizeofArray-1; i>=0; i--)
	{
		Array[i]=Array[i-1];
	}
	Array[0]=temp;
//	logic
	printf("\nYour Array is Cyclically rotate = ");
	for(int i=0; i<sizeofArray; i++)
	{
		printf("%d ",Array[i]);
	}
	getch();
}
