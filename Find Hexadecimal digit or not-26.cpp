#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
	char character;
	printf("Enter a character to find hexadecimal digit or not : ");
	scanf("%c",&character);
	if(character=='a'||character=='b'||character=='c'||character=='d'||
		character=='e'||character=='f'||character=='A'||character=='B'||
		character=='C'||character=='D'||character=='E'||character=='F')
		printf("The entered character is a hexadecimal digit.");
	else
		printf("The entered character is not a hexadecimal digit.");
	getch();
}
