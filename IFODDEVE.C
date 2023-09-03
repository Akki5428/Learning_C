#include<stdio.h>
#include<conio.h>
void main()
{
	 int num;
	 clrscr();
	 printf("\nEnter the number to check:");
	 scanf("%d",&num);
	 if(num%2==0)
		printf("\nthe number is even");
	 else
		printf("\nthe number is odd");
	 getch();

}