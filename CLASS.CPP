#include<iostream.h>
#include<conio.h>

class Sample{
       private:
		int x,y,z; //Data members
       protected:
		 int a,b,c;
       public:
		int p,q,r;
	 void add();
	 void sub()
	 {
	      cout<<endl<<"\nEnter the value of x and y";
	      cin>>x>>y;
	      z=x-y;
	      cout<<"\nThe subtraction of x and y is "<<z;
	 }
	 void mul();
	 void div();

};

void Sample::add()
{
	cout<<"\nEnter the value of x and y:";
	cin>>x>>y;
	z=x+y;
	cout<<"\nTHe sum of x and y is "<<z;
}

void Sample::mul()
{
	cout<<endl<<"\nEnter the value of x and y";
	cin>>x>>y;
	z=x*y;
	cout<<"\nThe multiplication of x and y is "<<z;

}

void Sample::div()
{
	cout<<endl<<"\nEnter the value of x and y";
	cin>>x>>y;
	z=x/y;
	cout<<"\nThe divison of x and y is "<<z;

}

int main()
{
       Sample obj;
       clrscr();
       obj.add();
       obj.sub();
       obj.mul();
       obj.div();
       getch();
       return 0;
}