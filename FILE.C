#include<stdio.h>
#include<conio.h>
void main()
{
       FILE *fp;
       char name[30];
       fp=fopen("ak.txt","w");
       fprintf(fp,"%s","INDIA");
       fclose(fp);
       fp=fopen("ak.txt","r");
       fscanf(fp,"%s",name);
       printf("\nThe content of file is %s",name);
       fclose(fp);
       getch();
}