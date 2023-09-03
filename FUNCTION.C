// sum of two number using function
#include<stdio.h>
#include<conio.h>

void sum(int x,int y);

void main()
{
     int a=5,b=6;
     clrscr();
     sum(a,b);
     getch();
}

void sum(int x,int y)
{
    int c;
    c=x+y;
    printf("\nSum is %d",c);
}