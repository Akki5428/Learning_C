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
void update();

void main()
{
     int a;
     clrscr();
     scan();
     print();
     printf("\nYou want update please press 1 either 0 :");
     scanf("%d",&a);
     if(a==1)
     {
	 update();
     }
     else if(a==0)
     {
	    exit(0);
     }
     else
     {
	  printf("\nInvalid choice");
     }
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
void update()
{
       if(t.second>=0 && t.second<60)
       {
	     t.second = t.second + 1 ;
       }
       else
       {
	     t.second = 00 ;

	     if(t.minute>=0 && t.minute<60)
	     {
		 t.minute += 1 ;
	     }
	     else
	     {
		 t.minute = 00 ;

		 if(t.hour>=0 && t.hour<24)
		 {
			t.hour += 1 ;
		 }
		 else
		 {
			t.hour = 00;
		 }
	     }
       }
       printf("\nThe new time is %d:%d:%d",t.hour,t.minute,t.second);
}