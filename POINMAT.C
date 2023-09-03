#include<stdio.h>
#include<conio.h>
void scanmat(int *pt)
{
     int i,j;
     for(i=0;i<3;i++)
     {
	 printf("\nEnter %d row\n",i+1);
	 for(j=0;j<3;j++)
	 {
	       scanf("%d",pt);
	       pt++;
	 }
     }
}
void printmat(int *ptr)
{
     int i,j;
     printf("\nThe matrix is :\n");
     for(i=0;i<3;i++)
     {
	 for(j=0;j<3;j++)
	 {
	       printf("%d   ",*ptr);
	       ptr++;
	 }
	 printf("\n");
     }

}
void main()
{
     int a[3][3],*p;
     int i,j;
     clrscr();
     p=&a[0][0];
     scanmat(p);
     printmat(p);
     getch();

}