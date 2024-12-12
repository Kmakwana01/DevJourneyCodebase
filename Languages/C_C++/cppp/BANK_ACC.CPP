#include <iostream.h>
#include <conio.h>
#include <string.h>

class bank
{
public:
	long int number;
	char name[100];
	float balance;
	void open_acc();
	void show_acc();
};

void bank::open_acc()
{
	cout << "enter the account number ::";
	cin >> number;

	cout << "enter the name::";
	cin >> name;

	cout << "enter the opening balance::";
	cin >> balance;
}

void bank::show_acc()
{
	cout << "\n\n--your account detail--";
	cout << endl
		 << number << endl
		 << name << endl
		 << balance;
}

void main()
{
	clrscr();
	bank obj;
	obj.open_acc();
	obj.show_acc();
	cout << "\n\nwithdrow balance = 1" << endl
		 << "deposit balance = 2" << endl
		 << "chech balance = 3";
	cout << "\nenter your choice ::";
	int n;
	cin >> n;
	switch (n)
	{
	case 1:
		cout << "\nplease enter your withdrow amout :: ";
		int with;
		cin >> with;
		if (obj.balance < with)
		{
			cout << "not valid amount";
		}
		else
		{
			obj.balance -= with;
			cout << "\nsucsesfully withdrow \nthank you";
			cout << endl
				 << "\nyour availaible amount is " << obj.balance;
		}
		break;
	case 2:
		cout << "\nplease enter your deposit amount :: ";
		int dip;
		cin >> dip;
		obj.balance += dip;
		cout << "\nthank you";
		cout << endl
			 << "\nyour availaible amount is " << obj.balance;
		break;
		//	default : cout<<"\nplease enter valid chice";
	case 3:
		cout << "\nyour availaible balance is " << obj.balance;
		break;
	default:
		cout << "\nplease enter valid choice";
	}
	getch();
}
