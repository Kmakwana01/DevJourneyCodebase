#include<iostream.h>
#include<conio.h>
class shopping{
		public:
		int code[100];
		int price[100],total,count;
		void list()
		{
			total=0;
			count=0;
			for(int i=0; i<=4; i++)
			{
				cout<<"enter code"<<i<<"::";
				cin>>code[i];
				cout<<"enter price"<<i<<"::";
				cin>>price[i];
				count=i;
				total+=price[i];
			}
		     //	cout<<endl;
		      //	cout<<count+1<<"\t"<<total;
		}
		void print()
		{
		cout<<"\nCode\t"<<"Name\n";
		for(int i=0; i<=4; i++)
		{
			cout<<code[i]<<"\t"<<price[i]<<endl;
		}
			cout<<endl;
			cout<<count+1<<"\t"<<total;
		}
};
void main()
{
		clrscr();
		shopping obj;
		obj.list();
		obj.print();
		getch();
}