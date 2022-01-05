#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	int x,i,j,length1,length2;
	char s[20],s1[20];
	printf("Enter First Name : ");
	gets(s);
	printf("Enter Second Name : ");
	gets(s1);
	printf("Your First Name is :");
	puts(s);
	printf("Your Second Name is :");
	puts(s1);
	length1=strlen(s);
	length2=strlen(s1);
	if(length1==length2)
	{
		for(i=0; i<length2; i++)
		{
			if(s[i] == s1[i])
			{
			} 
			else
				break;
		}
		if(i == length2)
		{
			printf("Names Are Same.");
		}
		else
			printf("Names Are Not Same.");
	}
	else
	{
		printf("Your Names Are Not same.");
	}
	getch();
}
