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
		if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U')
		{
			string[i]=string[i]-32;
		}
	}
	printf("your string vowels are changed to uppercase : ");
	puts(string);
	getch();
}
