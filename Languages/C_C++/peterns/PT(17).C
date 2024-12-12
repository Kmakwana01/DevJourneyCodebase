#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s=15;
	clrscr();

	for(i=5;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf(" %2d",s--);

		}
		printf("\n");
	}
	getch();
}