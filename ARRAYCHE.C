#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,n,count=0;
    clrscr();
    printf("\nEnter 10 Numbers : \n");
    for(i=0;i<=9;i++)
    {
      scanf("%d",&a[i]);
    }
    clrscr();
    printf("\nEnter Number To Check : ");
    scanf("%d",&n);
    for(i=0;i<=9;i++)
    {
      if(n==a[i])
      {
       printf("%d is present in the array.",n);
       count++;
      }
    }
    if(count==0)
    {
     printf("%d is not present in the array.",n);
    }
    getch();
}
