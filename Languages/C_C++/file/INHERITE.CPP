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
void main()
{
	clrscr();
	demo2 ob;
	ob.input();
	ob.input2();
	getch();
}