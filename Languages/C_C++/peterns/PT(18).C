#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j==2||j==4)
			{
				printf(" *");
			}
			else
			{
				printf(" 1");
			}
		}
		printf("\n");
	}
	getch();
}