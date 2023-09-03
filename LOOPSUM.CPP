#include<iostream.h>
#include<conio.h>
void main()
{
     int a,b,i,sum=0;
     clrscr();
     cout<<"Enter two numbers:";
     cin>>a>>b;
     for(i=a;i<=b;i++)
     {
	 cout<<i<<"\t";
	 sum = sum + i;
     }
     cout<<"\nsum = "<<sum;
     getch();
}