#include<iostream.h>
#include<conio.h>
struct i
{
	int roll;
	char name[23];
	float marks;
};
int main()
{
struct i p;
clrscr();
		cout<<"enter the roll number:";
		cin>>p.roll;

		cout<<"enter the name:";
		cin>>p.name;

		cout<<"entert the marks";
		cin>>p.marks;

		cout<<p.roll<<ends<<p.name<<ends<<p.marks;
getch();
return 0;
}

