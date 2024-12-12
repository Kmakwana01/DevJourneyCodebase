#include<iostream.h>
#include<conio.h>
class person{
		int roll;
		char msg;

		public:
		void show()
		{
			roll=55;
			cout<<"roll number is "<<roll;
		}
		};
int main()
{
	clrscr();
	person obj;
	obj.show();
	getch();
	return 0;
}
