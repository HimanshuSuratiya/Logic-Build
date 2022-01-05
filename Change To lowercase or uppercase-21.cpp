#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char string[100];
	printf("Enter string : ");
	gets(string);
	int length=strlen(string);
	for(int i=0; string[i]!='\0'; i++)
	{
		if(string[i]>=65 && string[i]<=90)
		{
			string[i]=string[i]+32;
		}
		else
		{
			string[i]=string[i]-32;
		}
	}
	printf("Your string is changed to uppercase and lowercase: ");
	for(int i=0; i<length; i++)
	printf("%c",string[i]);
	getch();
}
