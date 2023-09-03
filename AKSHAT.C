#include<stdio.h>
#include<conio.h>
void main()
{
	   int candyX=39,candyY=2,boxX=39,boxY=23;
	   char ch;
	   textbackground(RED);
	   start:
	   clrscr();
	   gotoxy(boxX,boxY);
	   printf("!");
	   gotoxy(boxX,boxY+1);
	   printf("!!!!!!!!");
	   gotoxy(boxX+7,boxY);
	   printf("!");
	   gotoxy(candyX,candyY);
	   printf("0");

	   if(kbhit()){
			ch=getch();
			switch(ch)
			{
				     case 'a': boxX--;
						break;
				     case 'd' : boxX++;
						break;
				     case 'x' :	exit(0);

			}

	   }
	     candyY++;

			if(candyY==22){
				     candyY=2;
				     sound(20);
				     delay(100);
				     nosound();
			}
	   sound(1000);
	   delay(100);
	   nosound();
	   goto start;
	   getch();
}