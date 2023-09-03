#include<stdio.h>
#include<conio.h>
struct info
{
       int roll;
       char name[30];
       float avg;
}s1;

void main()
{
       clrscr();
       printf("\nEnter your name:");
       scanf(" %s",&s1.name);
       printf("\nEnter your roll no:");
       scanf(" %d",&s1.roll);
       printf("\nEnter your average");
       scanf(" %f",&s1.avg);

  printf("\nroll no : %d \nname = %s \naverage = %f",s1.roll,s1.name,s1.avg);

  getch();

}