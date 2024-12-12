#include<iostream.h>
#include<conio.h>
class father{
		public:
		int a,c;
		void demo1()
		{
			a=1000;
		}
};
class mother{
		public:
		int b;
		void demo2()
		{
			b=2000;
		}
};
class child:public father,public mother{
		public:
		demo3()
		{
			c=500;
			cout<<"total amount is "<<a+b+c;
		}
};
void main()
{
		clrscr();
		child ob;
		ob.demo1();
		ob.demo2();
		ob.demo3();
		getch();
}

