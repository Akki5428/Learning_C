#include<stdio.h>
#include<conio.h>
void main()
{
      int a[5],i,j;
      int b[3][3];
      clrscr();
      printf("\nThis is single dim array");
      for(i=0;i<5;i++)
      {
	    printf("\nEnter your number a[%d]:",i);
	    scanf("%d",&a[i]);
      }
      printf("\nThis is multi dim array");
      for(i=0;i<3;i++)
      {
	 for(j=0;j<3;j++)
	 {
	       printf("\nEnter your b[%d][%d]:",i,j);
	       scanf("%d",&b[i][j]);
	 }
      }
      printf("\nThe single dim array is:");
      for(i=0;i<5;i++)
      {
	 printf("\t%d",a[i]);
      }
      printf("\nThe multi dim array is:\n");
      for(i=0;i<3;i++)
      {
	   for(j=0;j<3;j++)
	   {
		 printf("\t%d",b[i][j]);
	   }
	   printf("\n");
      }
   getch();
}



