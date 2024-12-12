#include<iostream.h>
#include<conio.h>
class demo{
		public:
		void demo1()
		{
			cout<<"hello ";
		}
};
class a:public demo{
		public:
		void print()
		{
			cout<<"world";
		}
};
class b:public demo{
		public:
		void print2()
		{
			cout<<"world";
		}
};
void main()
{
		clrscr();
		a ob;
		ob.demo1();
		ob.print();
		cout<<"\n";
		b ob1;
		ob1.demo1();
		ob1.print2();
		getch();
		}