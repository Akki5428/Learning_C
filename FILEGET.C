#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp;
    char name[50],n[50];
    int i ;
    clrscr();
    fp=fopen("op.txt","w");
    printf("\nEnter your sentence :");
    gets(name);
    fprintf(fp,"%s",name);
    fclose(fp);
    fp=fopen("op.txt","r");
    for(i=0;i<4;i++)
    {
      fscanf(fp,"%s",n);
      printf("%s ",n);
    }

    fclose(fp);
    getch();

}