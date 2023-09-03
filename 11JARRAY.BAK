#include<stdio.h>
#include<conio.h>
/*write a c program that takes names,marks and fees of 5 students and prints the details of the student given by user */
void main()
{
       int stu[2][5];
       int i,j,num;
       char name[5][10];
       clrscr();
       for(i=0 ; i<5 ; i++)
       {
	      printf("student %d marks and salary:",i);
	      for(j=0; j<2 ; j++)
	      {
		    scanf("%d",&stu[i][j]);
	      }
	      fflush(stdin);
	      scanf("%s",&name[i]);
       }
       printf("\nwhich student details you want: ");
       scanf("%d",&num);
       printf("name : %s",name[num]);
       printf("\nmarks : %d",stu[num][0]);
       printf("\nfees : %d",stu[num][1]);
       getch();
}