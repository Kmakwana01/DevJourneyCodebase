#include<iostream>
#include<conio.h>
int main()
{
		// clrscr();
		int sec,h,m,s;
		std::cout<<"enter the second ::";
		std::cin>>sec;
		h=sec/3600;
		sec=sec%3600;
		m=sec/60;
		s=sec%60;
		std::cout<<"HH:MM:SS :: "<<h<<":"<<m<<":"<<s;
		// getch();
		return 0;
}