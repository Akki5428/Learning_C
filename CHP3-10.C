#include<stdio.h>
#include<conio.h>
void main()
{
       int day,year,week,rday,as;
       clrscr();
       printf("\nEnter the number of days : ");
       scanf("%d",&day);
       year=day/365;
       as=day%365;
       week=as/7;
       rday=as%7;
       printf("\n%d year %d week %d days",year,week,rday);
       getch();
}