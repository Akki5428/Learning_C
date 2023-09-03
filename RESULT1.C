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
       if(p>80)
	  printf("\nyour grade is A");
       else if(p>=60 && p<=80)
	   printf("\nyour grade is B");
       else if(p>=50 && p<60)
	   printf("\nyour grade is C");
       else if(p>=40 && p<50)
	   printf("\nyour grade is D");
       else if(p>=25 && p<45)
	   printf("\nyour grade is F");
       else
	   printf("\nyour grade is E");
       getch();
}