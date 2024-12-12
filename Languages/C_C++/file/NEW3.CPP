#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	int a,fact=1;
	printf("enter your number::");
	scanf("%d",&a);
	for(int i=1; i<=a; i++)
	{
	fact=fact*i;
	}
	printf("fact is %d",fact);
	getch();
}