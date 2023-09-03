#include<stdio.h>
#include<conio.h>
void main()
{
       int a,b,c,d,e,choice;
       clrscr();
       printf("\nPlease enter student 1 marks:");
       scanf("%d",&a);
       printf("\nPlease enter student 2 marks:");
       scanf("%d",&b);
       printf("\nPlease enter student 3 marks:");
       scanf("%d",&c);
       printf("\nPlease enter student 4 marks:");
       scanf("%d",&d);
       printf("\nPlease enter student 5 marks:");
       scanf("%d",&e);
       printf("\n1 for student1");
       printf("\n2 for student2");
       printf("\n3 for student3")
       ;printf("\n4 for student4");
       printf("\n5 for student5");
       printf("\nEnter your choice:");
       scanf("%d",&choice);
       switch(choice)
       {
		       case 1 : printf("%d",a);
		       break;
		       case 2 : printf("%d",b);
		       break;
		       case 3 : printf("%d",c);
		       break;
		       case 4 : printf("%d",d);
		       break;
		       case 5 : printf("%d",e);
		       break;

       }
	      getch();
}