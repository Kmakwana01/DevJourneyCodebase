#include<stdio.h>
#include<conio.h>
int fact(int n);
int main()
{
clrscr();
printf("fact %ld",fact(5));
getch();
return 0;
}
int fact(int n)
{
	if(n==1)
	{
	return 1;
	}
int factnm1=fact(n-1);
int factn=factnm1*n;
return factn;
}

