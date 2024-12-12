#include<iostream.h>
#include<conio.h>
void main()
{
	 int n,i,fact=1;

	 cout<<"enter n value::";
	 cin>>n;

	 for(i=1; i<=n; ++i)
	 {
		fact*=i;
	 }
	 cout<<"factorial is "<<fact;
	 getch();
}
