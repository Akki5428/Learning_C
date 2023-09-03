/*                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   #include<stdio.h>

	AUTHOT:AKSHAT THAKKAR
	DOC:25-9-21
	TOPIC:ELSE IF
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	clrscr();
	printf("\nEnter the number");
	scanf("%d",&num);
	if(num==1)
	       printf("\nDay is Monday");
	else if(num==2)
	       printf("\nDay is tuseday");
	else if(num==3)
	       printf("\nDay is wensday");
	else if(num==4)
	       printf("\nday is thursday");
	else if(num==5)
	       printf("\nDay is friday");
	else if(num==6)
	       printf("\nDay is saturday");
	else if(num==7)
	       printf("\nDay is sunday");
	else
	       printf("invalid chhe");
       getch();
}