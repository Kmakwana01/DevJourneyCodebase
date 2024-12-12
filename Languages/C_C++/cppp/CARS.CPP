#include<iostream.h>
#include<conio.h>
class mycar{
		public:
		char *name;
		char *model;
		int year;
		};
void main()
{
	clrscr();
	mycar car;
	car.name="mercedes";
	car.model="c200";
	car.year=2015;

	mycar car2;
	car2.name="bugati";
	car2.model="chiron";
	car2.year=2011;

	cout<<car.name<<endl;
	cout<<car.model<<endl;
	cout<<car.year<<endl<<endl;

	cout<<car2.name<<endl;
	cout<<car2.model<<endl;
	cout<<car2.year<<endl;

	getch();
}