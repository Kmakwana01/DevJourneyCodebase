#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
	int b[90][90];
	cout<<"enter array elements\n";

	for(int i=0; i<=1; i++)
	{
		for(int j=0; j<=5; j++)
		{
			cin>>b[i][j];
		}
	}

	cout<<"array elements\n";

	for(i=0; i<=1; i++)
	{
		for(int j=0; j<=5; j++)
		{
			cout<<b[i][j]<<ends;
		}
		cout<<"\n";
	}
getch();
}