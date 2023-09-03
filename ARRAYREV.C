#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10],i,b[10];
  clrscr();
  printf("Enter 10 Numbers : \n");
  for(i=0;i<10;i++)
  {
     scanf("%d",&a[i]);
  }
  for(i=0;i<10;i++)
  {
   b[i]=a[9-i];
  }
  printf("\n");
  printf("\n");
   for(i=0;i<10;i++)
  {
     printf("%d\t",b[i]);
  }
  getch();
}