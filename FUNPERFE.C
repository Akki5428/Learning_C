#include<stdio.h>
#include<conio.h>
int perfect(int a);

void main()
{
     int n,m,i;
     int ans;
     clrscr();
     printf("\nEnter the two  number :");
     scanf("%d %d",&n,&m);
    for(i=n;i<=m;i++)
    {
     ans=perfect(i);
     if(ans!=0)
     {
	 printf("\n%d",ans);
     }
    }
    getch();

}

int perfect(int x)
{
     int sum=0,i;
     for(i=1;i<x;i++)
     {
	  if(x%i==0)
	  {
	      sum = sum + i ;
	  }

     }
     if(sum==x)
     {
	 return x;
     }
   return 0;
}