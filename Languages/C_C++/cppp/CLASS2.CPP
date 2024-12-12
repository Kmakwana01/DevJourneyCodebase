#include<iostream.h>
#include<conio.h>
class student{
		public:
		int marks;
		char name[100];
		float result;
		int roll;
			void exam()
			{
				cout<<endl;
				cout<<roll<<endl;
				cout<<marks<<endl;
				cout<<name<<endl;
				cout<<result<<endl;
			}

		};
void main()
{
		clrscr();
		student s1;
		cout<<"enter roll no::";
		cin>>s1.roll;
		cout<<"enter marks::";
		cin>>s1.marks;
		cout<<"enter name::";
		cin>>s1.name;
		cout<<"enter result::";
		cin>>s1.result;
		s1.exam();

getch();
}