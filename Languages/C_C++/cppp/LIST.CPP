#include<iostream.h>
#include<conio.h>
class shopping{
		int itemcode[100],price[100],total;
		char name[100][100];
		public:
		void list()
		{


			for(int i=0; i<5; i++)
			{
				cout<<"enter the item name ::";
				cin>>name[i];
				cout<<"enter the item price::";
				cin>>price[i];
				cout<<"enter the item code::";
				cin>>itemcode[i];
			   //	total+=price[i];
			}
		}
		void show()
		{
			for(int i=0; i<5; i++)
			{
				cout<<endl<<name[i]<<endl;
				cout<<price[i]<<endl;
				cout<<itemcode[i]<<endl;
			      //	total+=price[i];
			}
		       //	cout<<"item total is "<<total;
		}
		void count()
		{       total=0;
			for(int i=0; i<5; i++)
			{
				total+=price[i];
			}
			cout<<"item total is "<<total;
		}
};
void main()
{
		clrscr();
		shopping obj;
		obj.list();
		obj.show();
		obj.count();
		getch();
}

