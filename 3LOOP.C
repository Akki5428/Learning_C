#include<stdio.h>
#include<conio.h>
void main()
{
    int choice,choice1,choice2,choice3,a,b;
    clrscr();
    printf("\n1 for while loop.");
    printf("\n2 for for loop.");
    printf("\n3 for do while loop.");
    printf("\nEnter your number to do:");
    scanf("%d",&choice);
    switch(choice)
	   {
	       case 1 : printf("\n1 for normal triangle");
			printf("\n2 for reverse triangle");
			printf("\nwhat do you want:");
			scanf("%d",&choice1);
			switch(choice1)
			      {
				   case 1 : a=1;
					    while(a<=5)
					    {
						  b=1;
						  while(b<=a)
						  {
						      printf("*");
						      b++;
						  }
						a++;
						printf("\n");

					    }
					    break;
				     case 2 : a=5;
					    while(a>=1)
					    {
						  b=1;
						  while(b<=a)
						  {
						      printf("*");
						      b++;
						  }
						a--;
						printf("\n");

					    }
					    break;
				   default : printf("\nInvalid number.");
			      }
			    break;

	       case 2 : printf("\n1 for normal triangle");
			printf("\n2 for reverse triangle");
			printf("what do you want:");
			scanf("%d",&choice2);
			  switch(choice2)
			       {
				   case 1 : for(a=1;a>=5;a++)
					    {
						  for(b=1;b<=a;b++)
						  {
						      printf("*");
						  }
						printf("\n");

					    }
					    break;
				     case 2 : for(a=5;a>=1;a--)
					    {

						  for(b=1;b<=a;b++)
						  {
						      printf("*");
						  }
						printf("\n");

					    }
					    break;
				   default : printf("\nInvalid number.");
			      }
			    break;


	       case 3 : printf("\n1 for normal triangle");
			printf("\n2 for reverse triangle");
			printf("what do you want:");
			scanf("%d",&choice3);
			  switch(choice3)
			    {
				   case 1 : a=1;
					    do
					    {
						  b=1;

						 do {
						      printf("*");
						      b++;
						  }while(b<=a);
						a++;
						printf("\n");

					    }while(a<=5);
					    break;
				     case 2 : a=5;
					    do
					    {
						  b=1;

						 do {
						      printf("*");
						      b++;
						  }while(a<=b);
						a--;
						printf("\n");

					    }while(a>=1);
					    break;
				   default : printf("\nInvalid number.");
			      }
			    break;

	       default : printf("\nInvalid chhe.");
	   }
     getch();
}



