#include<stdio.h>
#include<conio.h>
void main()
{
      int num,i,j,k,l;
      int a[3][3],b[3][3],c[3][3],d[3][3];
      float e[3][3];
      clrscr();
      first:
      for(i=0;i<3;i++)
      {
	 for(j=0;j<3;j++)
	 {
	       printf("\nEnter your a[%d][%d]:",i,j);
	       scanf("%d",&a[i][j]);
	 }
      }
      for(i=0;i<3;i++)
      {
	 for(j=0;j<3;j++)
	 {
	       printf("\nEnter your b[%d][%d]:",i,j);
	       scanf("%d",&b[i][j]);
	 }
      }
      start:
      printf("\n1 for addition:");
      printf("\n2 for subtraction:");
      printf("\n3 for divison:");
      printf("\n4 for reenter the value:");
      printf("\n5 for exit");
      printf("\nWhat do want to print:");
      scanf("%d",&num);
      switch(num)
       {
		 case 1 : for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)
		{
	       c[i][j]= a[i][j]+b[i][j];
		}
	}
      printf("\nThe multi dim array is:\n");
      for(i=0;i<3;i++)
      {
	   for(j=0;j<3;j++)
	   {
		 printf("%d ",a[i][j]);
	   }
      printf("\t");
	   for(l=0;l<3;l++)
	   {
		 printf("%d ",b[i][l]);
	   }
       printf("= ");
	 for(k=0;k<3;k++)
	 {
	       printf("%d ",c[i][k]);
	 }
      printf("\n");
      }
	 break;
	   case 2 : for(i=0;i<3;i++)
      {
	 for(j=0;j<3;j++)
	 {
	       d[i][j]= a[i][j]-b[i][j];
	 }
      }
      printf("\nThe multi dim array is:\n");
      for(i=0;i<3;i++)
      {
	   for(j=0;j<3;j++)
	   {
		 printf("%d ",a[i][j]);
	   }
      printf("\t");
	   for(l=0;l<3;l++)
	   {
		 printf("%d ",b[i][l]);
	   }
       printf("= ");
	 for(k=0;k<3;k++)
	 {
	       printf("%d ",d[i][k]);
	 }
      printf("\n");
      }
      break;
      case 3 : for(i=0;i<3;i++)
      {
	 for(j=0;j<3;j++)
	 {
	       e[i][j]= (float)a[i][j]/b[i][j];
	 }
      }
      printf("\nThe multi dim array is:\n");
      for(i=0;i<3;i++)
      {
	   for(j=0;j<3;j++)
	   {
		 printf("%d ",a[i][j]);
	   }
      printf("\t");
	   for(l=0;l<3;l++)
	   {
		 printf("%d ",b[i][l]);
	   }
       printf("= ");
	 for(k=0;k<3;k++)
	 {
	       printf("%f ",e[i][k]);
	 }
      printf("\n");
      }
      break;
      case 4 : goto first;

      case 5 : exit(0);
       }
       goto start;
}