#include<stdio.h>
#include<conio.h>
#include<String.h>
main()
{
	char string[100];
	char ch;
	printf("Enter a string : ");
	gets(string);
	printf("Enter a character to remove : ");
	scanf("%c",&ch);
	for(int i=0; i<strlen(string); i++)
	{
		if(string[i]==ch)
		{
			for(int j=0; j<strlen(string)-i; j++)
			{
				string[j+i]=string[j+i+1];
			} 
			
		}
	}
	printf("Your string is update :");
	puts(string);
	getch();
}
