#include<stdio.h>
#include<conio.h>
main()
{
	int sizeofArray,sum=0;
	printf("Enter Size of Array = ");
	scanf("%d",&sizeofArray);
	int Array[sizeofArray];
	printf("Enter %d Values of Array = ",sizeofArray);
	for(int i=0; i<sizeofArray; i++)
	{
		scanf("%d",&Array[i]);
	}
	printf("Values of Your Array = ");
	for(int i=0; i<sizeofArray; i++)
	{
		printf("%d ",Array[i]);
	}
	for(int i=0; i<sizeofArray; i++)
	{
		sum=sum+Array[i];
	}
	printf("\nSum of All Array is = %d",sum);
	getch();
}
