#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s=1;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %2d",s++);
		}
		printf("\n");
	}
	getch();
}