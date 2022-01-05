#include<stdio.h>
#include<conio.h>
main()
{
	int sizeofArray,temp,a=0;
	printf("Enter Size of Array = ");
	scanf("%d",&sizeofArray);
	int Array[sizeofArray];
	int rArray[sizeofArray];
	int fArray[sizeofArray];
	printf("Enter %d Values of Your Array = ");
	for(int i=0; i<sizeofArray; i++)
	{
		scanf("%d",&Array[i]);
	}
//	shortlogic
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
//	shortlogic	
//	logic
	for(int i=0; i<sizeofArray; i++)
	{
		if(Array[i]==Array[i+1])
		{
		}
		else
		{
			rArray[a]=Array[i];
			a++;
		}
	}
//	logic

//	logic
	int n=0,p=0,y=0;
	for(int i=0; i<a; i++)
	{
		for(int j=y; j<=sizeofArray; j++)
		{
			if(rArray[p]==Array[j])
			{
				n++;
			}
			else
			{
				fArray[p]=n;
				n=0;
				y=j;
				p++;
				break;	
			}			
		}
	}
//	logic
	for(int i=0; i<a; i++)
	{
		printf("\nFrequency of %d = %d",rArray[i],fArray[i]);
	}
	getch();
}

