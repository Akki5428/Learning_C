#include<stdio.h>
#include<conio.h>
void main()
{
	 int a=21,b=22,c=34,d;
	 clrscr();
	 d= ++a + ++a + ++a + ++a + ++a + a++ + a++ + a++ + a++ + a++ + ++b + ++b + ++b + ++b + b++ + b++ + b++ + b++ + ++c + ++c + ++c + c++ + c++ + c++ + a + b + c;
	 printf("%d is total",d);
	 getch();
}