#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	for(int i=1; i<=5; i++)
	{
		for(int j=i; j<5; j++)
		{
			printf(" ",j);
		}
		for(int k=1; k<=i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
getch();
}
