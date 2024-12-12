#include<iostream.h>
#include<conio.h>
class ok{
		int a,b;
		public:
		void show()
		{
			a=10,b=11;
		}
		friend class pk;
};

class pk{
		public:
		int c;
		void add(ok m)
		{
			c=m.a+m.b;
			cout<<c;
		}
};
int main()
{
	clrscr();
	ok a;
	a.show();
	pk b;
	b.add(a);
	getch();
	}

