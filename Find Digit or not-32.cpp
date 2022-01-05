#include<stdio.h>
#include<conio.h>
main()
{
	int intchar;
	printf("Enter Anything find to character is a digit or not = ");
	scanf("%c",&intchar);
	if(intchar>=48 && intchar<=57)
		printf("This Character is a digit = %c ",intchar);
	else
		printf("This Character is not a digit = %c ",intchar);
	getch();
}
