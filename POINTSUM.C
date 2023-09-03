#include<stdio.h>
#include<conio.h>
void main()
{
     int a,b,c;
     int *p,*q,*r;
     clrscr();
     p=&a;
     q=&b;
     r=&c;
     printf("\nENter two numbers:");
     scanf("%d %d",p,q);
     *r = *p + *q;
     printf("\n%d + %d = %d",*p,*q,*r);
     getch();

}