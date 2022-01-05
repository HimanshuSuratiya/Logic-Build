#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char string[100];
	printf("Enter a string : ");
	gets(string);
	for(int i=0; i<strlen(string); i++)
	{
		if(string[i]==32)
		{
			string[i]=10;
		}
	}
	printf("your String is splited.\n");
	puts(string);
	getch();
}
