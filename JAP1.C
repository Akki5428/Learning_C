#include<stdio.h>
#include<conio.h>
void main()
{
       float bs;
       float gs;
       textbackground(CYAN);
       clrscr();
       textcolor(RED);
       printf("Enter the your basic salary:",&bs);
       scanf("%f",&bs);
       if(bs<=10000)
       {
	  gs=bs+ 0.2*bs + 0.8*bs;
	  printf("Your grosing salary:%f",gs);
       }
       else if(bs<=20000)
       {
	  gs=bs+ 0.25*bs + 0.9*bs;
	  printf("Your grosing salary:%f",gs);
       }
       else
       {
	  gs=bs+ 0.3*bs + 0.95*bs;
	  printf("Your grosing salary:%f",gs);
       }
getch();

}