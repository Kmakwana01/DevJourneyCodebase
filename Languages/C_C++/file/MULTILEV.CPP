#include<iostream.h>
#include<conio.h>
class demo{
		public:
		void input()
		{
			cout<<"hello ";
		}
};
class demo2:public demo{
		public:
		void input2()
		{
			cout<<"world";
		}
};
class demo3:public demo2{
		public:
		void input3()
		{
			cout<<"!!";
		}
};
void main()
{
	clrscr();
	demo3 ob;
	ob.input();
	ob.input2();
	ob.input3();
	getch();
}