#include<stdio.h>
#include<conio.h>
void main()
{
      int a[5],i,j,k,l,m;
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
      for(k=0;k<3;k++)
      {
	 for(l=0;l<3;l++)
	 {
	       printf("\nEnter your c[%d][%d]:",k,l);
	       scanf("%d",&c[k][l]);
	 }
      }
      printf("\nThe multi dim array is:\n");
      for(i=0;i<3;i++)
      {
	   for(j=0;j<3;j++)
	   {
		 printf("\t%d",b[i][j]);
	   }
      printf("\t");
	   for(l=0;l<3;l++)
	   {
		 printf("\t%d",c[i][l]);
	   }
      printf("\n");
      }
   getch();
}
