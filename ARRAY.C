#include<stdio.h>
#include<conio.h>
void main()
{
    int num[5],i;
    clrscr();
    for(i=0;i<5;i++)
    {
	 printf("\nEnter your number[%d]:",i);
	 scanf("%d",&num[i]);
    }
    printf("\nThe number is:");
    for(i=0;i<5;i++)
    {
	 printf("\t%d",num[i]);
    }
    getch();

}