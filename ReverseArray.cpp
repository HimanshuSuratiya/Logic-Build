#include<stdio.h>
#include<conio.h>
main()
{
	int sizeofArray,temp,temp2;
	printf("Enter Size of Array = ");
	scanf("%d",&sizeofArray);
	int Array[sizeofArray];
	printf("Enter Values of Array = ");
	for(int i=0; i<sizeofArray; i++)
	{
		scanf("%d",&Array[i]);
	}
	printf("Your Array Values is = ");
	for(int i=0; i<sizeofArray; i++)
	{
		printf("%d ",Array[i]);
	}
	
//	logic
	for(int i=1; i<sizeofArray/2+1; i++)
	{
		temp =Array[i-1];
		temp2=Array[sizeofArray-i];
		Array[i-1]=temp2;
		Array[sizeofArray-i]=temp;
	}
//  logic
	printf("\nYour Array is Reversed = ");
	for(int i=0; i<sizeofArray; i++)
	{
		printf("%d ",Array[i]);
	}
	getch();
}
