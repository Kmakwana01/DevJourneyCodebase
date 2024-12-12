#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();

	for(int i=1; i<=4; i++)
	{
		for(int j=i; j>=1; j--)
		{
		printf("%d",j);
		}
		printf("\n");
	}
	for(int p=5; p>=1; p--)
	{
		for(int q=p; q>=1; q--)
		{
		printf("%d",q);
		}
		printf("\n");
	}

getch();

}