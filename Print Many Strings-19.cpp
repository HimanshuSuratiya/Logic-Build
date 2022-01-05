#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	int stringNumber;
	printf("Enter a number to string you type : ");
	scanf("%d",&stringNumber);
	char stringArray[stringNumber][20];
	char AsciiArray[stringNumber][1];
	char tempArray[1][20];
	for(int i=1; i<=stringNumber; i++)
	{
		fflush(stdin);
		printf("Enter %d String : ",i);
		gets(stringArray[i-1]);
	}
		
	for(int i=0; i<stringNumber; i++)
	{
		for(int j=1; j<=1; j++)
		{
			AsciiArray[i][j-1]=("%d ",stringArray[i][j-1]);
		}
	}
	
//	logic
for(int a=0; a<stringNumber/2; a++)
{
	if(AsciiArray[a][0]>AsciiArray[a+1][0])
	{	
		int length1=strlen(stringArray[a]);
		int length2=strlen(stringArray[a+1]);
		int stringlength=length1>=length2?length1:length2;
		for(int j=0; j<stringlength; j++)
		{
			tempArray[a][j]    =stringArray[a][j];
			stringArray[a][j]  =stringArray[a+1][j];
			stringArray[a+1][j]=tempArray[a][j];
		}
	}
}
//   logic end

	for(int i=0; i<stringNumber; i++)
	{
		puts(stringArray[i]);
	}
	
//	for(int i=0; i<stringNumber; i++)
//	{
//		printf("%d ",AsciiArray[i][0]);
//	}	
	getch();
}
