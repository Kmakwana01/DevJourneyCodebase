#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
	for(int i=1; i<=5; i++)
	{
		for(int k=1; k<=6-i; k++)
		{
		cout<<k;
		}
	       //	cout<<endl;
		for(int j=i; j>1; j--)
		{
		cout<<"  ";
		}
		for(k=6-i; k>=1; k--)
		{
		cout<<k;
		}
		cout<<endl;

	}

	for(i=1; i<=5; i++)
	{
		for(int k=1; k<=i; k++)
		{
		cout<<k;
		}
	       //	cout<<endl;
		for(int j=i; j<5; j++)
		{
		cout<<"  ";
		}
		for(k=i; k>=1; k--)
		{
		cout<<k;
		}
		cout<<endl;

	}
getch();
}