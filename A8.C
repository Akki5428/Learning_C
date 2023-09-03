#include<stdio.h>
#include<conio.h>
void main()
{
     int held,attent,pr;
     clrscr();
     printf("\nEnter the day your class held:");
     scanf("%d",&held);
     printf("\nEnter the day yor class attended:");
     scanf("%d",&attent);
     pr=(attent*100)/held;
     printf("\nYour attendnace %d percentage");
     if(pr<75)
     {
	printf("\nyou are not eligible to sit in exam");
     }
     else
     {
	 printf("\nyou are eligible to sit in exam");
     }
     getch();
}