/*
	 AUTHOR:THAKKAR AKSHAT
	 DOC:26-9-21
	 TOPIC:MARKS
*/
#include<stdio.h>
#include<conio.h>
void main()
{
       float a,b,c,d,e,f,p;
       clrscr();
       printf("\nEnter your maths,science,ss,hindi,gujarati marks out of 100");
       printf("\nmaths:");
       scanf("%f",&a);
       printf("\nscience:");
       scanf("%f",&b);
       printf("\nss:");
       scanf("%f",&c);
       printf("\nhindi:");
       scanf("%f",&d);
       printf("\ngujarati:");
       scanf("%f",&e);
       f=a+b+c+d+e;
       printf("\nTotal marks: %f",f);
       p=(f*100)/500;
       printf("\nPercentage: %f",p);
       if(p>=90 && p<=100)
	  printf("\nyour grade is A1");
       else if(p>=80 && p<90)
	   printf("\nyour grade is A2");
       else if(p>=70 && p<80)
	   printf("\nyour grade is B1");
       else if(p>=60 && p<70)
	   printf("\nyour grade is B2");
       else if(p>=50 && p<60)
	   printf("\nyour grade is C");
       else
	   printf("\nyour grade is D");
       getch();
}