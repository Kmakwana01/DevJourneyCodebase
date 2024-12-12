#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int sum=0,n,rem;
	cout<<"enter n value::";
	cin>>n;
	int p=n;
	while(n!=0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	cout<<sum;
	if(sum==p)
	{
		cout<<"\npalindrome number::";
	}
	else
	{
		cout<<"\nnot::";
	}
	getch();
	}