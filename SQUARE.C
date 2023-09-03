#include<stdio.h>
#include<conio.h>
void main()
{
       float l,w;
       clrscr();
       printf("Enter rectangle length and wiedth:");
       scanf("%f %f",&l,&w);
       if(l==w)
       {

	  printf("this is square");
       }
       else
       {
	   printf("This is not square");
       }
       getch();
}