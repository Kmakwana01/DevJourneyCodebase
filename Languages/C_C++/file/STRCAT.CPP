#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	char p[100],o[100];
	clrscr();
	cout<<"enter string::";
	cin>>p;
	cout<<"enter string::";
	cin>>o;
	cout<<strcat(p,o);
	getch();
}
