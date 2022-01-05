#include<stdio.h>
#include<conio.h>
main()
{
	char c;
	printf(" Enter a Alphabet = ");
	scanf(" %c",&c);
	
	if(c>=65 && c<=90)
		printf(" This is capital Alphabet %c ",c);
	else if(c>=97 && c<=122)
		printf(" This is Smallest Alphabet %c",c);
	else
		printf(" Error");
	getch();
}
