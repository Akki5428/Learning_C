#include<stdio.h>
#include<conio.h>
void main()
{
     int i,num,ld,rev=0,op;
     clrscr();
     printf("\nEnter the number");
     scanf("%d",&num);
     op=num;
     for(i=0 ; i<num;)
     {
	   ld=num%10;
	   num=num/10;
	   printf("%d",ld);
	   rev=(rev*10)+ld;
     }
     printf("\nThe reverse num of %d is %d",op,rev);

      if(op==rev)
      {
	   printf("The number is permediv number");
      }
      getch();
}


