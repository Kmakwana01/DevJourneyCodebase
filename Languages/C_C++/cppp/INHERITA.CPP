#include<iostream.h>
#include<conio.h>
class father{
		public:
		int money;
		void beta()
		{
			money=1000;
		}
};
class my :public father{
		public:

		int mymoney1;
		void mymoney()
		{
			mymoney1=122;
		     //	cout<<mymoney1+money;
		}
};
class myson:public my{

		public:
		int mysonmoney;
		void paisa()
		{
			mysonmoney=98;
			cout<<money+mymoney1+mysonmoney;
		}
};
void main()
{
	clrscr();
	myson a;
	a.beta();
	a.mymoney();
	a.paisa();
	getch();
}