#include<stdio.h>
#include<conio.h>
main()
{
	int sizeofArray,temp,rotate,min;
	printf("Enter Size of Array = ");
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
	for(int j=0; j<sizeofArray; j++)
	{
		for(int i=0; i<sizeofArray-1; i++)
		{
			if(Array[i]>Array[i+1])
			{
				temp=Array[i];
				Array[i]=Array[i+1];
				Array[i+1]=temp;
			}
		}		
	}
	min=Array[0];
//	logic
	printf("\nEnter a Number to rotate your Array = ");
	scanf("%d",&rotate);
//	rotatelogic
	for(int i=0; i<rotate; i++)
	{
		temp=Array[0];
		for(int j=0; j<sizeofArray-1; j++)
		{
			Array[j]=Array[j+1];
		}
		Array[sizeofArray-1]=temp;
	}
//	rotatelogic
	printf("Rotate Your Array = ");
	for(int i=0; i<sizeofArray; i++)
	{
		printf("%d ",Array[i]);
	}
	for(int i=0; i<sizeofArray; i++)
	{
		if(min==Array[i])
		{
			printf("\nMinimum element Index NUmber in Array = %d",i);
			break;		
		}
	}
	getch();
}
