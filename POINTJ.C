#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
      char st[30],*s[30];
      clrscr();
      printf("\nEnter your string:");
      scanf("%s",st);
      s=&st;
      strrev(*s);
      printf("rev string : %s",*s);
      getch();
}