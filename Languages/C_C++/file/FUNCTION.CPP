#include<iostream.h>
#include<conio.h>
int sum(int a,int b);
void main()
{
	clrscr();
	int a,b,c;
	cout<<"enter a::";
	cin>>a;
	cout<<"enter b::";
	cin>>b;
	cout<<sum(a,b);
	getch();
}
int sum(int a,int b)
{
	return a+b;
}
