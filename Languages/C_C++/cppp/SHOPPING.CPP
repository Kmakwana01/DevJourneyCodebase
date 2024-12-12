#include<iostream.h>
#include<conio.h>
class shopping{
		int code[100];
		float price[100];
		int count;
		public:
			void count1()
			{
				count=0;
			}
			void list()
			{
				cout<<"enter the code::";
				cin>>code[count];
				cout<<"enter the price::";
				cin>>price[count];
				count++;
			}
			void sum()
			{
				float sum=0;
				for(int i=0; i<count; i++)
				{
					sum+=price[i];
				}
				cout<<"\nsum is "<<sum;
			}
			void remove()
			{
				int a;
				cout<<"\nenter code no.::";
				cin>>a;
				for(int i=0; i<count; i++)
				{
					if(a==code[i])
					{
						price[i]=0;
						a=0;
					}
				}
			}
			void displayalldata()
			{
				for(int i=0; i<count; i++)
				{
					cout<<code[i]<<" "<<price[i];
				}
			}
};
void main()
{
	clrscr();
	shopping obj;
	obj.count1();
	int b;


	do{
	cout<<"\n1:add in item::";
	cout<<"\n2:total price is ::";
	cout<<"\n3:remove item is ::";
	cout<<"\n4:display all item ::";
	cout<<"\n5:quit::";
	cout<<"\nenter your choice::";
	cin>>b;
	switch(b)
	{
		case 1:obj.list();
		break;
		case 2:obj.sum();
		break;
		case 3:obj.remove();
		break;
		case 4:obj.displayalldata();
		break;
		case 5:
		break;
		default:cout<<"not valid data ";
	}


}while(b!=5);
getch();
}