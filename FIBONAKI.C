#include<stdio.h>
#include<conio.h>
void main()
{
       int num,i,a=0,b=1,t;
       clrscr();
       printf("\nEnter your num:");
       scanf("%d",&num);
       for(i=2 ; i<=num; i++)
	{

	     t=a+b;
	     printf("\n",t);
	     a=b;
	     b=t;
	}
  getch();
}