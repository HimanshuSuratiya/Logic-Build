#include<stdio.h>
#include<conio.h>
main()
{
	int sizeofArray,mid;
	printf("Enter size of array = ");
	scanf("%d",&sizeofArray);
	int Array[sizeofArray];
	mid=sizeofArray/2;
	printf("Enter values of Array = ");
	for(int i=0; i<sizeofArray; i++)
	{
		scanf("%d",&Array[i]);
	}
	printf("Values of your Array is = ");
	for(int i=0; i<sizeofArray; i++)
	{
		printf("%d ",Array[i]);
	}
	if(Array[mid]>Array[mid-1] && Array[mid]>Array[mid+1])
	{
		printf("\nPeak Element Index No is = %d \n",mid);
	}
	else if(Array[mid]<Array[mid-1] && Array[mid+1]<Array[mid-1])
	{s
		printf("piche");	
	}
	else if(Array[mid]<Array[mid+1] && Array[mid-1]<Array[mid+1])
	{
		printf("agge");	
	}		
	getch();
}
