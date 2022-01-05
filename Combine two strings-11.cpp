#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	int i,n,j,l1,l2;
	char s[20],s1[20],s2[50];
	printf("Enter First Name : ");
	gets(s);
	printf("Enter Second Name : ");
	gets(s1);
	printf("Your First Name is : ");
	puts(s);
	printf("Your Second Name is : ");
	puts(s1);
		l1=strlen(s);
		l2=strlen(s1);
		
		for(i=0; i<=l1; i++)
		{
			if(s[i]!='\0')
			{
				s2[i]=s[i];
			}
			else
			{
				for(n=0; n<l2; n++)
				{
					s2[j]=s1[n];
					j++;
				}
			}
				j=i+1;
		}		
			printf("Your Names is convert to oneName : ");
			puts(s2);
	getch();
}
