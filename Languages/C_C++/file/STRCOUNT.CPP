#include<iostream.h>
#include<conio.h>

void main()
{
		clrscr();
		char a[100],count=0;
		cout<<"enter string::";
		cin>>a;
		for(int i=0; a[i]!=NULL; i++)
		{
			if(a[i]>='a'&& a[i]<='z')
			{
				count++;
			}
		}
		cout<<"\nlower case is "<<(int)count;
		count=0;
		for(i=0; a[i]!=NULL; i++)
		{
			if(a[i]>='A'&& a[i]<='Z')
			{
				count++;
			}
		}
		cout<<"\nupper case is "<<(int)count;

		count=0;
		for(i=0; a[i]!=NULL; i++)
		{
			if(a[i]>='1'&& a[i]<='9'|| (a[i]==0))
			{
				count++;
			}
		}
		cout<<"\ndigit is "<<(int)count;
		count=0;
		for(i=0; a[i]!=NULL; i++)
		{
			if(a[i]==' ')
			{
				count++;
			}
		}
		cout<<"\nspace is "<<(int)count;

		count=0;
		for(i=0; a[i]!=NULL; i++)
		{
				count++;
		}
		cout<<"\nstring total is "<<(int)count;
		getch();
		}

