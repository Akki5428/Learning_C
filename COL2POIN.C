#include<stdio.h>
#include<conio.h>
void main()
{
     int a=10;
     int *p;
     int **ptr;
     clrscr();
     p=&a;
     ptr=&p;
     printf("value of a = %d\n",a);
     printf("value available at *p = %d\n",*p);
     printf("value available at **ptr = %d\n",**ptr);
     printf("adrees of *p = %x",p);
     printf("\nadrees of **ptr=%x",ptr);
     getch();
}