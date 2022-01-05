#include<stdio.h>
#include<conio.h>
main()
{
	int sizeofArray;
	printf("Enter a size of Array = ");
	scanf("%d",&sizeofArray);
	int oArray[sizeofArray];
	int tArray[sizeofArray];
	printf("Enter Values of your Array = ");
	for(int i=0; i<sizeofArray; i++)
	{
		scanf("%d",&oArray[i]);
	}
	printf("Values of your Array = ");
	for(int j=0; j<sizeofArray; j++)
	{
		printf("%d ",oArray[j]);
	}		
	
	for(int j=0; j<sizeofArray; j++)
	{
		tArray[j]=oArray[j];
	}
	
//	logic
	int temp,temp2;
	for(int i=0; i<sizeofArray; i++)
	{
		for(int k=sizeofArray-1; k>=0; k--)
		{
			if(tArray[k]<tArray[k-1])
			{
				temp  =tArray[k];
				temp2 =tArray[k-1];
				tArray[k]  =temp2;
				tArray[k-1]=temp;
			}
		}
	}
	
	for(int i=0; i<sizeofArray; i++)
	{
		if(tArray[0]==oArray[i])
		{
			printf("\nMinimum Value Index Number is = %d",i);
			break;
		}
	}
	for(int i=0; i<sizeofArray; i++)
	{
		if(tArray[sizeofArray-1]==oArray[i])
		{
			printf("\nMaximum Value Index Number is = %d",i);
			break;
		}
	}	
//logic2
	getch();
}
