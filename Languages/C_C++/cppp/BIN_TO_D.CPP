#include<iostream.h>
#include<conio.h>
void main()
{
		int r,n,d=0,base=1;
		cout<<"enter the binary number::";
		cin>>n;
		while(n>0)
		{
			r=n%10;
			d=d+r*base;
			n=n/10;
			base=base*2;
		}
		cout<<"decimal number is "<<d;
		getch();
}