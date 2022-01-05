#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char string[100];
	printf("Enter a string Capital letters are compulsary: ");
	gets(string);
	int length=strlen(string);
	for(int i=0; i<length; i++)
	{
		if(string[i]==32)
		{
			string[i]=string[i]-32;
		}
		else
			string[i]=string[i]+32;
	}
	printf("Your string is changed to lowercase : ");
	for(int i=0; i<length; i++)
	{
		printf("%c",string[i]);
	}
	getch();
}
