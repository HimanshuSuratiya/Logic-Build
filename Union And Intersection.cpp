#include<stdio.h>
#include<conio.h>
main()
{
	int sizeofArray,sizeofArray2,temp,temp2;
	printf("Enter Size of First Array = ");
	scanf("%d",&sizeofArray);
	printf("Enter Size of Second Array = ");
	scanf("%d",&sizeofArray2);
	int Array[sizeofArray];
	int Array2[sizeofArray2];
	printf("Enter Values of First Array = ");
	for(int i=0; i<sizeofArray; i++)
	{
		scanf("%d",&Array[i]);
	}
	printf("Enter Values of Second Array = ");
	for(int i=0; i<sizeofArray2; i++)
	{
		scanf("%d",&Array2[i]);
	}
	printf("Values of First Array = ");
	for(int i=0; i<sizeofArray; i++)
	{
		printf("%d ",Array[i]);
	}
	printf("\nValues of Second Array = ");
	for(int i=0; i<sizeofArray2; i++)
	{
		printf("%d ",Array2[i]);
	}
	
//	logic
	printf("\nYour First Array is Shorted = ");
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
	for(int i=0; i<sizeofArray; i++)
	{
		printf("%d ",Array[i]);
	}
	
	printf("\nYour Second Array is Shorted = ");
	for(int j=0; j<sizeofArray2; j++)
	{
		for(int q=0; q<sizeofArray2-1; q++)
		{
			if(Array2[q]>Array2[q+1])
			{
				temp2=Array2[q];
				Array2[q]=Array2[q+1];
				Array2[q+1]=temp2;
			}
		}		
	}
	for(int i=0; i<sizeofArray2; i++)
	{
		printf("%d ",Array2[i]);
	}	
//	logic

//	logic2
	
	
//	logic2
	getch();
}
