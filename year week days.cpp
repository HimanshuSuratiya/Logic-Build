#include<stdio.h>
#include<conio.h>
main()
{
	int x,years,weeks,days;
	printf("Enter Number of days = ");
	scanf("%d",&x);
	years=x/365;
	weeks=(x%365)/7;
	days=(x%365)%7;
	
	printf("%d = %d years,%d weeks,%d days \n",x,years,weeks,days);
	getch();			 
}
