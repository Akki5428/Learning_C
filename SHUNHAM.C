#include<stdio.h>
#include<conio.h>

void main()
{
     int a[10],i;
     printf("\nEnter 10 numbers :");
     for(i=0;i<=9;i++)
     {
     scanf("\n%d",&a[i]);
     }
     for(i=0;i<=9;i++)
     {
     printf("\n%d",a[i]);
     }

     getch();
}