#include<stdio.h>
#include<conio.h>
void main()
{
     int sal[5],i,n;
     clrscr();
     for(i=0;i<=4;i++)
      {
	 printf("\nEnter your salary %d:",i+1);
	 scanf("%d",&sal[i]);
      }
     printf("\nEnter what number salary you show:");
     scanf("%d",&n);
     printf("%d",sal[n-1]);
     getch();
}
