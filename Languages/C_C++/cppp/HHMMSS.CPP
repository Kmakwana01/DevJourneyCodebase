#include<iostream.h>
#include<conio.h>
void main()
{
		clrscr();
		int sec,h,m,s;
		cout<<"enter the second ::";
		cin>>sec;
		h=sec/3600;
		sec=sec%3600;
		m=sec/60;
		s=sec%60;
		cout<<"HH:MM:SS :: "<<h<<":"<<m<<":"<<s;
		getch();
}