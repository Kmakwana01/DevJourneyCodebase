#include <iostream>
using namespace std;

int main()
{
	char chh;
	cout << "Enter the char: ";
	cin >> chh;

	if (chh == 'a' || chh == 'e' || chh == 'i' || chh == 'o' || chh == 'u' ||
		chh == 'A' || chh == 'E' || chh == 'I' || chh == 'O' || chh == 'U')
	{
		cout << "The vowel character";
	}
	else if (chh >= 'a' && chh <= 'z' || chh >= 'A' && chh <= 'Z')
	{
		cout << "The consonant character";
	}
	else
	{
		cout << "Not an alphabet";
	}
	return 0;
}