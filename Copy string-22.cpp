#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char string[100];
	char copystring[100];
	printf("Enter a string : ");
	gets(string);
	for(int i=0; i<strlen(string); i++)
	{
		copystring[i]=string[i];
	}
	printf("Your string is copied : ");
	puts(copystring);
	getch();
}
