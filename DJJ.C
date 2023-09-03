#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main()
{
   clrscr();
   gotoxy(34,9);
   printf("hello");
   clrscr();
   delay(1000);
   gotoxy(34,12);
   printf("hello");
   clrscr();
   delay(1000);
   gotoxy(34,18);
   printf("hello");
   getch();
}