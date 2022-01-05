#include<stdio.h>
#include<conio.h>
main()
{
	int sizeofArray,large,small;
	printf("Enter a Size of Array = ");
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
	int temp;
	for(int j=0; j<sizeofArray; j++)
	{
		for(int i=1; i<sizeofArray; i++)
		{
			if(Array[i-1]>Array[i])
			{
				temp=Array[i-1];
				Array[i-1]=Array[i];
				Array[i]  =temp;
			}
		}	
	}
//	logic

	printf("\nEnter a number to find the nth Largest Number = ");
	scanf("%d",&large);
	printf("Your %d Largest Number is = %d",large,Array[large-1]);
	
	printf("\nEnter a number to find the nth Smallest Number = ");
	scanf("%d",&small);
	printf("Your %d Smallest Number is = %d",small,Array[sizeofArray-small]);
	getch();
}
