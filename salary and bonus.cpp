#include<stdio.h>
#include<conio.h>
main()
{
	float salary,bonus;
	char gender;
	printf("Enter Your gender M for male and F for female\n");
	scanf("%c",&gender);
	printf("Enter your salary = ");
	scanf("%f",&salary);
	if( gender =='M' || gender =='m' )
	{
	   if(salary>10000)
	   bonus=(salary*0.05);
	   else
	   bonus=(salary*0.07);
	}
	   if( gender == 'F' || gender == 'f')
	   {
	      if(salary>10000)
	         bonus=(salary*0.1);
	      else
		 bonus=(salary*0.12);
	   }
	      salary+=bonus;
	      printf("Bonus = %f \nSalary = %f \n",bonus,salary);
	getch();
}

