#include<stdio.h>
#include<conio.h>
main()
{
	int sizeofArray,temp;
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
	printf("\nYour Array is Shorted = ");
	for(int i=0; i<sizeofArray; i++)
	{
		printf("%d ",Array[i]);
	}
	
	int count=Array[0],p;
	for(int i=0; i<sizeofArray; i++)
	{
		if(Array[i]==count)
		{
			p=i;
			count++;
		}
		else
			break;
	}
	printf("\nSubsequence is = %d",p+1);
//	logic
	getch();
}
