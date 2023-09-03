#include<stdio.h>
#include<conio.h>

void main()
{
	 int number;
	 clrscr();
	 printf("\Enter the number to check:");
	 scanf("%d",&number);
	 if(number>=0)
	       printf("\nTHe number is positive");
	 if(number<0)
	       printf("\nThe number is negetive");
	 getch();

}