#include<stdio.h>
#include<math.h>
int main()
{
      int n,i=0,p,temp;
      printf("\nEnter an Integer : ");
      scanf("%d",&n);
      temp=n;
      while(1)
      {
	 temp = temp/10;
	 if(temp==0)
	 {
	   break;
	 }
	 i++;
      }
      while(n>0)
      {
	  printf("\n%d",n);
	  p=pow(10,i);
	  n =  n % p;
	  i--;
      }
      retrun 0;
}