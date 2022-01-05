#include<conio.h>
#include<stdio.h>
main()
{
	int sizeofArray,result=0;
	printf("Enter SizeofArray = ");
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
	for(int i=0; i<sizeofArray-1; i++)
	{
		for(int j=sizeofArray-1; j>i; j--)
		{
			if(Array[j]>Array[i])
			{
				
				if(result<j-i)
				{
					result=j-i;
					break;
				}
					
			}
		}
	}
	printf("\nMaximum Distance Index is = %d",result);
//	logic
	getch();
}
