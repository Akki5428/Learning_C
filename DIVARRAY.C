#include<stdio.h>
#include<conio.h>
void main()
{
      float a[3][3];
      float b[3][3],c[3][3];
      int i,j,k,l;
      clrscr();
      printf("\nThis is multi dim array");
      for(i=0;i<3;i++)
      {
	 for(j=0;j<3;j++)
	 {
	       printf("\nEnter your b[%d][%d]:",i,j);
	       scanf("%f",&b[i][j]);
	 }
      }
      for(i=0;i<3;i++)
      {
	 for(j=0;j<3;j++)
	 {
	       printf("\nEnter your c[%d][%d]:",i,j);
	       scanf("%f",&c[i][j]);
	 }
      }
      for(i=0;i<3;i++)
      {
	 for(j=0;j<3;j++)
	 {
	       a[i][j]= b[i][j]/c[i][j];
	 }
      }
      printf("\nThe multi dim array is:\n");
      for(i=0;i<3;i++)
      {
	   for(j=0;j<3;j++)
	   {
		 printf("%f ",b[i][j]);
	   }
      printf("\t");
	   for(l=0;l<3;l++)
	   {
		 printf("%f ",c[i][l]);
	   }
       printf("= ");
	 for(k=0;k<3;k++)
	 {
	       printf("%f ",a[i][k]);
	 }
      printf("\n");
      }
   getch();
}