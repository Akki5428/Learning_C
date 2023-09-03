#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i;
    int *p;
    clrscr();
    for(i=0;i<5;i++)
    {
	 printf("\nEnter your array :");
	 scanf("%d",&a[i]);
    }
    p=a;
    for(i=0;i<5;i++,p++)
    {
	printf("\n%d is value and %u is adress",*p,p);
    }
    getch();
}