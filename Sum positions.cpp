#include<stdio.h>
#include<conio.h>
main()
{
	int sizeofArray,sum,result=0;
	printf("Enter Size of Array = ");
	scanf("%d",&sizeofArray);
	int Array[sizeofArray];
	printf("Enter Values of Your Array = ");
	for(int i=0; i<sizeofArray; i++)
	{
		scanf("%d",&Array[i]);
	}
	printf("Your Array Values is = ");
	for(int i=0; i<sizeofArray; i++)
	{
		printf("%d ",Array[i]);
	}
	
	printf("\nEnter a number to find sum with positions = ");
	scanf("%d",&sum);
	
	for(int i=0; i<sizeofArray; i++)
	{
		result=re
		if(result==sum)
		{
			break;	
		}
	}	
	
	printf("%d ",result);
	getch();
}
