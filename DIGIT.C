#include<stdio.h>
#include<conio.h>
void main()
{
       int num;
       clrscr();
       printf("Enter your number to check the number of digits:");
       scanf("%d",&num);
       printf("\nYour number is: %d",num);
       if(num<10)
       {
	   printf("\nThe digit of number is 1");
       }
       else if(num<100)
       {
	   printf("\nThe digit of number is 2");
       }
       else if(num<1000)
       {
	   printf("\nThe digit of number is 3");
       }
       else if(num<10000)
       {
	   printf("\nThe digit of number is 4");
       }
       else
       {
	   printf("\nThe digit of number is 5");
       }

       getch();

}