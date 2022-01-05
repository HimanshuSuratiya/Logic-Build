#include<stdio.h>
#include<conio.h>
main()
{
	int sizeofArray;
	printf("Enter some Numbers = ");
	scanf("%d",&sizeofArray);
	int Array[sizeofArray];
	printf("Enter %d numbers 1 to %d Find Missing No. = ",sizeofArray-1,sizeofArray);
	for(int i=0; i<sizeofArray-1; i++)
	{
		scanf("%d",&Array[i]);
	}
	
//	logic
	int a=1;
	for(int i=0; i<sizeofArray-1; i++)
	{
		if(a==Array[i])
		{
			a++;
		}
	}
	printf("Missing Number is = %d",a);
//	logic
	getch();
}
