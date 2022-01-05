#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char name[30],temp,temp2;
	printf("Enter Your Name : ");
	gets(name);
	printf("Your Name is : ");
	puts(name);
	int length=strlen(name);
	for(int i=1; i<=length/2; i++)
	{
		temp=name[i-1];
		temp2=name[length-i];
		name[i-1]=temp2;
		name[length-i]=temp;
	}
	printf("Your Reverse Name is : ");
	puts(name);
	getch();
}
