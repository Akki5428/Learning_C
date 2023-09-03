#include<stdio.h>
#include<conio.h>
void main()
{
  int num,i,rev=0,ld;
  int *n,*r,*l;
  clrscr();
  printf("Enter your number:");
  scanf("%d",&num);
  n=&num;
  r=&rev;
  l=&ld;
  while(num!=0)
  {
	  *l=*n%10;
	  *r=((*r)*10)+*l;
	  *n=*n/10;

  }

     printf("\n%d",*r);
     getch();
}

