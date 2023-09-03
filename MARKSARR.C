#include<stdio.h>
#include<conio.h>
void main()
{
      int phy[5],maths[5],chem[5],i,num,n;
      clrscr();
      for(i=0;i<5;i++)
      {
	  printf("student %d marks phy maths and chemistry:",i+1);
	  scanf("%d",&phy[i]);
	  scanf("%d",&maths[i]);
	  scanf("%d",&chem[i]);
      }
      printf("\nEnter student number to check his marks:");
      scanf("%d",&num);
      n=num-1;
	  printf("\n physics = %d",phy[n]);
	  printf("\n maths = %d",maths[n]);
	  printf("\n chemistry = %d",chem[n]);
   getch();
}