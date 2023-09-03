#include<stdio.h>
#include<conio.h>
void main()
{
   int b;
   float a;
   clrscr();
   printf("Enter your number:");
   scanf("%f",&a);
   b=(int)a%10;
   printf("%d",b);
   getch();
}