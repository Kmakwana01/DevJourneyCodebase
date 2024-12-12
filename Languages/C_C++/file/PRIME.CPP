#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,count=0;
	cout<<"enter n value::";
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		cout<<"prime number::";
	}
	else
	{
		cout<<"not prime number::";
	}
	getch();
	}