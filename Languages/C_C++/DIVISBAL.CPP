#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
	printf("enter the num: ");
	scanf("%d",&num);

	if(num % 5 == 0 && num % 11 == 0)
	{
		printf("number is divisible by 5 and 11");
	}
	else
	{
		printf("number is not divisible by 5 and 11");
	}
	getch();
	}