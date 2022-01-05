#include<stdio.h>
#include<conio.h>
main()
{
	int sizeofArray,sizeofArray2,temp;
	printf("Enter Size of First Array = ");
	scanf("%d",&sizeofArray);
	printf("Enter Size of Second Array = ");
	scanf("%d",&sizeofArray2);
	int Array[sizeofArray];
	int Array2[sizeofArray2];
	int rArray[sizeofArray+sizeofArray2];
	printf("Enter %d Values of Your First Array = ",sizeofArray);
	for(int i=0; i<sizeofArray; i++)
	{
		scanf("%d",&Array[i]);
	}
	printf("Enter %d Values of Your Second Array = ",sizeofArray2);
	for(int i=0; i<sizeofArray2; i++)
	{
		scanf("%d",&Array2[i]);
	}
//	logic
	int j=0;
	for(int i=0; i<sizeofArray+sizeofArray2; i++)
	{
		if(i<sizeofArray)
		{
			rArray[i]=Array[i];
		}
		else
		{
			rArray[i]=Array2[j];
			j++;
		}
	}
	printf("This is Merge Array = ");
	for(int i=0; i<sizeofArray+sizeofArray2; i++)
	{
		printf("%d ",rArray[i]);
	}
//	logic
//	shortlogic
	for(int j=0; j<sizeofArray+sizeofArray2; j++)
	{
		for(int i=0; i<sizeofArray+sizeofArray2-1; i++)
		{
			if(rArray[i]>rArray[i+1])
			{
				temp=rArray[i];
				rArray[i]=rArray[i+1];
				rArray[i+1]=temp;
			}
		}		
	}	
//	shortlogic
	printf("\nYour Shorted and Merge Result Array = ");
	for(int i=0; i<sizeofArray+sizeofArray2; i++)
	{
		printf("%d ",rArray[i]);
	}
	getch();
}
