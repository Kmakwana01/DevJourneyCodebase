#include<iostream.h>
#include<conio.h>
class bank{
		public:
		long number;
		char name[100];
		float balance;

		void open()
		{
			cout<<"enter account number::";
			cin>>number;
			cout<<"enter account name::";
			cin>>name;
			cout<<"enter account balance::";
			cin>>balance;
		}
		void show()
		{
			cout<<"\n--your account detail--";
			cout<<endl<<number<<endl<<name<<endl<<balance<<endl;
		}
		void deposit()
		{
			int dip;
			cout<<"enter your deposit amount::";
			cin>>dip;
			balance+=dip;
		}
		void withdrow()
		{
			int with;
			cout<<"enter your withdrow amount::";
			cin>>with;
			balance-=with;
		}
};
void main()
{
		clrscr();
		bank ob;
		int n;
		do{
			cout<<"\n1:open account::";
			cout<<"\n2:show account::";
			cout<<"\n3:deposit amount::";
			cout<<"\n4:withdrow amount::";
			cout<<"\n5:quit::";
			cout<<"\n\nenter your choice::";
			cin>>n;


		switch(n)
		{
			case 1:ob.open();
			break;
			case 2:ob.show();
			break;
			case 3:ob.deposit();
			break;
			case 4:ob.withdrow();
			break;
			default:cout<<"thankyou";
		}
		}while(n!=5);
		getch();
		}