
#include<stdio.h>
#include<conio.h>
void main()
{
	int  i,j,s;
	clrscr();
	{
	for(i=5;i>=1;i--)
	{
		for(s=1;s<i;s++)
		{
			printf(" ");

		}
		for(j=5;j>=i;j--)
		{
			printf("*");
		}
	printf("\n");
	}

	}
	getch();




}