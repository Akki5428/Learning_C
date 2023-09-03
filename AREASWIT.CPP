/*
	 AUTHOR:AKSHAT THAKKAR
	 DOC:26-9-21
	 TOPIC:AREA OF CIRCLE
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    float c;
    int a,r;
    char choice;
    clrscr();
    printf("\n+ for area of circle");
    printf("\n- for area of square");
    printf("\n/ for area of rectangle");
    printf("\n* for area of triangle");
    printf("\nEnter the choice:");
    scanf(" %c",&choice);
    switch(choice)
    {
	  case '+': printf("\nEnter the radius:");
		    scanf("%d",&r);
		    c=3.14*r*r;
		    printf("\nArea of circle is: %f",c);
		    break;
	  case '-': printf("\nEnter the square's one side value:");
		    scanf("%d",&r);
		    c=r*r;
		    printf("\nArea of square is: %f",c);
		    break;
	  case '/': printf("\nEnter the rectangle two side:");
		    scanf("%d %d",&r,&a);
		    c=r*a;
		    printf("\nArea of rectangle is: %f",c);
		    break;
	  case '*': printf("\nEnter the triangle two sides:");
		    scanf("%d %d",&r,&a);
		    c=(1/2)*r*a;
		    printf("\nArea of triangle is: %f",c);
		    break;

    }
	       getch();
}


