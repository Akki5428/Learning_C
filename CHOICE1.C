#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,choice,choice1;
	float n1,n2,n3;
	start:
	clrscr();
	printf("\n1 for integer");
	printf("\n2 for float");
	printf("\n3 for exit");
	printf("\nEnter the choice:");
	scanf("%d",&choice);
	switch(choice)
	       {
		       case 1 :
		       printf("\nEnter two numbers:");
		       scanf("%d %d",&a,&b);
		       printf("\n1 for add");
		       printf("\n2 for sub");
		       printf("\n3 for mul");
		       printf("\n4 for div");
		       printf("\n5 for mod");
		       printf("\n6 for exit");
		       printf("\nEnter the choice:");
		       scanf("%d",&choice1);
		       switch(choice1)
			      {
				    case 1 : c=a+b;
					     printf("\n add is: %d",c);
					     break;
				    case 2 : c=a-b;
					     printf("\n sub is: %d",c);
					     break;
				    case 3 : c=a*b;
					     printf("\n mul is: %d",c);
					     break;
				    case 4 : c=a/b;
					     printf("\n div is: %d",c);
					     break;
				    case 5 : c=a%b;
					     printf("\nmod is: %d",c);
					     break;
				    case 6 : exit(0);
				    default : printf("invalid chhe");
			      }
			      break;
		       case 2:
		       printf("\nEnter two numbers:");
		       scanf("%f %f",&n1,&n2);
		       printf("\n1 for add");
		       printf("\n2 for sub");
		       printf("\n3 for mul");
		       printf("\n4 for div");
		       printf("\n5 for exit");
		       printf("\nEnter the choice:");
		       scanf("%d",&choice1);
		       switch(choice1)
			      {
				    case 1 : n3=n1+n2;
					     printf("\n add is: %f",n3);
					     break;
				    case 2 : n3=n1-n2;
					     printf("\n sub is: %f",n3);
					     break;
				    case 3 : n3=n1*n2;
					     printf("\n mul is: %f",n3);
					     break;
				    case 4 : n3=n1/n2;
					     printf("\n div is: %f",n3);
					     break;
				    case 5 : exit(0);
				    default : printf("invalid chhe");
			      }
			      break;
			      case 3 : exit(0);
	       }
	       getch();
	       goto start;
}
