#include<iostream.h>
#include<conio.h>
void main()
{
	int a[100],sum=0;
	 clrscr();
	for(int i=0; i<=5; i++)
	{
		cout<<"a["<<i<<"]::";
		cin>>a[i];
	}
	for(i=0; i<=5; i++)
	{
		sum+=a[i];
	}
	cout<<endl<<"sum is "<<sum;
	getch();
	}
