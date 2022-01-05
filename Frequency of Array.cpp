#include<stdio.h>
#include<conio.h>
main()
{
	int sizeofArray,number,temp=0;
	printf("Enter Size of Array = ");
	scanf("%d",&sizeofArray);
	int Array[sizeofArray];
	printf("Enter Values of Your Array = ");
	for(int i=0; i<sizeofArray; i++)
	{
		scanf("%d",&Array[i]);
	}
	printf("Enter a Number to find frequency of an number = ");
	scanf("%d",&number);
	for(int i=0; i<sizeofArray; i++)
	{
		if(number==Array[i])
		{
			temp++;
		}
	}
	printf("Frequency of %d is %d",number,temp);
	getch();
}
