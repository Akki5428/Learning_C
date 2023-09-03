#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,sum,sub,mul,div;
    clrscr();
    printf("\ntwo numbers are: ");
    scanf("%d %d,",&a,&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("\nAnswer is : %d",sum);
    printf("\nanswer is: %d",sub);
    printf("\nanswer is: %d",mul);
    printf("\n Answer is: %d",div);
    getch();
}