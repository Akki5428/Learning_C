#include<stdio.h>
#include<conio.h>
struct Employee
{
	 int eid;
	 int salary;
	 char name[30];
}e[3];

void scanemp();
void displayemp();

void main()
{
      int choice;
    while(1)
    {
      clrscr();
      printf("\n1 for scan");
      printf("\n2 for print");
      printf("\n3 for exit");
      printf("\nEnter your choice:");
      scanf("%d",&choice);
      switch(choice)
      {
	    case 1 : scanemp();
		     break;
	    case 2 : displayemp();
		     break;
	    case 3 : exit(0);
	    default : printf("\nInvalid choice");
      }

      getch();
    }
}

void scanemp()
{
       int i;
       for(i=0;i<3;i++)
	{
	     printf("\nEnter your id:");
	     scanf("%d",&e[i].eid);
	     printf("\nEnter your name:");
	     scanf("%s",e[i].name);
	     printf("\nEnter your salary:");
	     scanf("%d",&e[i].salary);

	}
}

void displayemp()
{
	int i;
	printf("\neid\tname\t\tsalary");
	for(i=0;i<3;i++)
	{
	      printf("\n%d\t%s\t\t%d",e[i].eid,e[i].name,e[i].salary);
	}
}