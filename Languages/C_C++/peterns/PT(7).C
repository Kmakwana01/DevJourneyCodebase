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
			if(j==1 || j==3 || j==5)
			{
				printf(" 1");
			}
			else
			{
				printf(" 0");
			}
		}
		printf("\n");
	}
	getch();
}
