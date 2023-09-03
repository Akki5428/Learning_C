#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   char a[50]="Akshat";
   clrscr();
   printf("%s",a);
   strupr(a);
   printf("\nAfter upper case %s",a);
   strlwr(a);
   printf("\nAfter lower case %s",a);
   getch();

}