#include<stdio.h>
#include<conio.h>
void main()
{
    char val;
    int num;
    clrscr();
    printf("\nEnter number between 0 to 128 :");
    scanf("%d",&num);
    val=num;
    printf("\n%c",val);
    getch();
}