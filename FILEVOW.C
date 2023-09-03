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
	 if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='o' || ch=='u')
	 {
	    printf("%c",ch);
	 }
     }
     fclose(fp);
     getch();
}