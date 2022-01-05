#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char string[100];
	printf("Enter your string : ");
	gets(string);
	for(int i=0; i<strlen(string); i++)
	{
		if(string[i]==32)
		{
			for(int j=0; j<strlen(string); j++)
			{
				string[j+i]=string[j+i+1];
			} 	
		}
	}
	printf("Convert to your string in one string : ");
	puts(string);
	getch();
}
