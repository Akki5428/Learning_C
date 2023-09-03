#include<stdio.h>
#include<conio.h>
void main()
{
       int a[3][3],i,j,temp,k;
       clrscr();
       for(i=0;i<3;i++)
       {
	    for(j=0;j<3;j++)
	     {
	       printf("\nEnter your a[%d][%d]",i,j);
	       scanf("%d",&a[i][j]);
	     }
       }
    for(k=0;k<9;k++)
    {
       for(i=0;i<3;i++)
       {
	   for(j=0;j<3;j++)
	      {
	      if(j==2 && i==2)
	      {
		 break;
	      }
	      if(j==2)
	      {
		 if(a[i][j]>a[i+1][j-2])
		 {
		      temp=a[i][j];
		      a[i][j]=a[i+1][j-2];
		      a[i+1][j-2]=temp;
		 }
		}

	      else
		{
		 if(a[i][j]>a[i][j+1])
		 {
		      temp=a[i][j];
		      a[i][j]=a[i][j+1];
		      a[i][j+1]=temp;
		 }
		}
	      }
       }
     }
       for(i=0;i<3;i++)
       {
	   for(j=0;j<3;j++)
	   {
		   printf("%d ",a[i][j]);
	   }
	   printf("\n");
       }
       getch();
}