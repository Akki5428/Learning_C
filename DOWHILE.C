#include<stdio.h>
#include<conio.h>
void main()
{
       int i,j;
       int l,m;
       clrscr();
       i=1;
       do
       {
	     j=1;
	     do
	     {
		printf("*");
		j++;
	     }while(j<=i);
	 i++;
	 printf("\n");
       }while(i<=5);
       printf("\n\n");
       l=5;
       do
       {
	   m=1;
	   do
	   {
	      printf("*");
	      m++;
	   }while(m<=l);
	  l--;
	  printf("\n");
       }while(l>=1);
       getch();
}





