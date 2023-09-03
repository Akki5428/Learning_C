#include<stdio.h>
#include<conio.h>
void main()
{
   int a[20],i,positive=0,negative=0,odd=0,even=0,zero=0;
    clrscr();
    printf("\nEnter 20 Numbers : \n");
    for(i=0;i<20;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<20;i++)
    {
       if(a[i]>0)
       {
	positive++;
       }
       if(a[i]<0)
       {
	negative++;
       }
       if(a[i]%2==0)
       {
	even++;
       }
       if(a[i]%2!=0)
       {
	odd++;
       }
       if(a[i]==0)
       {
	zero++;
       }
    }
    printf("Number Of Positive Numbers : %d\n",positive);
    printf("Number Of Negative Numbers : %d\n",negative);
    printf("Number Of Even     Numbers : %d\n",even);
    printf("Number Of Odd      Numbers : %d\n",odd);
    printf("Number Of Zero             : %d\n",zero);
    getch();
}