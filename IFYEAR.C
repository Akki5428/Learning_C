/*
	AUTHOR:AKSHAT THAKKAR
	DOC:24-9-2021
	TOPIC:LEAP YEARS
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int Year;
	textbackground(RED);
	clrscr();
	printf("\nEnter the year");
	scanf("%d",&Year);
	if(Year%100==0)
	      {
		 if(Year%400==0)
		 {
		     printf("\nthe year is leap year!!");

		 }
		 else
		 {
		     printf("the year is not leap year!!");
		 }
	      }
	else if(Year%4==0)
	       printf("\nthe year is leap year!!");
	else
	       printf("\nthe year is not leap year!!");
	getch();
}