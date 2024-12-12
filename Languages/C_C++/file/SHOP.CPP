#include<iostream.h>
#include<conio.h>
class shopping{
		public:
		int code[100];
		float price[100];
		int qnt[100];
		int p;
		public:
		void input()
		{       cout<<"\nhow many items::";
			cin>>p;
			for(int i=0; i<=p; i++)
			{
			cout<<"enter item code number::";
			cin>>code[i];
			cout<<"enter item price::";
			cin>>price[i];
			cout<<"enter quntity::";
			cin>>qnt[i];
			}
		}
		void show()
		{
			for(int i=0; i<=p; i++)
			{
			cout<<"\ncode    price    qnt";
			cout<<code[i]<<"    "<<price[i]<<"    "<<qnt[i]<<endl;
			}
		}
		void add()
		{
			for(int i=0; i<=p; i++)
			{
			 cout<<"\nenter add item code::";
			 int o;
			 cin>>o;
				if(code[i]==o)
				{
					cout<<"\nhow many add::";
					int l;
					cin>>l;
					qnt[i]+=l;
				}
			 }
		}
};
void main()
{
		clrscr();
		shopping ob;
		int u;
		do{
			cout<<"\n1:input items";
			cout<<"\n2:show items";
			cout<<"\n3: add items";
			cout<<"\n4:quit";
			cout<<"\n\nenter your choice::";
			cin>>u;
			switch(u)
			{
				case 1:ob.input();
				break;
				case 2:ob.show();
				break;
				case 3:ob.add();
				break;
				default:cout<<"\nnot valid";
			}
			}while(u!=4);
			getch();
			}





