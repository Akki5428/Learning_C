#include<stdio.h>
#include<conio.h>
void main()
{
	float r,s;
	clrscr();
	printf("\nEnter the prize of 1kg rice:");
	scanf("%f",&r);
	printf("\nEnter the prize of 1kg sugar:");
	scanf("%f",&s);
	printf("\n***List OF ITEMS***");
	printf("\nitem\tprice");
	printf("\nRice\tRs %.2f",r);
	printf("\nSugar\tRs %.2f",s);
	getch();
}