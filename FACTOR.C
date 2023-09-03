#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  clrscr();
  printf("\nEnter your number:");
  scanf("%d",&a);
  for(b=1 ; b<=a ; b++)
   {
	if(a%b==0)
	{
	   printf("\nfactor are %d",b);
	}
   }
   getch();

}