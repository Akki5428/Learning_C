#include<stdio.h>
#include<conio.h>
void main()
{
    int unit,a,dis;
    clrscr();
    printf("\nEnter your unit:");
    scanf("%d",&unit);
    a=100*unit;
    printf("your total cost is %d",a);
    if(unit>5)
    {
      dis=a-0.1*a;
      printf("\ncongress you give 10 percentage discount your total amount: %d",dis);
    }
    else
    {
      printf("\nsorry you dont get any discount and your total amount is: %d",a);
    }
    getch();
}

