#include<stdio.h>
#include<conio.h>
#include<windows.h>

void gotoxy(short x, short y);

main()
{
 gotoxy(40,13);                
 printf("Hi i am himanshu suratiya");
 getch();
}

void gotoxy(short x, short y)                                              
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
