#include<stdio.h>
#include<conio.h>
struct Student
{
	int sid;
	char name[30];
	float maths,eng,com,total;
	float pr;
	char grade;

}s[10];
void scan();
void display();
void main()
{
	 clrscr();
	 scan();
	 display();
	 getch();

}

void scan()
{
      float temp;
      int i;
      for(i=0;i<10;i++)
      {

	    printf("\nEnter student sid and name:");
	    scanf("%d%s",&s[i].sid,s[i].name);
	    printf("\nEnter student maths marks:");
	    scanf("%f",&temp);
	    s[i].maths=temp;
	    printf("\nEnter student english marks:");
	    scanf("%f",&temp);
	    s[i].eng=temp;
	    printf("\nEnter student computer marks:");
	    scanf("%f",&temp);
	    s[i].com=temp;
	    s[i].total=s[i].maths+s[i].eng+s[i].com;
	    s[i].pr=s[i].total/3;
	    if(s[i].pr>=90)
	     {
		  s[i].grade='A';
	     }
	    else if(s[i].pr>=70 && s[i].pr<90)
	    {
		  s[i].grade='B';
	    }
	    else
	    {
		 s[i].grade='C';
	    }
      }
}
void display()
{
	 int i;
	 printf("\nsid\tname\t\tmaths\teng\tcom\ttotal\tpr\tgrade");
	 for(i=0;i<10;i++)
	 {
	     printf("\n%d\t%s\t\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%c",s[i].sid,s[i].name,s[i].maths,s[i].eng,s[i].com,s[i].total,s[i].pr,s[i].grade);
	 }

}