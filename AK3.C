#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,choice;
	clrscr();
	printf("\nEnter two numbers:");
	scanf("%d %d",&a,&b);
	printf("\n1 for add");
	printf("\n2 for sub");
	printf("\n enter the choice:");
	scanf("%d",&choice);
	switch(choice)
	{
	       case 1 :  c=a+b;
			 printf("add is : %d",c);
			 break;
	       case 2 :  c=a-b;
			 printf("sub is : %d",c);
			 break;
	       default : printf("invalid chhe");
	}
	  getch();
}