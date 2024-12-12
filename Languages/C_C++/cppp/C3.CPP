#include <iostream.h>
#include <conio.h>
void main()
{
	int p, q, r, s;
	clrscr();
	cin >> p >> q >> r >> s;

	if (p > q)
	{
		if (p > r)
		{
			if (p > s)
			{
				cout << "p is max " << p;
			}
			else
			{
				cout << "s is max " << s;
			}
			
		}
		else
		{
			if (r > s)
			{
				cout << "r is max " << r;
			}
			else
			{
				cout << "s is max " << s;
			}
		}
	}
	else
	{
		if (q > r)
		{
			if (q > s)
			{
				cout << "q is max " << q;
			}
			else
			{
				cout << "s is max " << s;
			}
		}
		else
		{
			if (r > s)
			{
				cout << "r is max " << r;
			}
			else
			{
				cout << "s is max " << s;
			}
		}
	}
	getch();
}
