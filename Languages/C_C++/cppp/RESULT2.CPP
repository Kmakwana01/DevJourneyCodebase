#include <iostream.h>
#include <conio.h>
class student
{
public:
	char name[100];
	int roll, marks[32], total, min, max;
	float result;

	void s1()
	{
		for (int i = 0; i <= 2; i++)
		{
			cout << "enter the name::";
			cin >> name;

			cout << "\nenter roll no.::";
			cin >> roll;

			cout << "\nenter the 5 subject marks::" << endl
				 << endl;
			for (i = 0; i <= 4; i++)
			{
				cout << "sub" << i << ":: ";
				cin >> marks[i];
			}
			total = 0;
			for (i = 0; i <= 4; i++)
			{
				total += marks[i];
			}
			cout << "\ntotal marks is " << total;
			//	result=total/5.0;
			cout << "\npersontage is " << total / 5.0;
			max = marks[0];
			min = marks[0];
			for (i = 0; i <= 4; i++)
			{
				if (max < marks[i])
				{
					max = marks[i];
				}
				if (min > marks[i])
				{
					min = marks[i];
				}
			}

			cout << "\nminumin marks is " << min;
			cout << "\nmaximun marks is " << max << endl;
			if (result < 33)
			{
				cout << "fail";
			}
			else if (result < 60)
			{
				cout << "Grade C";
			}
			else if (result < 80)
			{
				cout << "grade B";
			}
			else if (result < 100)
			{
				cout << "grade A";
			}
			else
			{
				cout << "not valid result";
			}
		}
	}
};
void main()
{
	clrscr();
	student obj;
	obj.s1();

	getch();
}
