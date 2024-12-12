#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,n;
	cout<<"enter n value::";
	cin>>n;

	for(int i=1; i<=10; i++)
	{
		cout<<n<<" X "<<i<<" X "<<n*i<<endl;
	}
	getch();
}
