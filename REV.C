#include<stdio.h>
#include<conio.h>
void main()
{
  int num,i,rev=0,ld;
  textbackground(RED);
  clrscr();
  printf("Enter your number:");
  scanf("%d",&num);
  for(i=1 ; i<=num ;)
  {
      if(num>0)
	{
	  ld=num%10;
	  rev=(rev*10)+ld;
	  num=num/10;

	}
	else
	{
	 break;
	}
  }
     printf("\n%d",rev);
     getch();
}

