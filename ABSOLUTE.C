#include<stdio.h>
#include<conio.h>
void main()
{
     int num,newnum;
     clrscr();
     printf("\nEnter your number to convert his absolute value:");
     scanf("%d",&num);
     if(num>0)
     {
	  printf("\ncoverted number: %d",num);
     }
     else
     {
	  newnum=-num;
	  printf("\nconverted number: %d",newnum);
     }
     getch();
}