#include<stdio.h>
#include<conio.h>
void main()
{
     int held,attent,pr,m;
     clrscr();
     printf("\nEnter the day your class held:");
     scanf("%d",&held);
     printf("\nEnter the day yor class attended:");
     scanf("%d",&attent);
     printf("\nYou have mwdical issue please enter 1 \nYou have not medical issue please enter 2 :");
     scanf("%d",m);
     m=m;
     pr=(attent*100)/held;
     printf("\nYour attendnace %d percentage");
     if(pr<75 && m=1)
     {
	printf("\nyou are eligible to sit in exam");
     }
     else if(pr<75 && m=2)
     {
	printf("\nyou are not eligible to sit in exam");
     }
     else
     {
	 printf("\nyou are eligible to sit in exam");
     }
     getch();
}