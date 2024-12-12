#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=2,count=0;
clrscr();
	printf("enter the n value: ");
	scanf("%d",&n);

	do
	{
		if(n%i==0)
		{
		count++;
		break;
		}
		i++;
	}
	while(n>i);
	if(count==1)
	{
		printf("not prime");
	}
	else
	{
	printf("prime");
	}
	getch();
	}


