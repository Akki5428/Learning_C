#include<stdio.h>
#include<conio.h>
void main()
{
     int a=10;
     int  *p;
     clrscr();
     p=&a;
     printf("%d value of p",*p);
     printf("\n%u is address of p",p);
     *p = *p + 5;
     printf("\n%d is value of a",a);
     getch();
}