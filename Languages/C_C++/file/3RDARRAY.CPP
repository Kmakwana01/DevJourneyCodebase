#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[100],p[100],c[100],n,count=0;
	cout<<"enter array size::";
	cin>>n;
	for(int i=0; i<=n; i++)
	{
		cout<<"a["<<i<<"]::";
		cin>>a[i];
		c[count]=a[i];
		count++;
	}
	cout<<"\n";
	for(i=0; i<=n; i++)
	{
		cout<<"p["<<i<<"]::";
		cin>>p[i];
		c[count]=p[i];
		count++;
	}
	cout<<"\n\n";
	for(i=0; i<count; i++)
	{
		cout<<"c["<<i<<"]::"<<c[i]<<endl;
	}
	getch();
	}

