#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
     int n[10];
     int co=0,co1=0;
     int i;
     clrscr();
     printf("\nEnter 10 numbers positive and negetive:");
     for(i=0;i<10;i++)
     {
	 scanf("%d",&n[i]);
     }
     for(i=0;i<10;i++)
     {
	 if(n[i]<0)
	 {
	     printf("\n%d is negetive",n[i]);
	     co++;
	 }
	 else if(n[i]>0)
	 {
	    printf("\n%d is positive",n[i]);
	    co1++;
	 }
	 else
	 {
	    getch();
	    exit(0);
	 }
     }
     printf("\nThe number of positive number is %d",co1);
     printf("\nThe number of negetive number is %d",co);

     getch();
}