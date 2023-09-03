#include<stdio.h>
#include<conio.h>
void main()
{
      int a[3][3],i,j,l,k;
      int b[3][3],c[3][3];
      clrscr();
      printf("\nThis is multi dim array");
      for(i=0;i<3;i++)
      {
	 for(j=0;j<3;j++)
	 {
	       printf("\nEnter your b[%d][%d]:",i,j);
	       scanf("%d",&b[i][j]);
	 }
      }
      for(i=0;i<3;i++)
      {
	 for(j=0;j<3;j++)
	 {
	       printf("\nEnter your c[%d][%d]:",i,j);
	       scanf("%d",&c[i][j]);
	 }
      }
      for(i=0;i<3;i++)
      {
	 for(j=0;j<3;j++)
	 {
	       a[i][j]= b[i][j]+c[i][j];
	 }
      }
      printf("\nThe multi dim array is:\n");
      for(i=0;i<3;i++)
      {
	   for(j=0;j<3;j++)
	   {
		 printf("%d ",b[i][j]);
	   }
      printf("\t");
	   for(l=0;l<3;l++)
	   {
		 printf("%d ",c[i][l]);
	   }
       printf("= ");
	 for(k=0;k<3;k++)
	 {
	       printf("%d ",a[i][k]);
	 }
      printf("\n");
      }
   getch();
}
