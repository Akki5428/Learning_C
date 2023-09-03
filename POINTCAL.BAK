#include<stdio.h>
#include<conio.h>
void main()
{
	int a , b , c ;
	int *p,*q,*r;
	int choice;
      while(1)
      {
	clrscr();
	p=&a;
	q=&b;
	r=&c;
	printf("\nEnter number 1 :");
	scanf("%d",p);
	printf("\nEnter number 2 :");
	scanf("%d",q);
	printf("\n1 for addition..");
	printf("\n2 for subtraction..");
	printf("\n3 for multiplication..");
	printf("\n4 for divide..");
	printf("\n5 for modules..");
	printf("\n6 for exit..");
	printf("\nEnter your choice :");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 : *r = *p + *q ;
			 break;
		case 2 : *r = *p - *q ;
			 break;
		case 3 : *r = *p * *q ;
			 break;
		case 4 : *r = *p / *q ;
			 break;
		case 5 : *r = *p % *q ;
			 break;
		case 6 : exit(0);
		default : printf("\nInvalid choice....");
	}
	printf("\nThe answer is %d",*r);
	getch();
     }
}