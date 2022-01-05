#include<stdio.h>
#include<conio.h>
main()
{
	char character;
	printf("Enter a character to find this character is uppercase or not : ");
	scanf("%c",&character);
	if(character>=65 && character<=90)
		printf("Your letter is UPPERCASE = %c",character);
	else
		printf("Your letter is not UPPERCASE = %c",character);
	getch();
}
