#include<stdio.h>
#include<conio.h>
void main()
{
    char name[30][5],temp[30];
    int i,j;
    clrscr();
    printf("\nEnter 5 string :");
    for(i=0;i<5;i++)
    {
    scanf("%s",&name[i]);
    }
    for(i=0;i<5;i++)
    {
	for(j=0;j<4;j++)
	{
	     if(strcmpi(name[j],name[j+1]) > 0 )
	     {
		     temp=name[j];
		     name[j]=name[j+1];
		     name[j+1]=temp;
	     }
	}
    }
    for(i=0;i<5;i++)
    {
	printf("%s",name[i]);
    }

    getch();
}