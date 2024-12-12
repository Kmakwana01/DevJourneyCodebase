#include<iostream.h>
#include<conio.h>
class demo{
		int x;
		public:
		int show(int x);
};
int demo:: show(int x)
{
	return x+5;
}
void main()
{
	clrscr();
	demo ob;
	cout<<ob.show(456);
	getch();
	}
