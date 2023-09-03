#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
      int i,n,m,j,k,ld,count,sum;
      clrscr();
      printf("Enter your num1:");
      scanf("%d",&n);
      printf("\nEnter your second number:");
      scanf("%d",&m);
      for(i=n;i<=m;i++)
      {
	   sum=0;
	   count=0;
	   for(j=i;j>0;)
	   {
	      j = j / 10;
	      count++;
	   }
	   for(k=i;k>0;)
	   {
	      ld = k % 10;
	      sum = sum + pow(ld,count);
	      k = k / 10;

	   }
	   if(i==sum)
	   {
	       printf("\n%d is armstrong number",i);
	   }
      }

      getch();

}