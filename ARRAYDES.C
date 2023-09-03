#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,j,temp;
	clrscr();
	printf("Enter your number:\n");
	for(i=0; i<10 ; i++)
	{
	      scanf("%d",&a[i]);
	}
	printf("Input Array: \n");
	for(i=0; i<10 ; i++)
	{
	    printf("%d\t",a[i]);
	}
	for(j=0; j<10 ; j++)
	{
	     for(i=0; i<9 ; i++)
	     {
		 if(a[i]<a[i+1])
		 {
		     temp=a[i];
		     a[i]=a[i+1];
		     a[i+1]=temp;
		 }
	     }
	}
	printf("Shorted Array: \n");
	for(i=0 ; i<10 ;i++)
	{
	  printf("%d\t",a[i]);
	}
	getch();
}