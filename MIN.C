#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,e,min;
    clrscr();
    printf("Enter your 5 numbers:		");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    min=a;
    if(b<min)
      {
	     min=b;
      }
     if(c<min)
     {
	  min=c;
     }
      if(d<min)
     {
	 min=d;
     }
      if(e<min)
     {
	  min=e;
     }
     printf("\nThe greatest number : %d",min);
     getch();
}