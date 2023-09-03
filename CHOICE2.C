#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,choice;
	start:
	clrscr();
	printf("\nEnter two numbers:");
	scanf("%d %d",&a,&b);
	printf("\n1 for add");
	printf("\n2 for sub");
	printf("\n3 for mul");
	printf("\n4 for div");
	printf("\n5 for mod");
	printf("\n6 for exit");
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
	       case 3 :  c=a*b;
			 printf("mul is : %d",c);
			 break;
	       case 4 :  c=a/b;
			 printf("div is : %d",c);
			 break;
	       case 5 :  c=a%b;
			 printf("mod is : %d",c);
			 break;
	       case 6 :  exit(0);
	       default : printf("invalid chhe");
	}
	  getch();
	  goto start;
}