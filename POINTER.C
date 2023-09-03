#include<stdio.h>
#include<conio.h>
/* void main()
{
     int a=5,b=7,c=10;
     int *p,*q,*r;
     clrscr();
     p=&a;
     q=&b;
     r=&c;
     printf("\nThe value is %d and adress id %u",*p,p);
     printf("\nThe value is %d and adress id %u",*q,q);
     printf("\nThe value is %d and adress id %u",*r,r);
     getch();
}    */
void main()
{
     int a=5;
     float b=7.55;
     char c='a';
     int *p;
     float *q;
     char *r;
     clrscr();
     p=&a;
     q=&b;
     r=&c;
     printf("\nThe value is %d and adress id %u",*p,p);
     printf("\nThe value is %f and adress id %u",*q,q);
     printf("\nThe value is %c and adress id %u",*r,r);
     getch();
}