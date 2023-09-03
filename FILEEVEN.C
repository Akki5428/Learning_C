#include<stdio.h>
#include<conio.h>
void main()
{
     FILE *even ,*odd;
     int n,num,num1;
     clrscr();
     even=fopen("even.txt","w");
     odd=fopen("odd.txt","w");
     printf("\nEnter the number :");
     scanf("%d",&n);
     if(n%2==0)
     {
     fprintf(even,"%d",n);
     }
     else
     {
     fprintf(odd,"%d",n);
     }
     fclose(even);
     fclose(odd);
     even=fopen("even.txt","r");
     odd=fopen("odd.txt","r");
     fscanf(even,"%d",&num);
     fscanf(odd,"%d",&num1);
     if(num>0)
     printf("\n%d is even",num);
     if(num1>0)
     printf("\n%d is odd",num1);
     fclose(even);
     fclose(odd);

     getch();
}