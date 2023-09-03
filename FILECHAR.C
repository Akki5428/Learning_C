#include<stdio.h>
#include<conio.h>
void main()
{
     FILE *fp;
     char ch;
     clrscr();
     fp=fopen("palanpur.txt","w");
     while((ch=getchar())!='\n')
     {
	   putc(ch,fp);
     }
     fclose(fp);
     fp=fopen("palanpur.txt","r");
     while((ch=getc(fp))!=EOF)
     {
	    printf("%c",ch);
     }
     fclose(fp);
     getch();
}