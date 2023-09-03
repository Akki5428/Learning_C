#include<stdio.h>
#include<conio.h>
void main()
{
      int year,newsal,salary;
      clrscr();
      printf("\nenter your salary:");
      scanf("%d",&salary);
      printf("\nenter your year of service");
      scanf("%d",&year);
      if(year>5)
      {
	   newsal = salary + 0.05*salary;
	   printf("congress company give you 5 percentage bonus and your net salary is : %d ",newsal);
      }
      else
      {
	   printf("\nsorry company not give you bonus",salary);
      }
      getch();
}