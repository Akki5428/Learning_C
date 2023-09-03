#include<stdio.h>
#include<conio.h>
void main()
{
      typedef float Temp;   //type definition
      Temp cel,fer;
      printf("\nEnter your cel:");
      scanf("%f",&cel);
      fer=1.8*cel+32;
      printf("%f",fer);
      getch();

}