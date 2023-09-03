#include<stdio.h>
#include<conio.h>
#define SIZE 5

int stack[SIZE];
int top=-1;

void push()
{
    int num;
    if(top == SIZE - 1)
    {
	 printf("\nstack overflow\n");
    }
    else
    {
    printf("\nEnter your number :");
    scanf("%d",&num);
    top++;
    stack[top] = num;
    }
}

void pop()
{
    int num;
    if(top == -1)
    {
	 printf("\nstack underflow\n");
    }
    else
    {
	 num = stack[top];
	 top--;
	 printf("%d is pop",num);
    }
}

void location(int l)
{
    if(l>0 && l<=5)
    {
      if(top>-1 && top<5)
      {

      }
}

void display()
{
	 int i;
	 for(i=top;i>=0;i--)
	 {
	       printf("\n%d",stack[i]);
	 }
}

void main()
{
	int choice;
	while(1)
	{
	       clrscr();
	       printf("\n0 for exit \n1 for push \n2 for pop \n3 for display \nEnter your choice : ");
	       scanf("%d",&choice);
	       switch(choice)
	       {
		   case 0 : exit();

		   case 1 : push();
			    break;

		   case 2 : pop();
			    break;

		   case 3 : display();
			    break;

		  default : printf("\nInvalid choice...");
	       }
	       getch();

	}
}