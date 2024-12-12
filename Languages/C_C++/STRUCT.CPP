#include<iostream.h>
#include<conio.h>
struct stu
{
	int roll;
	char name[20];
	float marks;
}s;
int main()
{
      //	struct stu s;
	clrscr();
	cout<<"enter student roll number:::";
	cin>>s.roll;

	cout<<"enter student name::";
	cin>>s.name;

	cout<<"enter student marks:: ";
	cin>>s.marks;

	cout<<s.roll<<ends<<s.name<<ends<<s.marks;

	getch();
	return 0;
}
