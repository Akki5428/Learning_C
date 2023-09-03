#include<stdio.h>
#include<conio.h>
struct distance
{
       float inch;
       float feet;
}d1,d2,d3;

void add(struct distance d1,struct distance d2)
{
       d3.inch=d1.inch+d2.inch;
       d3.feet=d3.feet+d3.feet;
}

void main()
{
     clrscr();
     add(d1,d2);
     printf("\nDistance in inch= %d",d3.inch);
     printf("\nDistsnce in feet= %d",d3.feet);
     getch();
}