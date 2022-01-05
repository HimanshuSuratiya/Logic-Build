#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char string[100];
	int temp,temp2;
	printf("Enter Your Name All Characters are Small and Capital: ");
	gets(string);
	int length=strlen(string);
	for(int i=1; i<length; i++)
	{
		for(int j=0; j<length-1; j++)
		{
			if(string[j]>string[j+1])
			{	
				temp       =string[j];
				string[j]  =string[j+1];
				string[j+1]=temp;
			}	
		}
	}
	printf("Your Name is Shorted : ");
	puts(string);
	getch();
}
