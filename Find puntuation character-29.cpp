#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	int count=0;
	char string[100];
	printf("Enter your string : ");
	gets(string);
	for(int i=0; i<strlen(string); i++)
	{
		if(string[i]>=65 && string[i]<=90 || string[i]>=97 && string[i]<=122);
		else if(string[i]==32);
		else count++;
	}
	printf("Your string is : ");
	puts(string);
	printf("punctuation characters exists in a string = %d",count);
	getch();
}
