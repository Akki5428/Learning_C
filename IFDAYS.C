
/*
	     AUTHOR:THAKKAR AKSHAT
	     DOC:24-9-21
	     TOPIC:DAYS COVERT INTO REM DAYS,YEARS,MONTHS
*/
#include<stdio.h>
#include<conio.h>
void main()
{
       int a,b,c,d,e,f;
       textbackground(RED);
       clrscr();
       printf("\nEnter the days:");
       scanf("%d",&a);
	 b=a/365;
	 c=a%365;
	 printf("\nYear: %d",b);
	    d=c/30;
	    e=c%30;
	    printf("\nMonths: %d",d);
	       f=e%30;
	       printf("\nRemaining Days: %d",f);
       getch();
}
