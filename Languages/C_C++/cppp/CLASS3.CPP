#include<iostream.h>
#include<conio.h>
class student{

		public:
		int marks;
		char name[100];
		int roll;
		float result;

			void exam(int marks,char name[100],int roll,float result)
			{

				cout<<endl;
			      //	cout<<"roll no.::"<<roll<<endl;

				cout<<"name    ::"<<name<<endl;
				cout<<"roll no.::"<<roll<<endl;
				cout<<"marks   ::"<<marks<<endl;
				cout<<"result  ::"<<result<<endl;
			}

		};
void main()
{
		clrscr();
		student s1;
	     //	cout<<"enter roll no::";
	      //	cin>>s1.roll;
	       //	cout<<"enter marks::";
	    //	cin>>s1.marks;
	     //	cout<<"enter name::";
	      //	cin>>s1.name;
	     //	cout<<"enter result::";
	      //	cin>>s1.result;
	       //	s1.roll=34;
		s1.exam(99,"khushal",45,90.89);
		cout<<endl;

		student s2;
		s2.exam(100,"makwana",46,99.9);

		student s3;
		s3.exam(101,"jay",47,33.9);

		student s4;
		s4.exam(102,"ok",49,22.9);






getch();
}