#include<iostream.h>
#include<conio.h>
void main()
{
	int p,r,n,si;
clrscr();
	cout<<"\nenter the amount::";
	cin>>p;

	cout<<"\nenter the rate::";
	cin>>r;

	cout<<"\nenter the year::";
	cin>>n;

	si=(p*r*n)/100;
	cout<<"\n\nsimple interest is "<<si;

getch();
}

