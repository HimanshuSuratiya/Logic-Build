#include<stdio.h>
#include<conio.h>
main()
{
	char character;
	printf("Enter a character to find this character is lowercase or not : ");
	scanf("%c",&character);
	if(character>=97 && character<=122)
		printf("Your letter is lowercase = %c",character);
	else
		printf("Your letter is not lowercase = %c",character);
	getch();
}

