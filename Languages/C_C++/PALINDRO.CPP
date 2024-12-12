#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	 int n,r,temp,sum=0;
	 cout<<"Enter Number:";
	 cin>>n;
	 temp=n;

	 while(n>0)
	 {
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	 }
	 if(sum==temp)
	 cout<< temp <<" is an Palindrome number.";
	 else
	 cout<< temp <<" is not an Palindrome number. " ;
	 getch();
}