#include<iostream.h>
#include<conio.h>
void main()
{
	int age;
clrscr();
	cout<<"enter your age::";
	cin>>age;

	if(age<12)
	{
		cout<<"you are children";
	}
	else if(age<=18)
	{
		cout<<"you are teenager";
	}
	else if(age>18)
	{
		cout<<"you are adult";
	}
	else
	{
		cout<<"not valid age";
	}
getch();
}
