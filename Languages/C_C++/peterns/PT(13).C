#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();

	for(i=1;i<=5;i=i+1)
	{
		for(j=i;j>=1;j--)   //j=j-1
		{
			printf("%2d",j*2);
		}
		printf("\n");
	}

	getch();
}