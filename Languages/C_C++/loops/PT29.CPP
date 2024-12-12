#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
for(int m=1; m<=5; m++)
{

	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=i; j++)
		{
		printf("%d",j);
		}
		printf("\n");
	}

	for(int p=5; p<=1; p--)
	{
		for(int q=p; q>=1; q--)
		{
		printf("%d",q);
		}
		printf("\n");

	}

}
getch();

}