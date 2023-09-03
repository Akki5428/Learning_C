#include<stdio.h>
#include<conio.h>
void main()
{
     int i,j,num,c;
     clrscr();
     printf("\nEnter your number");
     scanf("%d",&num);
     for(i=2;i<=num;i++)
     {
	      c=0;
	      for(j=1;j<=i;j++)
	      {
		   if(i%j==0)
		   {
		       c++;
		   }
	      }
	  if(c<=2)
	  {
	      printf("%d is the prime number \n",i);
	  }
     }
      getch();
}