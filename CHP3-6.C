#include<stdio.h>
#include<conio.h>
#define N 10
//above N is symbolic constant

void main()
{
      int i,n;
      clrscr();
      printf("\nEnter your number:");
      scanf("%d",&n);
      for(i=1;i<=N;i++)
      {
	   printf("\n%d\t*\t%d\t=\t%d",n,i,n*i);
      }
     getch();
}


