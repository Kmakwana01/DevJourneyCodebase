#include<iostream.h>
#include<conio.h>
class hello{
		public:

		void plus(int a, int b);
};
void hello :: plus(int a,int b)
{
cout<<a+b;
}
void main()
{
	clrscr();
	hello obj;
	obj.plus(5,5);
	getch();
}