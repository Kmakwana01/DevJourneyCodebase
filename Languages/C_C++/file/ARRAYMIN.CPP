#include<iostream.h>
#include<conio.h>
void main()
{
	int a[100],min,n;
	cout<<"enter array size::";
	cin>>n;
	for(int i=0; i<=n; i++)
	{
		cout<<"a["<<i<<"]::";
		cin>>a[i];
	}
	for(i=0; i<=n; i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	cout<<"min is "<<min;
	getch();
	}