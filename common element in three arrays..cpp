#include<stdio.h>
#include<conio.h>
main()
{
	int sizeofArray,sizeofArray2,sizeofArray3,temp;
	printf("Enter Size of First Array = ");
	scanf("%d",&sizeofArray);
	printf("Enter Size of Second Array = ");
	scanf("%d",&sizeofArray2);
	printf("Enter Size of Third Array = ");
	scanf("%d",&sizeofArray3);
	int Array[sizeofArray];
	int Array2[sizeofArray2];
	int Array3[sizeofArray3];
	printf("Enter %d Values of First Array = ",sizeofArray);
	for(int i=0; i<sizeofArray; i++)
	{
		scanf("%d",&Array[i]);
	}
	printf("Enter %d Values of Second Array = ",sizeofArray2);
	for(int i=0; i<sizeofArray2; i++)
	{
		scanf("%d",&Array2[i]);
	}
	printf("Enter %d Values of Third Array = ",sizeofArray3);
	for(int i=0; i<sizeofArray3; i++)
	{
		scanf("%d",&Array3[i]);
	}
	printf("Values of Your First Array = ");
	for(int i=0; i<sizeofArray; i++)
	{
		printf("%d ",Array[i]);
	}
	printf("\nValues of Your Second Array = ");
	for(int i=0; i<sizeofArray2; i++)
	{
		printf("%d ",Array2[i]);
	}
	printf("\nValues of Your Third Array = ");
	for(int i=0; i<sizeofArray3; i++)
	{
		printf("%d ",Array3[i]);
	}
	
//	logic
	printf("\nShorted Your First Array = ");
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
	
	printf("\nShorted Your Second Array = ");
	for(int j=0; j<sizeofArray2; j++)
	{
		for(int i=0; i<sizeofArray2-1; i++)
		{
			if(Array2[i]>Array2[i+1])
			{
				temp=Array2[i];
				Array2[i]=Array2[i+1];
				Array2[i+1]=temp;
			}
		}		
	}
	for(int i=0; i<sizeofArray2; i++)
	{
		printf("%d ",Array2[i]);
	}
	
	printf("\nShorted Your Third Array = ");
	for(int j=0; j<sizeofArray3; j++)
	{
		for(int i=0; i<sizeofArray3-1; i++)
		{
			if(Array3[i]>Array3[i+1])
			{
				temp=Array3[i];
				Array3[i]=Array3[i+1];
				Array3[i+1]=temp;
			}
		}		
	}
	for(int i=0; i<sizeofArray3; i++)
	{
		printf("%d ",Array3[i]);
	}
//	logic
//	mainlogic
	int x=0,y=0,z=0,a=0;
	printf("\nCommon Number of Given Arrays = ");
	while(x<sizeofArray && y<sizeofArray2 && z<sizeofArray3)
	{
		if(Array[x]==Array2[y] && Array2[y]==Array3[z])
		{
			printf("%d ",Array[x]);
			x++;
			y++;
			z++;
			a++;
		}
		else if(Array[x]<Array2[y])
		{
			x++;
		}
		else if(Array2[y]<Array3[z])
		{
			y++;
		}
		else
		{
			z++;
		}
	}
//	mainlogic
	getch();
}
//15 25 35 90 85 70
//10 12 35 85 15
//10 15 18 35













