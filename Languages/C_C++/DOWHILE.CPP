
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,number;
	printf("enter the number");
	scanf("%d",&number);

clrscr();

	do
	{
	printf("\n%d X %d = %d",number,i,number*i);
	i++;
	}
	while(i<=10);
	getch();
	}

