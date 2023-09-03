#include<stdio.h>
#include<conio.h>
void main()
{
 int i,a[10],sum=0;
 clrscr();
 printf("\nEnter 10 Numbers : \n");
 for(i=0;i<10;i++)
 {
    scanf("%d",&a[i]);
 }
 for(i=0;i<10;i++)
 {
    sum=sum+a[i];
 }
 printf("\nSum = %d",sum);
 getch();
}