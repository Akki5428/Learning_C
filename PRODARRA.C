#include<stdio.h>
#include<conio.h>
void main()
{
   int a[5],i,prod=1;
   clrscr();
    printf("\nEnter 5 Numbers : \n");
 for(i=0;i<5;i++)
 {
    scanf("%d",&a[i]);
 }
 for(i=0;i<5;i++)
 {
    prod=prod*a[i];
 }
 printf("\nProduct = %d",prod);
 getch();
}
