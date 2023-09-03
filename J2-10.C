#include<stdio.h>
#include<conio.h>
struct time_struct
{
      int hour;
      int minute;
      int second;
}t;
void scan();
void print();

void main()
{
     clrscr();
     scan();
     print();
     getch();

}
void scan()
{
      while(1)
      {
	  printf("Enter the hour:");
	  scanf("%d",&t.hour);
	  if(t.hour>=0 && t.hour<25)
	  {
	       break;
	  }
	  else
	  {
	      printf("\ninvalid choice....\n");
	  }
      }

      while(1)
      {
	   printf("\nEnter the minute:");
	  scanf("%d",&t.minute);
	  if(t.minute>=0 && t.minute<61)
	  {
	       break;
	  }
	  else
	  {
	      printf("\ninvalid choice....\n");
	  }
      }

       while(1)
      {
	   printf("\nEnter the second:");
	  scanf("%d",&t.second);
	  if(t.second>=0 && t.second<61)
	  {
	       break;
	  }
	  else
	  {
	      printf("\ninvalid choice....\n");
	  }
      }
}
void print()
{
       printf("\n %d:%d:%d ",t.hour,t.minute,t.second);

}