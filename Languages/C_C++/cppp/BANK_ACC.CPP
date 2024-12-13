#include <iostream>
// #include <conio.h>
#include <string.h>

class bank
{
public:
	long int number;
	std::string name;
	float balance;
	void open_acc();
	void show_acc();
};

void bank::open_acc()
{
	std::cout << "Enter the account number: ";
	std::cin >> number;

	std::cout << "Enter the name: ";
	std::cin.ignore(); // Clear newline from previous input
	std::getline(std::cin, name);

	std::cout << "Enter the opening balance: ";
	std::cin >> balance;
}

void bank::show_acc()
{
	std::cout << "\n\n--Your Account Details--\n";
	std::cout << "Account Number: " << number << "\n";
	std::cout << "Name: " << name << "\n";
	std::cout << "Balance: " << balance << "\n";
}

int main()
{
	bank obj;

	obj.open_acc();
	int choice;

	do
	{
		std::cout << "\n\nOptions:\n";
		std::cout << "1. Withdraw Balance\n";
		std::cout << "2. Deposit Balance\n";
		std::cout << "3. Check Balance\n";
		std::cout << "4. Exit\n";
		std::cout << "Enter your choice: ";
		std::cin >> choice;

		switch (choice)
		{

		case 1:
			std::cout << "\nPlease enter your withdrawal amount: ";
			int with;
			std::cin >> with;
			if (obj.balance < with)
			{
				std::cout << "Not valid amount\n";
			}
			else
			{
				obj.balance -= with;
				std::cout << "\nSuccessfully withdrawn. Thank you.\n";
				std::cout << "Available balance: " << obj.balance << "\n";
			}
			break;
		case 2:
			std::cout << "\nPlease enter your deposit amount: ";
			int dip;
			std::cin >> dip;
			obj.balance += dip;
			std::cout << "\nThank you.\n";
			std::cout << "Available balance: " << obj.balance << "\n";
			break;
		case 3:
			std::cout << "Available balance: " << obj.balance << "\n";
			break;
		case 4:
			std::cout << "\nThank you for using our service. Goodbye!\n";
			break;
		default:
			std::cout << "\nPlease enter a valid choice.\n";
		}
	} while (choice != 4);

	return 0;
}
