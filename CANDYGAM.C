#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
     int d=0,boxX=40,boxY=22,candyX=40,candyY=2,score=0,life=3;
     char ch;
     Start:
     textbackground(BLUE);
     textcolor(YELLOW);
     clrscr();
     gotoxy(60,2);
     cprintf("Score = %d",score);
     gotoxy(60,3);
     cprintf("Life : %d",life);
     gotoxy(candyX,candyY);
     cprintf("0");
     gotoxy(boxX,boxY);
     cprintf("#");
     gotoxy(boxX+7,boxY);
     cprintf("#");
     gotoxy(boxX,boxY+1);
     cprintf("########");

     if(kbhit())
     {
	     ch=getch();
	     switch(ch)
	     {
		 case 'a' : if(boxX<=1)
			    {
			      boxX=1;
			    }
			    else
			    {
			      boxX--;
			    }
			    break;
		 case 'd' :  if(boxX>=73)
			    {
			      boxX=73;
			    }
			    else
			    {
			      boxX++;
			    }
			    break;
		 case 'x' : exit(0);

	     }
     }

     candyY++;
     if(candyY==22)
     {
      d=candyX-boxX;
      if(d==1 || d==2 || d==3 || d==4 || d==5 || d==6)
      {
	    score++;
      }
      else
      {
	  life--;
	  if(life==0)
	  {
	     clrscr();
	     textbackground(0);
	     clrscr();
	     textcolor(RED);
	     gotoxy(36,13);
	     cprintf("GAME OVER");
	     getch();
	     exit(0);
	  }
      }
	     candyY=2;
	     candyX=rand()%80+1;

     }
     delay(200);
     goto Start;

     getch();
}
