#include<iostream.h>
#include<conio.h>
#include<string.h>

class crud{
		char item[100];
		int itemcode[100],i,count;
		float price[100],total;
		public:

		void add(){
			cout<<"\nhow many item add::";
			int n;
			cin>>n;
			for(i=0; i<=n; i++){

			cout<<"\nenter item code::";
			cin>>itemcode[i];
			cout<<"\nenter item name::";
			cin>>item;
			cout<<"\nenter price::";
			cin>>price[i];
			count++;
			}

		}
		void show(){
		cout<<"code   item    price";
		for(i=0; i<=count; i++)
		{
		cout<<itemcode[i]<<"   "<<item[i]<<"   "<<price[i];
		}
		}
};
void main()
{
	crud obj;
	obj.add();
	getch();
}


