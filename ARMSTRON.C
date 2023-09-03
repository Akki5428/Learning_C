#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
     int num,n,b,sum=0,ld,anum,count=0,m;
     clrscr();
     printf("\nEnter two  numbers:");
     scanf("%d %d",&num,&n);
     anum=num;
     m=num;
     for(b=num ; b<=n; num++)
       {
	  if(m>0)
	    {
	       m=m/10;
	       count++;
	    }
	    else
	      break;
       }
     for(b=1; b<=count ;)
     {
       if(num>0)
	 {
	   ld=num%10;
	   sum=sum+pow(ld,count);
	   num=num/10;
	 }
	 else
	     break;
     }
	if(sum==anum)
	   {
	      printf("The number is armstrong number.");
	   }
	else
	   {
	     printf("the number is not armstrong number");
	   }


    getch();
}