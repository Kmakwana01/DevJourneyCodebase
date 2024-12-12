#include<iostream.h>
#include<conio.h>
class student{
		char name[100][100],grade[100][100];
		int roll[100];
		public:
		void exam()
		{
			for(int i=0; i<5; i++)
			{
				cout<<"enter the name::";
				cin>>name[i];
				cout<<"enter the roll::";
				cin>>roll[i];
				cout<<"enter the grade::";
				cin>>grade[i];
			}
			cout<<"Name\t"<<"Roll\t"<<"Grade\n\n";
			for(i=0; i<5; i++)
			{
				cout<<name[i]<<"\t"<<roll[i]<<"\t"<<grade[i]<<endl;
			}
		}
};
void main()
{
	clrscr();
	student obj;
	obj.exam();
	getch();
}
