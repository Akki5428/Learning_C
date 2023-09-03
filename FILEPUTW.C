#include<stdio.h>
#include<conio.h>
void main()
{
     FILE *even;
     int num;
     int i;
     clrscr();
     even=fopen("e.txt","w");
     for(i=1;i<=5;i++)
     {
	   printf("\nEnter the numbers:");
	   scanf("%d",&num);
	   if(num%2==0)
	   {
		       putw(num,even);
	   }
     }
     fclose(even);
     even=fopen("e.txt","r");
     while((num=getw(even))!=EOF)
     {
		printf("\t%d",num);
     }
     fclose(even);
     getch();
}