/*
	       AUTHOR -: THAKKAR AKSHAT
	       DATE -: 24/04/2022
	       PROGRAM -: PRINT AND SCAN IN C++
*/
#include<iostream.h>
#include<conio.h>
void main()
{
     int a,b,sum,div,mul,sub;
     clrscr();
     cout<< "Enter the value of a and b:";
     cin>>a>>b;
     sum=a+b;
     cout<<endl<<"the sum of a and b is "<<sum;     // endl = \n
     sub=a-b;
     cout<<"\nThe subtraction of a and b is "<<sub;
     mul=a*b;
     cout<<"\nThe multiplication of a and b is "<<mul;
     div=a/b;
     cout<<"\nThe divison of a and b is "<<div;
     getch();


}