#include <iostream>
using namespace std;

int main()
{
	float a, b, celcius, fehranhit;
	int x;
	cout << "Celcius to Fehranhit : case 1" << endl;
	cout << "Fehranhit to Celcius : case 2" << endl;

	cout << "Enter your choice: ";
	cin >> x;

	switch (x)
	{
	case 1:
		cout << "Enter the Fehranhit temperature (Cel. to Fehr.): ";
		break;
		cin >> b;

		fehranhit = ((9 * b) / 5) + 32;
		cout << fehranhit;
		break;

	case 2:
		cout << "Enter the Celcius temperature (Fehr. to Cel.): ";
		cin >> a;

		celcius = 5 * (a - 32) / 9;
		cout << celcius;
		break;

	default:
		cout << "\n\nNot a valid choice";
	}
	return 0;
}