#include<stdio.h>
#include<conio.h>
main()
{
	int i,l=1;
	char s[100];
	printf("Enter a Sentance : ");
	gets(s);
	for(i=0; s[i]!='\0'; i++)
	{
		if(s[i]==' ')
		l++;	
	}
	printf("Your Sentance is : ");
	puts(s);
	printf("Total Words in This Sentance is = %d",l);
	getch();
}
