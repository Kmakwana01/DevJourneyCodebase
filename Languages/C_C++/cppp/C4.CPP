#include<iostream.h>
#include<conio.h>
void main()
{
	int day;
clrscr();

	cout<<"enter day  ";
	cin>>day;

	switch(day)
	{
	case 1: cout<<"monday";
		break;
	case 2: cout<<"tuesday";
		break;
	case 3: cout<<"wednesday";
		break;
	case 4: cout<<"thursday";
		break;
	case 5: cout<<"friday";
		break;
	case 6: cout<<"saturday";
		break;
	case 7: cout<<"sunday";
		break;
	default:cout<<"please enter the valid day";
	}

getch();
}