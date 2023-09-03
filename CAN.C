#include<stdio.h>
#include<conio.h>
void main()
{
	   int candyX=39,candyY=2,boxX=39,boxY=23,d=0,life=3,score=0;
	   char ch;
	   textbackground(CYAN);
	   start:
	   clrscr();
	   gotoxy(73,2);
	   textcolor(BROWN);
	   cprintf("score=%d",score);
	   gotoxy(73,3);
	   cprintf("life=%d",life);
	   gotoxy(boxX,boxY);
	   cprintf("@");
	   gotoxy(boxX,boxY+1);
	   cprintf("@@@@@@@@");
	   gotoxy(boxX+7,boxY);
	   cprintf("@");
	   textcolor(YELLOW);
	   gotoxy(candyX,candyY);
	   cprintf("0");
	  if(kbhit())
		{
		     ch=getch();
		     switch(ch)
			   {
				case 'a': boxX--;
					  if(boxX<=1)
					      {
						 boxX=1;
					      }
					  break;
				case 'd': boxX++;
					  if(boxX>=73){
					       boxX=73;
					     }
					  break;
				case 'x': exit(0);
			   }

		}



		  candyY++;
		  if(candyY==23)
		    {
			 d=candyX-boxX;
			 if(d==1 || d==2 || d==3 || d==4 || d==5 || d==6)
			 { score++;
			 sound(1000);
			 delay(60);
			 nosound();
			 }

			 else
			 {
			    life--;
			    sound(100);
			    delay(40);
			    nosound();
			      if(life==0)
			      {
				   clrscr();
				   textcolor(RED);
				   gotoxy(36,13);
				   cprintf("Game Over");
				   delay(200);
				   sound(200);
				   getch();
				   nosound();
				   exit(0);
			      }
			 } candyY=2;
			 candyX=rand()%80+1;
		    }

		  delay(100);
		goto start;
}





