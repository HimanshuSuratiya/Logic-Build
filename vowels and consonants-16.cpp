#include<stdio.h>
#include<conio.h>
main()
{
	int i,v=0,c=0;
	char s[50];
	printf("Enter a English Sentance to Find Vowel And Consonant : ");
	gets(s);
	printf("Your Sentance is : ");
	puts(s);
	for(i=0; s[i]!='\0'; i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
			{
				v++;
			}
		else if(s[i]==' ');
		else
			c++;
	}
	printf("Vowels of Your Sentance is %d\n",v);
	printf("Consonant of Your Sentance is %d\n",c);
	getch();
}
