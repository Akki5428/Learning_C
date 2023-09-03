#include<stdio.h>
#include<conio.h>
void main()
{
     int a,b,c;
     int *p,*q,*r;
     clrscr();
     printf("\nEnter 3 numbers : ");
     scanf("%d %d %d",&a,&b,&c);
     p=&a;
     q=&b;
     r=&c;
     if(*p>*q && *p>*r)
     {
	  printf("%d is the greatest",*p);
	  if(*q<*r)
	  {
		printf("\n%d is smallest ",*q);
	  }
	  else
	  {
		printf("\n%d is smallest",*r);
	  }
     }
     if(*q>*p && *q>*r)
     {
	  printf("%d is the greatest",*q);
	  if(*p<*r)
	  {
		printf("\n%d is smallest ",*p);
	  }
	  else
	  {
		printf("\n%d is smallest",*r);
	  }
     }
     if(*r>*q && *r>*p)
     {
	  printf("%d is the greatest",*r);
	  if(*q<*p)
	  {
		printf("\n%d is smallest ",*q);
	  }
	  else
	  {
		printf("\n%d is smallest",*p);
	  }
     }
     getch();


}