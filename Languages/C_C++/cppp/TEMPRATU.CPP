#include<iostream.h>
#include<conio.h>
class tempreture{

			public:
			float feh,cel;
			int n;
			void temp()
			{
			cout<<"coice 1 feh to cel && choice 2 cel to feh::";

			cout<<"\nenter your choice :: ";
			cin>>n;


			switch(n)
			{
			case 1:
			cout<<"\nfehrahnhit to calcius ::\n";
			cout<<"\nenter fehranhit ::";
			cin>>feh;

			cel=(feh-32.0)*5.0/9.0;
			cout<<"\ncelcious is "<<cel;
			break;

			case 2:
			cout<<"\ncalcius to fehranhit::\n";
			cout<<"\nenter celcious ::";
			cin>>cel;

			feh=cel*9.0/5.0+32.0;
			cout<<"\ncelcious is "<<feh;
			break;
			default: cout<<"please enter valid choice";
			}

		       }
};
void main()
{
		clrscr();
		tempreture obj;
		obj.temp();
		getch();
}

