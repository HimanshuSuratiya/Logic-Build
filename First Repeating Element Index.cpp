#include<stdio.h>
#include<conio.h>
main()
{
	int sizeofArray,temp;
	printf("Enter Size of Array = ");
	scanf("%d",&sizeofArray);
	int Array[sizeofArray];
	int tArray[sizeofArray];
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
	int a=0,temp2=0;
	for(int i=0; i<sizeofArray-1; i++)
	{
		for(int j=0; j<sizeofArray-1; j++)
		{
			if(Array[a]==Array[a+1+j])
			{
				tArray[temp2]=a+1+j;
				temp2++;
				break;
			}
		}
		a++;
	}
	for(int j=0; j<temp2; j++)
	{
		for(int i=0; i<temp2-1; i++)
		{
			if(tArray[i]>tArray[i+1])
			{
				temp=tArray[i];
				tArray[i]=tArray[i+1];
				tArray[i+1]=temp;
			}
		}		
	}
	for(int i=0; i<sizeofArray; i++)
	{
		if(temp2>0)
		{
			if(Array[tArray[0]]==Array[i])
			{
				printf("\nFirst Repeating Element Index No is = %d",i);
				break;
			}
		}
		if(i==sizeofArray-1)
		{
			printf("\nThis Array have No Repeating Element.");
		}	
	}
//	logic
	getch();
}
