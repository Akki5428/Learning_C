#include<stdio.h>
#include<conio.h>
void main()
{
     int num[5],i,choice,j,sum=0;
     char ch[5];
     float fl[5],sum1=0;
     double dd[5],sum2=0;
     clrscr();
     start:
     printf("\n1. for integer");
     printf("\n2. for character");
     printf("\n3. for float");
     printf("\n4. for double");
     printf("\n5. for exit");
     printf("\nEnter your choice:");
     scanf("%d",&choice);
     switch(choice)
     {
	   case 1 : for(i=0;i<5;i++)
		{
			printf("\nEnter your number[%d]:",i);
			scanf("%d",&num[i]);
		}
		printf("\nThe number is:");
		for(i=0;i<5;i++)
		{
		printf("\t%d",num[i]);
		}
		for(i=0;i<5;i++)
		{
		    sum = sum + num[i];
		}
		printf("\nThe sum is %d",sum);
		break;
	    case 2 : for(j=0;j<5;j++)
			{
			printf("\nEnter your ch[%d]:",j);
			scanf(" %c",&ch[j]);
			}
			printf("\nThe character is:");
			for(j=0;j<5;j++)
			{
			printf("\t %c",ch[j]);
			}
			break;
	    case 3 : for(i=0;i<5;i++)
		{
			printf("\nEnter your fl[%d]:",i);
			scanf("%f",&fl[i]);
		}
		printf("\nThe number is:");
		for(i=0;i<5;i++)
		{
		printf("\t %f",fl[i]);
		}
		for(i=0;i<5;i++)
		{
		   sum1 = sum1 + fl[i];
		}
		printf("\nThe sum is %d",sum1);
		break;
	   case 4 : for(i=0;i<5;i++)
		{
			printf("\nEnter your number[%d]:",i);
			scanf("%lf",&dd[i]);
		}
		printf("\nThe number is:");
		for(i=0;i<5;i++)
		{
		printf("\t%lf",dd[i]);
		}
		for(i=0;i<5;i++)
		{
		   sum2 = sum2 + dd[i];
		}
		printf("\nThe sum is:",sum2);
		break;
	    case 5 : exit(0);
	   default : printf("\nInvalid");

     }
      goto start;

}




