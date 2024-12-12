#include<iostream.h>
#include<conio.h>
void main()
{               clrscr();
		for(int i=5; i>=1; i--)
		{
			for(int j=1; j<=i; j++)
			{
				cout<<j;
			}
			for(j=i; j<5; j++)
			{
				cout<<"  ";
			}
			for(int k=i; k>=1; k--)
			{
				cout<<k;
			}
			cout<<endl;
		}
		for(i=1; i<=5; i++)
		{
			for(int j=1; j<=i; j++)
			{
				cout<<j;
			}
	       //		cout<<endl;
	     //	}

	    //	for(i=1; i<=5; i++)
	  //	{
			for(j=i; j<5; j++)
			{
			cout<<"  ";
			}
			for(int k=i; k>=1; k--)
			{
				cout<<k;
			}
			cout<<endl;
		}
getch();
}