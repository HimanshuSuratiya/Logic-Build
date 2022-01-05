#include<stdio.h>
#include<conio.h>
main()
{
      int i;
      for(i=1; i<=20; i++)
         if(i%2==0)
	    printf("2 * %d = %d \n", i/2 ,i);
      getch();      
}
