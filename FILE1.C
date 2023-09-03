#include<stdio.h>
#include<conio.h>
void main()
{
     FILE *con1,*con2,*con3,*con4,*con5;
     char n1[30],n2[30],n3[30],n4[30],n5[30];
     clrscr();
     con1=fopen("ak1.txt","w");
     fprintf(con1,"%s","Polland");
     fclose(con1);
     con2=fopen("ak2.txt","w");
     fprintf(con2,"%s","Japan");
     fclose(con2);
     con3=fopen("ak3.txt","w");
     fprintf(con3,"%s","Dubai");
     fclose(con3);
     con4=fopen("ak4.txt","w");
     fprintf(con4,"%s","Island");
     fclose(con4);
     con5=fopen("ak5.txt","w");
     fprintf(con5,"%s","canada");
     fclose(con5);


     con1=fopen("ak1.txt","r");
     fscanf(con1,"%s",n1);
     printf("\n%s",n1);
     fclose(con1);
     con2=fopen("ak2.txt","r");
     fscanf(con2,"%s",n2);
     printf("\n%s",n2);
     fclose(con2);
     con3=fopen("ak3.txt","r");
     fscanf(con3,"%s",n3);
     printf("\n%s",n3);
     fclose(con3);
     con4=fopen("ak4.txt","r");
     fscanf(con1,"%s",n4);
     printf("\n%s",n4);
     fclose(con4);
     con5=fopen("ak1.txt","r");
     fscanf(con5,"%s",n5);
     printf("\n%s",n5);
     fclose(con5);
     getch();


}