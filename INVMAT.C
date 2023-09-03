#include<stdio.h>
#include<conio.h>
void main()
{
      int mat[3][3],imat[3][3]={1,0,0,0,1,0,0,0,1};
      int i,j;
      clrscr();
      for(i=0;i<3;i++)
      {
	   printf("Enter number of %d row:\n",i+1);
	   for(j=0;j<3;j++)
	   {
		   scanf("%d",&mat[i][j]);
	   }
      }
      printf("\nThe matrix is:\n");
      for(i=0;i<3;i++)
      {
	     for(j=0;j<3;j++)
	     {
		  printf("%d  ",mat[i][j]);
	     }
	  printf("\n");
      }
      printf("\nThe unit matrix is:\n");
      for(i=0;i<3;i++)
      {
	   for(j=0;j<3;j++)
	   {
		  printf("%d  ",imat[i][j]);
	   }
	   printf("\n");
      }
     getch();

}