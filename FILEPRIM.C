#include<stdio.h>
#include<conio.h>
void main()
{
     FILE *prime;
     int n,i,num,count=0;
     clrscr();
     printf("\nEnter the number :");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
	  if(n%i==0)
	  {
	       count++;
	  }
     }
     prime=fopen("prime.txt","w");
     if(count>2)
     {
	  fprintf(prime,"%d",n);
     }
     fclose(prime);
     prime=fopen("prime.txt","r");
     fscanf(prime,"%d",&num);
     if(count>2)
     {
     printf("%d is prime number...",num);
     }
     fclose(prime);
     if(count<=2)
     {
	printf("%d is not prime number...",n);
     }
     getch();
}


