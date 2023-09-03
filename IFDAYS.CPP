
/*
	     AUTHOR:THAKKAR AKSHAT
	     DOC:24-9-21
	     TOPIC:DAYS COVERT INTO REM DAYS,YEARS,MONTHS
*/
#include<stdio.h>
#include<conio.h>
void main()
{
       int a,b;
       float c,d;
       textbackground(RED);
       clrscr();
       printf("\nEnter the days:");
       scanf("%d",&a);
	 c=a/360;
	 printf("\nYear: %f",c);
	    d=a/30;
	    printf("\nMonths: %f",d);
	       b=a%30;
	       printf("\nRemaining Days: %d",b);
       getch();
}