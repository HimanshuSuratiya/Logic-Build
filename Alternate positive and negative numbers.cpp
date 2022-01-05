#include<stdio.h>
#include<conio.h>
main()
{
	int sizeofArray;
	printf("Enter size of Array = ");
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
	int temp=0;
	for(int i=0; i<sizeofArray-1; i++)
	{
		for(int j=0; j<sizeofArray; j++)
		{
			if(i%2==0)
			{
				if(Array[j+i]>=0)
				{
					temp=Array[j+i];
					for(int p=i+j; p>i; p--)
					{
						Array[p]=Array[p-1];	
					}	
					Array[i]=temp;	
					break;	
				}	
			}
			else
			{
				if(Array[i+j]<0)
				{
					if(i+j==i)
					{
						break;
					}
					else
					{
						temp=Array[i+j];
						for(int p=j+i; p>i; p--)
						{
							Array[p]=Array[p-1];	
						}	
						Array[i]=temp;	
						break;	
					}	
				}
			}
		}
	}
	printf("\n");
	for(int i=0; i<sizeofArray; i++)
	{
		printf("%d ",Array[i]);
	}
//	logic
	getch();
}
