#include<stdio.h>
#include<conio.h>
void main()
{
     int a,b,c;
     clrscr();
     printf("Enter the age of three people:");
     scanf("%d %d %d",&a,&b,&c);
     if(a>b)
     {
	 if(a>c)
	 {
	     printf("\nFirst people is oldest");
	     printf("\nLast people is youngest");
	 }
     }
     else if(b>c)
     {


	     printf("\nsecond people is oldest");
	     printf("\nfirst people is youngest");

     }
     else
     {
	    printf("\nlast people is oldest");
	    printf("\nfirst people us youngest");
     }
     getch();
}