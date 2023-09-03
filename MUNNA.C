#include<stdio.h>
#include<conio.h>

struct stu
{
     int roll;
     char name[30];
     char address[50];
}s1;

void main()
{
     clrscr();
     printf("\nEnter Roll number :-");
     scanf("%d",&s1.roll);
     printf("\nEnter Name :-");
     scanf("%s",s1.name);
     printf("\nEnter Address :-");
     scanf("%s",s1.address);
     printf("\nroll no = %d \nname = %s \naddress = %s",s1.roll,s1.name,s1.address);

     getch();

}