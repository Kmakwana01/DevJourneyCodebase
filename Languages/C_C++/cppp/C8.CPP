#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
	int b=50;
	int *p=&b;
	int **ph=&p;
	cout<<&b<<endl;
	cout<<p<<endl;
	cout<<&p<<endl;
	cout<<**ph<<endl;
getch();
}
