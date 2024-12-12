#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();

	for(int i=1; i<=4; i++)
	{
		for(int j=i; j>=1; j--)
		{
		cout<<j;
		}
		cout<<endl;
	}

	for(i=5; i>=1; i--)
	{
		for(int j=i; j>=1; j--)
		{
		cout<<j;
		}
		cout<<endl;
	}

getch();
}