#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	for(int i=1; i<=5; i++)
	{
		for(int j=i; j>=1; j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
getch();
}

