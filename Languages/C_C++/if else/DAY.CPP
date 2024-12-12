#include<stdio.h>
#include<conio.h>
void main()
{
int week;

clrscr();
	printf("enter the week fay (1-7) =");
	scanf("%d",&week);
	if(week==1)
	{
		printf("monday");
	}
	else if(week==2)
	{
		printf("tuesday");
	}
	else if(week==3)
	{
		printf("wednesday");
	}
	else if(week==4)
	{
		printf("thursday");
	}
	else if(week==5)
	{
		printf("friday");
	}
	else if(week==6)
	{
		printf("saturday");
	}
	else if(week==7)
	{
		printf("sonday");
	}
	else
	{
		printf("enter a vali day(1-7)");
	}
	getch();
	}