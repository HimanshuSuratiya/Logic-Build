#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char string[100];
	char substring[50];
	char result[50];
	printf("Enter A string : ");
	gets(string);
	printf("Enter SubString : ");
	gets(substring);
	int stringlength=strlen(string);
	int substringlength=strlen(substring);
	int biglength=stringlength>substringlength?stringlength:substringlength;
	
	int a=0;
	for(int i=0; i<biglength; i++)
	{
		for(int j=0; j<biglength; j++)
		{
			if(substring[a]==string[j])
			{
				result[a]=string[j];
				a++;
				break;
			}
			else
				result[a]='\0';	
		}
	}
	int cmpstring=strcmp(substring, result);
	if(cmpstring==0)
	{
		printf("substring are here in string");
	}
	else
	{
		printf("substring are not here in string");
	}
	
	
	getch();
}
