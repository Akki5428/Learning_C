#include<stdio.h>
#include<conio.h>
void main()
{
     int a=10;
     int b;
     int *p;
     p=&a;
     b=*p;
     printf("adrees of a=%x",&a);
     printf("\n adrees of pointer=%x",p);
     printf("\n value of p=%d",*p);
     printf("\n value of b=%d",b);

}