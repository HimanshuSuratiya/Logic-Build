#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char string[100];
	printf("Enter a string small letters are compulsary: ");
	gets(string);
	int length=strlen(string);
	for(int i=0; i<length; i++)
	{
		string[i]=string[i]-32;
	}
	printf("Your string is changed to uppercase : ");
	for(int i=0; i<length; i++)
	{
		printf("%c",string[i]);
	}
	getch();
}
