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
	int a=0;
	for(int i=0; i<sizeofArray; i++)
	{
		for(int j=0; j<sizeofArray; j++)
		{
			if(Array[i]==Array[j])
			{
				if(i==j)
				{ }
				if(i!=j)
				{
					a++;
					break;	
				}
			}		
		}
		if(a==0)
		{
			printf("\nFirst Non Repeating Element Index = %d",i);
			break;	
		}
		a=0;
		if(i==sizeofArray-1)
		{
			printf("\nThis Array has All Reapeted Values = 0");
		}
	}
//	logic
	getch();
}
