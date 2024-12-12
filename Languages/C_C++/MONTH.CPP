#include<stdio.h>
#include<conio.h>
void main()
{
int month;
clrscr();
	printf("enter the month: ");
	scanf("%d",&month);

	if(month==1)
	{
		printf("january and 31 days");
	}
	else if(month==2)
	{
		printf("february and 28/29 days");
	}
	else if(month==3)
	{
		printf("march and 31 days");
	}
	else if(month==4)
	{
		printf("april and 30 days");
	}
	else if(month==5)
	{
		printf("may and 31 days");
	}
	else if(month==6)
	{
		printf("june and 30 days");
	}
	else if(month==7)
	{
		printf("july and 31 days");
	}
	else if(month==8)
	{
		printf("august and 30 days");
	}
	else if(month==9)
	{
		printf("suptember and 31 days");
	}
	else if(month==10)
	{
		printf("octomber and 30 days");
	}
	else if(month==11)
	{
		printf("november and 31 days");
	}
	else if(month==12)
	{
		printf("desember and 30 days");
	}
	else
	{
		printf("please enter the valid month(1-12):-");
	}
	getch();
	}
