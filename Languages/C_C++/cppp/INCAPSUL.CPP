#include<iostream.h>
#include<conio.h>
class chor{
		private:
		char name,address[100];
		long int phone;
		public:
		void input()
		{
		      ///	name="maganlal";
		      //	address="lalbahadur surat";
			phone=998877899;
			cout<<phone;
		}
};
class police:public chor{
};
int main()
{
		clrscr();
	       //	chor a;
		police b;
		b.input();
		getch();
}
