#include<stdio.h>
#include<conio.h>
main()
{
	int sizeofArray;
	printf("Enter SizeofArray = ");
	scanf("%d",&sizeofArray);
	int Array[sizeofArray];
	printf("Enter %d Values of Your Array = ");
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
	int tempmax,tempmin,max1,min1;
	int max=Array[0],min=Array[0],current,result=Array[0];
	for(int i=1; i<sizeofArray; i++)
	{
		if(Array[i]!=0)
		{
			current=Array[i];
			tempmax=max*current;
			tempmin=min*current;
			max1=tempmax<tempmin?tempmin:tempmax;
			max=max<max1?max1:max;
			min1=tempmax>tempmin?tempmin:tempmax;
			min=min<min1?min:min1;
			max=max<current?current:max;
			min=min>current?current:min;
			result=max;
		}
	}
	printf("\n%d ",result);
//	logic
	getch();
}
