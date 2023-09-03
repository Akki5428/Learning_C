#include<stdio.h>
#include<conio.h>
void main()
{
       int i,n;
       float sum=0;
       clrscr();
       printf("\nEnter your number:");
       scanf("%d",&n);
       for(i=1;i<=n;i++)
       {
	  sum = sum + 1/(float)i ;

       }
       printf("\nT\he sum of the n harmonic series : %f",sum);
     getch();
}