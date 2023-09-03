#include<stdio.h>
#include<conio.h>

int a,b,c;

void scan();
void sum();
void main()
{
   clrscr();
   scan();
   sum();
   printf("%d + %d = %d",a,b,c);
   getch();
}

void scan()
{
   printf("\nEnter a and b:");
   scanf("%d %d",&a,&b);
}


void sum()
{
	c = a + b ;
}