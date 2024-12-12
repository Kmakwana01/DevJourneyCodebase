#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
		int r,n,b=0,base=1;
		cout<<"enter the decimal value :";
		cin>>n;

		while(n>0)
		{
			r=n%2;
			b=b+r*base;
			n=n/2;
			base=base*10;
		}
		cout<<"binary number is "<<b;
		getch();
}