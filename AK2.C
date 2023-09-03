#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,sum,mul,div,sub;
    clrscr();
    printf("\ntwo numbers are: ");
    scanf("%d %d,",&a,&b);
    sum=a+b;
    mul=a*b;
    div=a/b;
    sub=a-b;
    printf("\nAnswer is : %d",sum);
    printf("\nAnswer is : %d",mul);
    printf("\nAnswer is: %d",div);
    printf("\nAnswer is : %d",sub);
    getch();
}