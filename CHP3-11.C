#include<stdio.h>
#include<conio.h>
void main()
{
       float dis,fuel,mil;
       clrscr();
       printf("\nEnter the value of distance coverd by car and fuel consumed by car:");
       scanf("%f %f",&dis,&fuel);
       mil=dis/fuel;
       printf("%.2f km/litre is the mileage of the car.",mil);
       getch();
}