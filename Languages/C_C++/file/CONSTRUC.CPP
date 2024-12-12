#include<iostream.h>
#include<conio.h>
class demo{
		public:
		int a,b;
		demo()
		{
			cout<<"enter a::";
			cin>>a;
			cout<<"enter b::";
			cin>>b;
			cout<<endl<<"sum is "<<a+b;
		}
};
void main()
{
		clrscr();
		demo obj;
		getch();
}