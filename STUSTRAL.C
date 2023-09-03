#include<stdio.h>
#include<conio.h>
struct Student
{
	char name[30];
	float phy,maths,chem;
	float height;
	float per;
}s[5];

void main()
{
      float temp;
      float comp=0,comp1=0;
      int i;
      clrscr();
      for(i=0;i<5;i++)
	{
		printf("\nEnter your name : ");
		scanf("%s",s[i].name);
		printf("\nEnter your physics marks :");
		scanf("%f",&temp);
		s[i].phy=temp;
		printf("\nEnter your chemistry marks :");
		scanf("%f",&temp);
		s[i].chem=temp;
		printf("\nEnter your maths marks :");
		scanf("%f",&temp);
		s[i].maths=temp;
		printf("\nEnter your height :");
		scanf("%f",&temp);
		s[i].height=temp;
		s[i].per=(s[i].phy+s[i].chem+s[i].maths)/3;
	}
       for(i=0;i<5;i++)
	   {
		if(s[i].per>comp)
		{
		    comp=s[i].per;
		}
	   }
	   for(i=0;i<5;i++)
	   {
		if(s[i].height>comp1)
		{
		     comp1=s[i].height;
		}
	   }
	for(i=0;i<5;i++)
	  {
		if(s[i].per==comp)
		{
		   printf("\ntopper\t\t:- %.2f\t%s",comp,s[i].name);
		}
		if(s[i].height==comp1)
		{
		   printf("\n\nhighest height :- %.2f\t%s",comp1,s[i].name);
		}
	  }
	getch();
}