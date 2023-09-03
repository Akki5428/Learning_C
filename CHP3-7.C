#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n;
  clrscr();
  printf("\nWhich number table you want to print:");
  scanf("%d",&n);
  for(i=1;i<=10;i++)
  {
     printf("\n%d\t*\t%d\t=\t%d",n,i,n*i);
  }
  getch();
}