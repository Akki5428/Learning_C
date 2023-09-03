#include<stdio.h>
#include<conio.h>
void main()
{
     int a[3][3],b[3][3],c[3][3],k,i,j,n,count=0,temp;
     float d[3][3];
     clrscr();
     start:
     printf("\n1 for scan");
     printf("\n2 for print");
     printf("\n3 for sum");
     printf("\n4 for subtraction");
     printf("\n5 for divison");
     printf("\n6 for multiplication");
     printf("\n7 for sorting asceding");
     printf("\n8 for sorting descending");
     printf("\n9 for exit");
     printf("\nEnter your number:");
     scanf("%d",&n);
     switch(n)
     {
	     case 1 :   count++;
			for(i=0;i<3;i++)
			{
			for(j=0;j<3;j++)
				{
			printf("\nEnter your a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
				}
			}
			for(i=0;i<3;i++)
			{
			for(j=0;j<3;j++)
				{
			printf("\nEnter your b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
				}
			}
			break;

		case 2 : if(count==0)
			  {
			     printf("\nInvalid please scan matrix first.");
			     goto start;
			  }
			 for(i=0;i<3;i++)
			{
			for(j=0;j<3;j++)
				{
				printf("%d ",a[i][j]);
				}
			  printf("\t");
			for(j=0;j<3;j++)
				{
				printf("%d ",b[i][j]);
				}
			  printf("\n");
			 }

			break;

		case 3 :   if(count==0)
			  {
			    printf("\nInvalid please scan matrix first.");
			    goto start;
			  }
			  for(i=0;i<3;i++)
			  {
			     for(j=0;j<3;j++)
			     {
				  c[i][j]=a[i][j]+b[i][j];
			     }
			  }
		     for(i=0;i<3;i++)
			{
			for(j=0;j<3;j++)
				{
			printf("%d ",a[i][j]);
				}
			  printf("\t");
			for(j=0;j<3;j++)
				{
			printf("%d ",b[i][j]);
				}
			  printf("\t");

			for(j=0;j<3;j++)
			     {
				  printf("%d ",c[i][j]);
			     }
			     printf("\n");
			 }
			  break;

		case 4 :  if(count==0)
			  {
			    printf("\nInvalid please scan matrix first.");
			    goto start;
			  }
			  for(i=0;i<3;i++)
			  {
			     for(j=0;j<3;j++)
			     {
				  c[i][j]=a[i][j]-b[i][j];
			     }
			  }
		   for(i=0;i<3;i++)
			{
			for(j=0;j<3;j++)
				{
				 printf("%d ",a[i][j]);
				}
			  printf("\t");
			for(j=0;j<3;j++)
				{
				 printf("%d ",b[i][j]);
				}
			  printf("\t");
			for(j=0;j<3;j++)
			     {
				  printf("%d ",c[i][j]);
			     }
			     printf("\n");
			  }
			  break;

	       case 5 :   if(count==0)
			  {
			    printf("\nInvalid please scan matrix first.");
			    goto start;
			  }
			  for(i=0;i<3;i++)
			  {
			     for(j=0;j<3;j++)
			     {
				  d[i][j]=(float)a[i][j]/b[i][j];
			     }
			  }
		 for(i=0;i<3;i++)
			{
			for(j=0;j<3;j++)
				{
				 printf("%d ",a[i][j]);
				}
			  printf("\t");
			for(j=0;j<3;j++)
				{
				printf("%d ",b[i][j]);
				}
			  printf("\t");
			for(j=0;j<3;j++)
			     {
				  printf("%f ",d[i][j]);
			     }
			     printf("\n");
			  }
			  break;

	     case 6 : if(count==0)
		     {
			printf("\nInvalid please scan matrix first.");
			goto start;
		     }
		      for(i=0;i<3;i++)
		      {
			 for(j=0;j<3;j++)
			  {
			       c[i][j]=0;
			  }
		      }
		      for(i=0;i<3;i++)
			{
			for(j=0;j<3;j++)
				{
				for(k=0;k<3;k++)
					{
					c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
					}
				}
			}

			for(i=0;i<3;i++)
			{
			     for(j=0;j<3;j++)
				{
				   printf("%d ",a[i][j]);
				}
				printf("\t");
			     for(j=0;j<3;j++)
				{
				  printf("%d ",b[i][j]);
				}
				printf("\t");
			    for(j=0;j<3;j++)
				{
			       printf("%d ",c[i][j]);
				}
				printf("\n");
			 }
			     break;

		case 7 :
		for(k=0;k<9;k++)   //for a
	      {
			for(i=0;i<3;i++)
			{
			   for(j=0;j<3;j++)
			    {
			     if(j==2 && i==2)
				{
				 break;
				}
			     if(j==2)
			       {
			       if(a[i][j]>a[i+1][j-2])
				 {
				  temp=a[i][j];
				  a[i][j]=a[i+1][j-2];
				  a[i+1][j-2]=temp;
				 }
			       }

		  else
		     {
		      if(a[i][j]>a[i][j+1])
			{
			 temp=a[i][j];
			 a[i][j]=a[i][j+1];
			 a[i][j+1]=temp;
			}
		    }
		       } //end of loop j
		 } //end of loop j
       }   //end of loop k

       for(k=0;k<9;k++)        //for b
	      {
			for(i=0;i<3;i++)
			{
			   for(j=0;j<3;j++)
			    {
			     if(j==2 && i==2)
				{
				 break;
				}
			     if(j==2)
			       {
			       if(b[i][j]>b[i+1][j-2])
				 {
				  temp=b[i][j];
				  b[i][j]=b[i+1][j-2];
				  b[i+1][j-2]=temp;
				 }
			       }

		  else
		     {
		      if(b[i][j]>b[i][j+1])
			{
			 temp=b[i][j];
			 b[i][j]=b[i][j+1];
			 b[i][j+1]=temp;
			}
		    }
		       } //end of loop j
		 } //end of loop j
       }   //end of loop k
       for(i=0;i<3;i++)
       {
	   for(j=0;j<3;j++)
	   {
		   printf("%d ",a[i][j]);
	   }
	   printf("\t");
	   for(j=0;j<3;j++)
	   {
		   printf("%d ",b[i][j]);
	   }
	   printf("\n");
       }
       break;

	       case 8 :
	       for(k=0;k<9;k++)
	      {
			for(i=0;i<3;i++)
			{
			   for(j=0;j<3;j++)
			    {
			     if(j==2 && i==2)
				{
				 break;
				}
			     if(j==2)
			       {
			       if(a[i][j]<a[i+1][j-2])
				 {
				  temp=a[i][j];
				  a[i][j]=a[i+1][j-2];
				  a[i+1][j-2]=temp;
				 }
			       }

		  else
		     {
		      if(a[i][j]<a[i][j+1])
			{
			 temp=a[i][j];
			 a[i][j]=a[i][j+1];
			 a[i][j+1]=temp;
			}
		    }
		       } //end of loop j
		 } //end of loop j
       }   //end of loop k

       for(k=0;k<9;k++)                    //  for b
	      {
			for(i=0;i<3;i++)
			{
			   for(j=0;j<3;j++)
			    {
			     if(j==2 && i==2)
				{
				 break;
				}
			     if(j==2)
			       {
			       if(b[i][j]<b[i+1][j-2])
				 {
				  temp=b[i][j];
				  b[i][j]=b[i+1][j-2];
				  b[i+1][j-2]=temp;
				 }
			       }

		  else
		     {
		      if(b[i][j]<b[i][j+1])
			{
			 temp=b[i][j];
			 b[i][j]=b[i][j+1];
			 b[i][j+1]=temp;
			}
		    }
		       } //end of loop j
		 } //end of loop j
       }   //end of loop k
       for(i=0;i<3;i++)
       {
	   for(j=0;j<3;j++)
	   {
		   printf("%d ",a[i][j]);
	   }
	   printf("\t");
	   for(j=0;j<3;j++)
	   {
		    printf("%d ",b[i][j]);
	   }
	   printf("\n");
       }
       break;

		case 9 : exit(0);


     }
     goto start;
}