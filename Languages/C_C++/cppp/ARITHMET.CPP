#include <iostream.h>
#include <conio.h>

class arithmetic
{
public:
	int a, b, c;
	void print()
	{
		cout << "enter a ::";
		cin >> a;

		cout << "enter b ::";
		cin >> b;
	}
	void sum()
	{
		cout << "sum is " << a + b;
	}
	void sub()
	{
		cout << "sub is " << a - b;
	}
	void multi()
	{
		cout << "multi is " << a * b;
	}
	void div()
	{
		cout << "div is " << a / b;
	}
	void modulo()
	{
		cout << "modulo is " << a % b;
	}
};

void main()
{
	clrscr();
	arithmetic obj;
	obj.print();
	obj.sum();
	getch();
}
