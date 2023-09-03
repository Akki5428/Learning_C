/*
	   AUTHOR: AKSHAT
	   DOC:24-9-21
*/
#include<stdio.h>
#include<coino.h>
void main();
{
	   int number;
	   clrscr();
	   printf("\nEnter the number:");
	   scanf("%d",&number);
	   if(number%5==0)
		   printf("\nnumber is mul of 5");
	   if(number%7==0)
		   printf("\nnumber is mul of 7");
	   if(number%11==0)
		   printf("\nnumber is mul of 11");
	   if(number%35==0)
		   printf("\n number is mul of 7 and 5")
}