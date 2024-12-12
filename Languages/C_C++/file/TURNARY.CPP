#include<iostream.h>
#include<conio.h>
void main()
{
		clrscr();
		int a,b,c;
		cout<<"enter a::";
		cin>>a;
		cout<<"enter b::";
		cin>>b;
		cout<<"enter c::";
		cin>>c;
		int h=a>b?a>c?a:b:b>c?b:c;
		cout<<h;
		getch();
}