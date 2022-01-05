#include<stdio.h>
#include<conio.h>
main()
{
	int sizeofArray;
	printf("Enter Sizeof Array = ");
	scanf("%d",&sizeofArray);
	int Array[sizeofArray];
	printf("Enter %d Values of Your Array = ");
	for(int i=0; i<sizeofArray; i++)
	{
		scanf("%d",&Array[i]);
	}
	
//	Max logic
	int a=0;
	for(int i=0; i<sizeofArray; i++)
	{
		for(int j=i; j<sizeofArray-1; j++)
		{
			if(Array[i]>Array[j+1])
			{
				a++;
			}
			else
			{
				break;
			}
		}
		if(a==sizeofArray-1-i)
		{
			printf("Maximum Number of Array is = %d",Array[i]);
			break;
		}
		a=0;
	}
//	Max logic
	
//	Min logic
	a=0;
	for(int i=0; i<sizeofArray; i++)
	{
		for(int j=i; j<sizeofArray-1; j++)
		{
			if(Array[i]<Array[j+1])
			{
				a++;
			}
			else
			{
				break;
			}
		}
		if(a==sizeofArray-1-i)
		{
			printf("\nMinimum Number of Array is = %d",Array[i]);
			break;
		}
		a=0;
	}
//	Min logic

	getch();
}
