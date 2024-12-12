#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	long long int a,b,c;
	printf("enter your amount::");
	scanf("%lld",&a);

	printf("entee the rate::");
	scanf("%lld",&b);

	printf("enter your year::");
	scanf("%lld",&c);

	long long int d=a*b/100;
	printf("%lld",d);

getch();
}