#include<stdio.h>
#include<conio.h>
void main()
{
     int a[5],i,min;
     clrscr();
     printf("\nEnter your 5 numbers:");
     for(i=0;i<5;i++)
     {
	  scanf("%d",&a[i]);
     }
     min=a[0];
     for(i=1;i<5;i++)
     {
	   if(a[i]<min)
	   {
	    min=a[i];
	   }
     }
     printf("\nThe smallest number is %d",min);
    getch();
}