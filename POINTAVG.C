#include<stdio.h>
#include<conio.h>
void avg(int *pt1,int *pt2,int *avg)
{
      *avg = (*pt1 + *pt2) / 2;
}
void main()
{
    int a,b,ans,av;
    clrscr();
    printf("\nEnter your two numbers : ");
    scanf("%d %d",&a,&b);
    avg(&a,&b,&av);
    printf("\nThe avg of 2 number is %d",av);
    getch();
}