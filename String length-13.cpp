#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	char s[20];
	printf("Enter Your Name : ");
	gets(s);
	printf("Your Name is : ");
	puts(s);
	for(i=0; s[i]!='\0'; i++)
	{
	}
	printf("Your Name length is = %d",i);
	getch();
}
