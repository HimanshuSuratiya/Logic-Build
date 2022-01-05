#include<stdio.h>
#include<conio.h>
main()
{
	int sizeofArray,temp,sum=0;
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
	for(int i=0; i<sizeofArray; i++)
	{
		temp=Array[0];
		for(int j=0; j<sizeofArray-1; j++)
		{
			Array[j]=Array[j+1];
		}
		Array[sizeofArray-1]=temp;
		for(int p=0; p<sizeofArray; p++)
		{
			sum=sum+Array[p]*p;
		}
		tArray[i]=sum;
		sum=0;
	}
//	logic
	for(int j=0; j<sizeofArray; j++)
	{
		for(int i=0; i<sizeofArray-1; i++)
		{
			if(tArray[i]>tArray[i+1])
			{
				temp=tArray[i];
				tArray[i]=tArray[i+1];
				tArray[i+1]=temp;
			}
		}		
	}
	printf("\nMax sum in the configuration is = %d",tArray[sizeofArray-1]);
	getch();
}
