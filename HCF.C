#include<stdio.h>
#include<conio.h>
void main()
{
      int n1,n2,min,i,factor;
      clrscr();
      printf("\nEnter your number1 :");
      scanf("%d",&n1);
      printf("\nEnter your number2 :");
      scanf("%d",&n2);
      min= n1>n2 ? n1:n2;
      for(i=1;i<=min;i++)
      {
	 if(n1%i==0 && n2%i==0)
	 {
	      factor=i;
	 }
      }
     printf("\nHCF of %d and %d is %d",n1,n2,factor);
     getch();
}