#include<stdio.h>
#include<conio.h>
void main()
{
      int a,b,c,d;
      clrscr();
      printf("Enter your four numbers:");
      scanf("%d %d %d %d",&a,&b,&c,&d);
      if(a>b && a>c && a>d)
      {
	 printf("%d",a);
      }
      if(b>a && b>c && b>d)
      {
	 printf("%d",b);
      }
      if(c>a && c>b && c>d)
      {
	 printf("%d",c);
      }
      if(d>a && d>c && d>b)
      {
	 printf("%d",d);
      }
      else
      {
	  printf("invalid");
      }
      getch();

}


