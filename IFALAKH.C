#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
      //	clrscr();
	textbackground(RED);
	clrscr();
	textcolor(YELLOW);
	cprintf("Enter Three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	    {
		  if(a>c)
		 {      textcolor(CYAN);
		 cprintf("\n%d is greatest number",a);}
		else
		 {       textcolor(GREEN);
		 cprintf("\n%d is the greatest number",c);}
	    }
       else
	    {    if(b>c)
		 {  textcolor(BLUE);
		   cprintf("\n%d is greatest number",b);
		 }
		 else
		 {    textcolor(GREEN);
		      cprintf("\n%d is greatest number",c);

		 }
	    } getch();
}