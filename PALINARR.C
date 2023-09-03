#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10],i,count=0;
  clrscr();
  printf("Enter 10 Numbers : \n");
  for(i=0;i<10;i++)
  {
     scanf("%d",&a[i]);
  }
  for(i=0;i<10;i++)
  {
   if(a[i]==a[9-i])
   {
     count++;
   }
  }
    if(count==10)
    {
     printf("\nArray Is Palindrom Array!!");
     count++;
   }
   else
   {
   printf("\nArray Is Not Palindrom Array!!");
   }

  getch();
}